#include <string>
#include <iostream>
using namespace std;
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

