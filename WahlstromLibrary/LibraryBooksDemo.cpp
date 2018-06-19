#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "Library.h"
using namespace std;
int main() {
	Library Wahlstrom(5);
	Wahlstrom.displayAllBooks();
	cout << "Book count = " << Book::getCount() << endl;
 
	Wahlstrom.addBook((char *)"Bridgeport1", (char *)"Wahlstrom123.54", true);
	Wahlstrom.addBook((char *)"Bridgeport2",(char *) "Wahlstrom123.55", false);
	Wahlstrom.addBook((char *)"Bridgeport3",(char *) "Wahlstrom123.56", true);
	Wahlstrom.addBook((char *)"Bridgeport4",(char *) "Wahlstrom123.57", true);
	Wahlstrom.addBook((char *)"Bridgeport5",(char *) "Wahlstrom123.58", true);
 
	Wahlstrom.displayAllBooks();
	cout << "Book count = " << Book::getCount() << endl;
 
	Wahlstrom.addBook((char *)"Bridgeport6",(char *) "Wahlstrom123.59", true);
	Wahlstrom.addBook((char *)"Bridgeport7",(char *) "Wahlstromi23.510", false);
 
	Wahlstrom.displayAllBooks();
	cout << "Book count = " << Book::getCount() << endl;
 
	Wahlstrom.removeBookByTitle((char *)"Bridgeport2");
	Wahlstrom.removeBookByCallNo((char *)"Wahlstrom123.57");
	Wahlstrom.removeBookByCallNo((char *)"Wahlstrom999.66");
 
	Wahlstrom.displayAllBooks();
	cout << "Book count = " << Book::getCount() << endl;
 
	Wahlstrom.addBook((char *)"Bridgeport6",(char *) "Wahlstrom123.59", true);
	Wahlstrom.addBook((char *)"Bridgeport7",(char *) "Wahlstrom123.510", false);
 
	Wahlstrom.displayAllBooks();
	cout << "Book count = " << Book::getCount() << endl;
 
	const Book *myBook1 = Wahlstrom.getBookByCallNo((char *)"Wahlstrom123.59");
	if (myBook1 != NULL) {
		cout << "Title: " << myBook1->getTitle() << endl;
		cout << "Call number: "
			<< myBook1->getCallNumber() << endl;
		cout << "Circulating: "
			<< (myBook1->getCirculating() ? "Yes" : "No") << endl;
	}
 
	const Book *myBook2 = Wahlstrom.getBookByTitle((char *)"Bridgeport7");
	if (myBook2 != NULL) {
		cout << "Title: " << myBook2->getTitle() << endl;
		cout << "Call number: "
			<< myBook2->getCallNumber() << endl;
		cout << "Circulating: ";
	} 
	
	system("sleep 1");
}


