/* MyBookJournal - A simple journal application 
    This is a project I've thinking about for a while now. 
    I personally love books, so the idea of creating a program where I can store every book
    I've read came to me. 
    
    The purpose of this programm is to collect, store and display every book with its title, author,
    and maybe some more features I will think about in the future.*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Menu class to handle user interactions
class Menu {
public:
    class AddBook {
    public:
        void addBook(vector<string>& books) {
            // Prompt for book details
            cout << "Which book would you like to add? ";
            string bookTitle;
            getline(cin >> ws, bookTitle);

            // Prompt for author details
            cout << "Who is the author of " << bookTitle << "? ";
            string author;
            getline(cin >> ws, author);

            books.push_back(bookTitle + " by " + author);
            cout << "Book added successfully!\n\n";
        }
    };

    AddBook addBook;

    void run() {
        // Store books in a vector
        vector<string> books;

        // Loop for menu options
        while (true) {
            cout << "Menu Options:" << endl;
            cout << "1. Add a new book" << endl;
            cout << "2. View all books" << endl;
            cout << "3. Exit" << endl;
            cout << "Please select an option (1-3): ";
        
            int choice;
            cin >> choice;

            // Handle menu choices
            if (choice == 1) {
                addBook.addBook(books);

            } 
            else if (choice == 2) {
                cout << "Books in your journal:" << endl;
                for (int i = 0; i < books.size(); i++) {
                    cout << i + 1 << "- " << books[i] << endl;
                }
                cout << "\n\n";
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
};



int main() {
    cout << "== Welcome to MyBookJournal! == \n" << endl;
    Menu menu;
    menu.run();
    return 0;

}