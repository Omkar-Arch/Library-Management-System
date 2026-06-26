#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

using namespace std;

class User
{
private:
    int userID;
    string email;
    string name;

public:
    // Constructor
    User(int id, string e, string n);

    // Member Function
    void displayUserInfo() const;

    // Getter
    string getName() const;
};

#endif