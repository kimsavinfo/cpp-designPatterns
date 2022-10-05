#include <string>
#include <boost/flyweight.hpp>
#include <boost/flyweight/key_value.hpp>

struct BoostUser {
    boost::flyweight<std::string> first_name, last_name;
    
    BoostUser(const std::string &first_name, const std::string &last_name)
        : first_name(first_name),
        last_name(last_name) {
    }
};