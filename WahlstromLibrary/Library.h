#include "Book.h"
class Library {
public:
	Library(int = 10);
	~Library();
	void addBook(char[], char[], bool);
	void removeBookByTitle(char[]);
	void removeBookByCallNo(char[]);
	const Book* getBookByTitle(char[]) const;
	const Book* getBookByCallNo(char[]) const;
	void displayAllBooks() const;
	static int getBookCount();
	int getBookShelfSpace() const;
	//friend ostream & operator<< (ostream& , const Library & );
private:
	Book **bookShelf;
	Book *BookPointer[10];
	const int bookShelfSpace;
};

