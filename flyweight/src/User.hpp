#include <cstdint>
#include <string>
#include <boost/bimap.hpp>

typedef uint32_t key;

struct User {
public:
    User(const std::string& first_name, const std::string& last_name) 
        : first_name{add(first_name)}, last_name{add(last_name)} {
    }

    const std::string& get_first_name() const {
        return names.left.find(last_name)->second;
    }
    const std::string& get_last_name() const {
        return names.left.find(last_name)->second;
    }
    static void info() {
        for (auto entry : names.left) {
            std::cout << "Key: " << entry.first << ", Value: " << entry.second << std::endl;
        }
    }

    friend std::ostream& operator<<(std::ostream& os, const User& obj) {
        return os
        << "first_name: " << obj.first_name << " " << obj.get_first_name()
        << " last_name: " << obj.last_name << " " << obj.get_last_name();
    }

protected:
    key first_name, last_name;
    static boost::bimap<key, std::string> names;
    static key seed;
    static key add(const std::string& s) {
        auto it = names.right.find(s);
        if (it == names.right.end()) {
            names.insert({++seed, s});
            return seed;
        }
        return it->second;
    }
};