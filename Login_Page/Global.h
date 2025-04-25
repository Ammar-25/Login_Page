#pragma once
#include <vector>
#include <string>
#include <queue>
#include "Property.h"
#include "user.h"
using namespace std;
class Global
{
public:
	// Global attributes
	static int currId; // Stores the ID of the currently signed-in user
	static user currUser;

	static vector<user>users;
	static vector<Property>properties;


	// Global functions
	static string toLowerCase(string s); // for searching
};