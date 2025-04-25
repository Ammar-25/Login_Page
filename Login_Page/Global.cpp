#include "Global.h"
#include "vector"
#include <queue>
#include <map>
#include <iostream>
using namespace std;

int Global::currId = -1;
user Global::currUser;

vector<user> Global::users;
vector<Property> Global::properties;

string Global::toLowerCase(string s) {
    string res;
    for (auto c : s) {
        res.push_back(tolower(c));
    }
    return res;
}