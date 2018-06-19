#include "Book.h"
#include <iostream>
#include <cstring>
Book::Book(char* Title,char* CallNumber,int bookC)
{
 strcpy(title,Title);
 strcpy(callNumber,CallNumber);
 circulating=bookC;
 Book::bookCount++;
}

Book::~Book()
{
 Book::bookCount--;
}

int Book::getCirculating() const
{
 return circulating;
}

void Book::setCirculating(bool bookCirculating)
{
 circulating=bookCirculating;
}

const char* Book::getTitle() const
{
 return title;
}

const char* Book::getCallNumber() const
{
 return callNumber;
}

int Book::getCount()
{
 return Book::bookCount;
}

int Book::bookCount = 0;

