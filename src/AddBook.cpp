#include "../include/AddBook.h"
#include <iostream>

using namespace std;

void AddBook::addBook(vector<string>& books) {
    cout << "Which book would you like to add? ";
    string bookTitle;
    getline(cin >> ws, bookTitle);   // allows spaces

    cout << "Who is the author of " << bookTitle << "? ";
    string author;
    getline(cin >> ws, author);

    books.push_back(bookTitle + " by " + author);
    cout << "Book added successfully!\n\n";
}