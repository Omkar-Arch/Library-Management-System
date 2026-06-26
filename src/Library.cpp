#include "../include/Library.h"

void Library::addBook(const Book &book)
{
    shelf.push_back(book);
    cout << "New Book Added: " << book.getTitle() << endl;
}

bool Library::removeBook(int targetISBN)
{
    for (int i = 0; i < shelf.size(); i++)
    {
        if (shelf[i].getISBN() == targetISBN)
        {
            cout << "Removing Book: " << shelf[i].getTitle() << endl;
            shelf.erase(shelf.begin() + i);

            cout << "Book Removed Successfully!" << endl;
            return true;
        }
    }

    cout << "Book Not Found!" << endl;
    return false;
}

void Library::registerUser(const User &user)
{
    users.push_back(user);

    cout << "New User Registered: "
        << user.getName()
        << endl;
}

void Library::assignToUser(Book &book, const User &user)
{
    book.updateStatus("Borrowed By User: " + user.getName());

    cout << "Book Assigned To User: "
        << user.getName()
        << endl;
}

void Library::searchBookByTitle(const string &targetTitle) const
{
    bool found = false;

    for (const Book &book : shelf)
    {
        if (book.getTitle() == targetTitle)
        {
            cout << "\nBook Found!\n";

            book.displayBookInfo();

            found = true;
        }
    }

    if (!found)
    {
        cout << "Book Not Found!" << endl;
    }
}

void Library::listAllBooks() const
{
    if (shelf.empty())
    {
        cout << "Library is Empty." << endl;
        return;
    }

    cout << "\nBooks Available:\n";

    for (const Book &book : shelf)
    {
        cout << "- " << book.getTitle() << endl;
    }
}