#pragma once
#include <iostream>
#include "Book.h"
#include <vector>
#include <string>
using namespace std;
class Library
{
private:
    vector<Book> books;
public:
    void AddBook(Book& book)
    {
        books.push_back(book);
    }
    void printBooks()
    {
        if (books.empty())
        {
            cout << "Library is empty." << endl;
            return;
        }
        for (size_t i = 0; i < books.size(); i++)
        {
            cout << i + 1 << ". ";
            books[i].PrintBook();
        }
    }
};
