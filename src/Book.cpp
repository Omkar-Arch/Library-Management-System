#include "../include/Book.h"

Book::Book(string t, string a, int i, string p, string s)
{
    title = t;
    author = a;
    ISBN = i;
    publisher = p;
    status = s;
}

void Book::displayBookInfo() const
{
    cout << "Title Of The Book: " << title << endl;
    cout << "Author Of The Book: " << author << endl;
    cout << "ISBN Of The Book: " << ISBN << endl;
    cout << "Publisher Of The Book: " << publisher << endl;
    cout << "Status Of The Book: " << status << endl;
}

void Book::updateStatus(const string &newStatus)
{
    status = newStatus;
    cout << "Book Status Updated: " << status << endl;
}

string Book::getTitle() const
{
    return title;
}

int Book::getISBN() const
{
    return ISBN;
}

string Book::getStatus() const
{
    return status;
}