#include <iostream>
#include "book.h"
#include <iomanip>

using namespace std;

    Book::Book() {
        string ISBN = "";
        string title = "";
        string author = "";
        int pages = 0;
        double price = 0.0;
        int words = 0;
    }

    // Constructor with parameters
    Book::Book(string isbn, string t, string a, int p, double pr, int w) {
        ISBN = isbn;
        title = t;
        author = a;
        pages = p;
        price = pr;
        words = w;
    }

    // Getters
    string Book::getISBN() const { 
        return ISBN; 
    }

    string Book::getTitle() const {
        return title; 
    }

    string Book::getAuthor() const { 
        return author; 
    }

    int Book::getPages() const {
        return pages; 
    }

    double Book::getPrice() const {
        return price; 
    }

    int Book::getWords() const {
        return words; 
    }

    // Setters
    void Book::setISBN(string isbn) {
        ISBN = isbn; 
    }

    void Book::setTitle(string t) {
        title = t; 
    }

    void Book::setAuthor(string a) {
        author = a; 
    }

    void Book::setPages(int p) {
        pages = p; 
    }

    void Book::setPrice(double pr) {
        price = pr; 
    }

    void Book::setWords(int w) {
        words = w; 
    }

    // Calculate words per page
    int Book::calcWordsPerPage() {
        wordsPerPage = words / static_cast<int>(pages);
        return wordsPerPage;
    }

    //display results
    void Book::displayBookInformation() const {
        cout << left << setw(23) << ISBN << left << setw(30) << title << left << setw(23) << author << left << setw(10) << pages << left <<
            setw(10) << price << left << setw(10) << wordsPerPage << endl;
    }