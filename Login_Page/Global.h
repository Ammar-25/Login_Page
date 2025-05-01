#pragma once
#include <vector>
#include <list>
#include <string>
#include <queue>
#include <map>
#include "Property.h"
#include "user.h"

class Global
{
public:
    // Global attributes
    static int currId; // Stores the ID of the currently signed-in user
    static user currUser;

    static std::map<int, user> users;
    static std::list<Property> properties;

    // Global functions
    static std::string toLowerCase(const std::string& s); // for searching
};
