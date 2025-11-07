#ifndef MENU_H
#define MENU_H

#include <vector>
#include <string>
#include "AddBook.h"  

class Menu {
public:
    void run();  // start the menu

private:
    AddBook addBook;   // object from AddBook class
};

#endif
