//1.2.cpp
#include <iostream>
#include "Book.h"
using namespace std;
int main()
{
    Book b;
    b.Read(); 
    b.Display();

    string searchTerm;
    cout << "Enter search term: ";
    cin >> searchTerm;
    if (b.Search(searchTerm)) {
        std::cout << "The book matches the search criteria." << std::endl;
    }
    else {
        std::cout << "The book does not match the search criteria." << std::endl;
    }

    return 0;
}