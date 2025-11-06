/* MyBookJournal - A simple journal application 
    This is a project I've thinking about for a while now. 
    I personally love books, so the idea of creating a program where I can store every book
    I've read came to me. 
    
    The purpose of this programm is to collect, store and display every book with its title, author,
    and maybe some more features I will think about in the future.*/

#include <iostream>
#include <vector>

using namespace std;

class Menu {
public:
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
                cout << "Which book would you like to add? ";
                string bookTitle;
                cin >> bookTitle;

                books.push_back(bookTitle);
                cout << "Book added successfully!" << endl;

            } 
            else if (choice == 2) {
                cout << "Books in your journal:" << endl;
                for (const string& book : books) {
                    cout << "- " << book << endl;
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
};

int main() {
    cout << "== Welcome to MyBookJournal! == \n" << endl;
    Menu menu;
    menu.run();
    return 0;

}