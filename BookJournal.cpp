/* MyBookJournal - A simple journal application 
    This is a project I've thinking about for a while now. 
    I personally love books, so the idea of creating a program where I can store every book
    I've read came to me. 
    
    The purpose of this programm is to collect, store and display every book with its title, author,
    and maybe some more features I will think about in the future.*/

#include "include/Menu.h"
#include <iostream>
using namespace std;

int main() {
    cout << "== Welcome to MyBookJournal! == \n" << endl;
    Menu menu;
    menu.run();
    return 0;

}