
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cmath>

using namespace std;


class Book {

	//data members
private:
	string ISBN;
	string title;
	string author;
	int pages;
	double price;
	int words;
	int wordsPerPage;

public:

	//member functions

	//default constructor
	Book();

	//paramterized constructor
	Book(string isbn, string title, string author, int pages, double price, int words);

	//getters

	string getISBN() const;
	string getTitle() const;
	string getAuthor() const;
	int getPages() const;
	double getPrice() const;
	int getWords() const;

	// Setters

	void setISBN(string isbn);
	void setTitle(string title);
	void setAuthor(string author);
	void setPages(int pages);
	void setPrice(double price);
	void setWords(int words);

	//calculate words per page
	int calcWordsPerPage();

	//display book information
	void displayBookInformation() const;
};