#include "Menu.h"      
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void Menu::run() {
    vector<string> books;

    while (true) {
        cout << "Menu Options:" << endl;
        cout << "1. Add a new book" << endl;
        cout << "2. View all books" << endl;
        cout << "3. Exit" << endl;
        cout << "Please select an option (1-3): ";

        int choice;
        cin >> choice;

        if (choice == 1) {
            addBook.addBook(books);
        } 
        else if (choice == 2) {
            if (books.empty()) {
                cout << "No books in your journal yet.\n\n";
            } else {
                cout << "Books in your journal:" << endl;
                for (size_t i = 0; i < books.size(); ++i) {
                    cout << i + 1 << "- " << books[i] << endl;
                }
                cout << "\n\n";
            }
        }
        else if (choice == 3) {
            cout << "Exiting MyBookJournal. Goodbye!" << endl;
            break;
        }
        else {
            cout << "Invalid option. Please try again." << endl;
        }
    }
}
