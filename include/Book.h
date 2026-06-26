#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    int ISBN;
    string publisher;
    string status;

public:
    //Constructor
    Book(string t, string a, int i, string p, string s);

    //Member Functions
    void displayBookInfo() const;
    void updateStatus(const string &newStatus);

    // Getter Functions
    string getTitle() const;
    int getISBN() const;
    string getStatus() const;
};

#endif