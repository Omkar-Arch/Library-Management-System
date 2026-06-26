#include "../include/Library.h"

int main()
{
    Library lib;

    // Books
    Book b1("Atomic Habits",
            "James Clear",
            12345,
            "Penguin",
            "Available");

    Book b2("THE MAHABHARAT",
            "Ved Vyas",
            67890,
            "Geeta Press Gorakhpur",
            "Available");

    Book b3("1984",
            "George Orwell",
            11223,
            "Secker & Warburg",
            "Available");

    lib.addBook(b1);
    lib.addBook(b2);
    lib.addBook(b3);

    // Users
    User u1(101,
            "john@example.com",
            "John");

    User u2(102,
            "sara@example.com",
            "Sara");

    User u3(103,
            "mike@example.com",
            "Mike");

    lib.registerUser(u1);
    lib.registerUser(u2);
    lib.registerUser(u3);

    // Issue Books
    lib.assignToUser(b1, u2);
    lib.assignToUser(b3, u3);

    // Display Details
    b1.displayBookInfo();
    b3.displayBookInfo();

    // Search
    lib.searchBookByTitle("THE MAHABHARAT");
    lib.searchBookByTitle("Unknown Book");

    // List
    lib.listAllBooks();

    // Remove
    lib.removeBook(67890);

    // List Again
    lib.listAllBooks();

    return 0;
}