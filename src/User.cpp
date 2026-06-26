#include "../include/User.h"

User::User(int id, string e, string n)
{
    userID = id;
    email = e;
    name = n;
}

void User::displayUserInfo() const
{
    cout << "User ID: " << userID << endl;
    cout << "Email: " << email << endl;
    cout << "Name: " << name << endl;
}

string User::getName() const
{
    return name;
}