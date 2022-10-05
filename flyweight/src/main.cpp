#include <string>
#include <iostream>

#include "User.hpp"
key User::seed = 0;
boost::bimap<key, std::string> User::names{};

#include "BoostUser.hpp"
#include "FormattedText.hpp"

int main() {

    User john_doe{ "John", "Doe" };
    User jane_doe{ "Jane", "Doe" };
    std::cout << "John " << john_doe << std::endl;
    std::cout << "Jane " << jane_doe << std::endl;
    User::info();


    BoostUser user1{"John", "Smith"};
    BoostUser user2{"Jane", "Smith"};
    std::cout << user1.first_name << std::endl;
    std::cout << std::boolalpha << (&user1.first_name.get() == &user2.first_name.get()) << std::endl;
    std::cout << std::boolalpha << (&user1.last_name.get() == &user2.last_name.get()) << std::endl;


    FormattedText formatText("This is a brave new world");
    formatText.get_range(10, 15).capitalize = true;
    std::cout << formatText << std::endl;
    
    return 0;
}