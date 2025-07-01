#include <iomanip>
#include <fstream>
#include "book.h"

using namespace std;

 int main() {
       const int SIZE = 10;
       Book books[SIZE];

       ifstream infile("C:/Users/melfa/Downloads/books.txt");


        for (int i = 0; i < SIZE; i++) {
            string isbn;
            string title;
            string author;
            int pages;
            double price;
            int words;

            getline(infile, isbn);

            getline(infile, title);

            getline(infile, author);

            infile >> pages;

            infile >> price;

            infile >> words;

            //ignore to clear line
            infile.ignore();

            //Create the Book object
            books[i] = Book(isbn, title, author, pages, price, words);
        }

        cout << left << setw(23) << "ISBN" << left << setw(30) << "Title" << left << setw(23) << "Author" << left << setw(10) << "Pages" << left <<
            setw(10) << "Price" << left << setw(10) << "Words per Page" << endl;
        //Display all books
        for (int i = 0; i < SIZE; i++) {
            books[i].displayBookInformation();
        }
    }