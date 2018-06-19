Wahlstrom Library

You have been given the header for class Book, the header for class Library, and test code for function main.    You may not change any of the code that has been provided.  However, you may add additional test cases to function main and add preprocessor directives to all files as needed. 
 
Your assignment is to write the member function definitions for classes Book and Library.  Your program must be broken up into the following files:
Book.h
Book.cpp
Library.h
Library.cpp
LibraryBooksDemo.cpp
 
Use the following guidelines when writing you code:
•	The Book constructor - Book(char*,char*,bool) – accepts three arguments.  The first is used to initialize the title member.  The second is used to initialize the callNumber member.  The last argument represents a flag used to indicate if the book object is circulating or non-circulating.  True for circulating, False for non-circulating.  The Book constructor is to increment bookCount. The Book destructor is to decrement bookCount.
•	setCirculating(bool) assigns a value - True  or False – to circulating. 
•	Member function getCount() is to return the value of bookCount.
•	The Library constructor - Library(int=10) – accepts a single argument that represents the maximum number of books that can be held on the bookShelf.  Use that value both to allocate storage for bookShelf to point to and to initialize the const value bookShelfSpace.  The pointers in the bookShelf array are to be initialized to NULL.
•	The Library destructor dynamically destroys all the book objects pointed to by the bookshelf array by de-allocating their storage.
•	getBookCount() returns the number of books currently on the shelf.
•	getBookShelfSpace() returns the number of elements in the bookshelf array.
•	addBook(char*,char*,bool) dynamically requests storage for  a new book, initializes its member data, and puts its address in the next available location in the bookshelf array.  If bookShelf is full an error message is displayed.
·         removeBookByTitle(char*) destroys the Book object having the indicated title.  After the Book object’s storage has been de-allocated, its pointer in bookShelf is assigned a NULL value.   If the book to be removed cannot be found an error message is displayed.
·         RemoveBookByCallNo(char*) destroys the Book object having the indicated call Number.  After the Book object’s storage has been de-allocated, its pointer in bookShelf is assigned a NULL value.   If the book to be removed cannot be found an error message is displayed.
 
//Book.h
 
class Book {
public:
	Book(char*, char*, int = true);
	~Book();
	int getCirculating()const;
	void setCirculating(bool);
	const char* getTitle()const;
	const char* getCallNumber()const;
	static int getCount();
private:
	char title[30];
	char callNumber[25];
	static int bookCount;
	bool circulating;
};

 

//Library.h
class Library {
public:
	Library(int = 10);
	~Library();
	void addBook(char*, char*, bool);
	void removeBookByTitle(char*);
	void removeBookByCallNo(char*);
	const Book* getBookByTitle(char*) const;
	const Book* getBookByCallNo(char*) const;
	void displayAllBooks() const;
	static int getBookCount();
	int getBookShelfSpace() const;
	friend ostream & operator<< (ostream& , const Library & );
private:
	Book **bookShelf;
	const int bookShelfSpace;
};

 
 
//LibraryBooksDemo.cpp
void main() {
	Library Wahlstrom(5);
	Wahlstrom.displayAllBooks();
	cout << "Book count = " << Book::getCount() << endl;
 
	Wahlstrom.addBook("Bridgeport1", "Wahlstrom123.54", true);
	Wahlstrom.addBook("Bridgeport2", "Wahlstrom123.55", false);
	Wahlstrom.addBook("Bridgeport3", "Wahlstrom123.56", true);
	Wahlstrom.addBook("Bridgeport4", "Wahlstrom123.57", true);
	Wahlstrom.addBook("Bridgeport5", "Wahlstrom123.58", true);
 
	Wahlstrom.displayAllBooks();
	cout << "Book count = " << Book::getCount() << endl;
 
	Wahlstrom.addBook("Bridgeport6", "Wahlstrom123.59", true);
	Wahlstrom.addBook("Bridgeport7", "Wahlstromi23.510", false);
 
	Wahlstrom.displayAllBooks();
	cout << "Book count = " << Book::getCount() << endl;
 
	Wahlstrom.removeBookByTitle("Bridgeport2");
	Wahlstrom.removeBookByCallNo("Wahlstrom123.57");
	Wahlstrom.removeBookByCallNo("Wahlstrom999.66");
 
	Wahlstrom.displayAllBooks();
	cout << "Book count = " << Book::getCount() << endl;
 
	Wahlstrom.addBook("Bridgeport6", "Wahlstrom123.59", true);
	Wahlstrom.addBook("Bridgeport7", "Wahlstrom123.510", false);
 
	Wahlstrom.displayAllBooks();
	cout << "Book count = " << Book::getCount() << endl;
 
	const Book *myBook1 = Wahlstrom.getBookByCallNo("Wahlstrom123.59");
	if (myBook1 != NULL) {
		cout << "Title: " << myBook1->getTitle() << endl;
		cout << "Call number: "
			<< myBook1->getCallNumber() << endl;
		cout << "Circulating: "
			<< (myBook1->getCirculating() ? "Yes" : "No") << endl;
	}
 
	const Book *myBook2 = Wahlstrom.getBookByTitle("Bridgeport7");
	if (myBook2 != NULL) {
		cout << "Title: " << myBook2->getTitle() << endl;
		cout << "Call number: "
			<< myBook2->getCallNumber() << endl;
		cout << "Circulating: ";
	} 
	
	system("pause");
}


Your output may be like this


 
