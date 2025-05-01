#include "Global.h"

int Global::currId = -1;
user Global::currUser;

std::map<int , user> Global::users;
std::list<Property> Global::properties;

std::string Global::toLowerCase(const std::string& s) {
    std::string res;
    for (char c : s) {
        res.push_back(std::tolower(static_cast<unsigned char>(c)));
    }
    return res;
}