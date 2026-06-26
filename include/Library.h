#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <vector>

#include "Book.h"
#include "User.h"

using namespace std;

class Library
{
private:
    vector<Book> shelf;
    vector<User> users;

public:
    void addBook(const Book &book);

    bool removeBook(int targetISBN);

    void registerUser(const User &user);

    void assignToUser(Book &book, const User &user);

    void searchBookByTitle(const string &targetTitle) const;

    void listAllBooks() const;
};

#endif