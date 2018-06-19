#include "Library.h"
#include <iostream>
#include <cstring>
using namespace std;
Library::Library(int BookSpace):bookShelfSpace(BookSpace)
{
	int i;
	
        bookShelf=BookPointer;
        for(i=0; i<BookSpace; i++)
        {
                BookPointer[i]=NULL;
        }
}

Library::~Library()
{
int i=0;
        while(i<bookShelfSpace)
        {
               if(BookPointer[i]!=NULL)
               {
                       delete BookPointer[i];
                       BookPointer[i]=NULL;
					   return;
               }
	i++;
        }
}

int Library::getBookCount()
{
        return Book::getCount();
}

int Library::getBookShelfSpace() const
{
        return bookShelfSpace;
}

void Library::addBook(char bookTitle[], char bookCallNumber[], bool bookCirculatity)
{
int i=0;
	int Space=getBookCount();
	if (Space<bookShelfSpace)
	{ 
		for (;i<=bookShelfSpace;i++)
		{
			if(BookPointer[i]==NULL)
			{
			BookPointer[i]=new Book(bookTitle,bookCallNumber,bookCirculatity);
			return;
			}
		}
	}
	else
	cout<<"\nBookshelf is full";
}
void Library::removeBookByTitle(char bookTitle[])
{
int i=0;
	while (i<bookShelfSpace)
	{
		if (BookPointer[i]!=NULL)
		{
			if(strcmp(BookPointer[i]->getTitle(),bookTitle)==0)
			{
				delete BookPointer[i];
				BookPointer[i]=NULL;
				cout<<"\nBook removed";
			}
		}	
		i++;
	}
	cout<<"\nNo book matching this title";
}

void Library::removeBookByCallNo(char bookCallNo[])
{
	int i=0;
        for(;i<bookShelfSpace;i++)
        {
                if (BookPointer[i]!=NULL)
                {
                        if(strcmp(BookPointer[i]->getCallNumber(),bookCallNo)==0)
                        {
                                delete BookPointer[i];
                                BookPointer[i]=NULL;
                                cout<<"\nItem removed";
                        }
                }
        }
        cout<<"\n there is no book with given callnumber";
}

void Library::displayAllBooks() const
{
int i=0;
        int flag=0;
        cout<<"\nBooks on shelf \n";
        while (i<bookShelfSpace)
        {
               if(BookPointer[flag]!=NULL)
               {
                       cout<<"\nBook Title: "<<BookPointer[i]->getTitle();
			flag++;
               }
	i++;
        }
        if(flag==0)
	{
               cout<<"library is empty";
	}
}

const Book* Library::getBookByTitle(char bookTitle[]) const
{
int i=0;
	for (i=0;i<bookShelfSpace;i++)
	{
		if(BookPointer[i]!=NULL)
		{
			if(strcmp(BookPointer[i]->getTitle(),bookTitle)==0)
			{	
				cout<<"\nItem found";
				return BookPointer[i];
			}
		}
	}
	cout<<"\nGiven book title is not present in library";
	return NULL;

}


const Book* Library::getBookByCallNo(char checkcallnumber[]) const
{
int i=0;
        while (i<bookShelfSpace)
        {
                if(BookPointer[i]!=NULL)
                {
                        if(strcmp(BookPointer[i]->getTitle(),checkcallnumber)==0)
                        {
                                return BookPointer[i];
                                cout<<"\nItem found";
                        }
                }
	i++;
        }
        cout<<"\nGiven call number is present in library ";
		return NULL;
}
