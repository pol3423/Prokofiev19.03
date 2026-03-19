#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book
{
private:
    std::string Title;
    std::string Author;
    int PubYear;
public:
    Book(std::string title = "", std::string author = "", int pubyear = 0)
        : Title(title), Author(author), PubYear(pubyear) {}
    void PrintBook()
    {
        
        cout << "Book: " << Title << "\n" << "Author: " << Author << "\n" << "Published Year: " << PubYear << endl;
        
    }
    void InputBook()
    {
        cout << "Input title of book: ";
        cin >> Title;
        cout << "Input author of book: ";
        cin >> Author;
        cout << "Input published year of book: ";
        cin >> PubYear;
    }
};
