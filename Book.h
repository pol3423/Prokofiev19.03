#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book
{
private:
    string Title;
    string Author;
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
        try
        {
            cin >> PubYear;
            if (cin.fail() || PubYear < 0)
                throw runtime_error("Invalid year");
        }
        catch (...)
        {
            std::cout << "Error: Year must be a positive number. Setting year to 0." << std::endl;
            PubYear = 0;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }
};
