#include <string>
#include<iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class ShoppingItem{
	public:
		//set name of the item
		void setName(string name) {
		   this->name = name;
		}
		//get the name of the item
		string getName() {
		   return this->name;
		}
		//set quantity of the item
		void setQuantity(int quantity) {
		   this->quantity = quantity;
		}
		//get quantity of the item
		int getQuantity() {
		   return this->quantity;
		}
		//set the next item pointer to the previous one
		void setNext(ShoppingItem *next) {
		   this->next = next;
		}
		//get the next item pointer
		ShoppingItem* getNext() {
		   return this->next;
		}
		//display items data
		void display() {
		   cout << "Name : " << name << endl;
		   cout << "Quantity : " << quantity << endl;
		}
		//shopping item constructor
		ShoppingItem(string name, int quantity, ShoppingItem *next){
			setName(name);
			setQuantity(quantity);
			setNext(next);
		}
		
	private:
		//name of the item
		string name;
		//quantity of the item
		int quantity;
		//pointer to next item in the cart
		ShoppingItem *next;
};

class List{
	public:
		//set the first item of the list
		void setFirstItem(ShoppingItem *firstItem){
			this->firstItem = firstItem;
		}
		//get the first items name of the list
		void getFirstName(){
			if(this->firstItem == NULL){
		   		cout << endl << "Cart is empty" << endl << endl;
		   	}
		   	else{
		   		cout << "First item name : " << this->firstItem->getName() << endl;	
			}
		}
		//get first item from list
		ShoppingItem* getFirstItem(){
			return this->firstItem;
		}
		//get the last item from the list internal function
		ShoppingItem* getLastItem(){
			ShoppingItem *temp = getFirstItem();
	   		while(temp->getNext()){
	   			temp = temp->getNext();
			}
			return temp;
		}
		//add item to the list
		void addItem(ShoppingItem *item){
			this->getLastItem()->setNext(item);
		}
		//display the entire cart
		void displayList() {
		   	if(this->firstItem == NULL){
		   		cout << endl << "Cart is empty" << endl << endl;
		   	}
		   else{
		   		cout << endl << "Shopping Cart" << endl << "............................" << endl;
		   		ShoppingItem *temp = this->getFirstItem();
		   		while(temp){
		   			temp->display();
					temp = temp->getNext();
					cout << "............................" << endl;
				}
				cout << endl;
		   }
		}
		//delete the cart
		void deleteList(){
			this->firstItem = NULL;
		}
		//list constructor 
		List(){
		    firstItem=NULL;
			}
	private:
		//first item of the list
		ShoppingItem *firstItem;
};

int main(){
	char scanner[1000];
	List list;
	while(1){
		//options display
		cout << "Select one of the following options" << endl << "1.Enter new item" << endl << "2.Display List" << endl << "3.Exit the application" << endl << endl << "Enter you option here : ";
		int searchOption = 0;
		scanf("%d", &searchOption);
		cin.clear();
		//console input ignore for future use in while loop
		cin.ignore(256, '\n');
		if(searchOption == 1){
			string name;
			cout  << endl;
			//get item name
			cout << "Enter the item name : ";
			scanf("%s", scanner);
			name = scanner;
			int quantity;
			//get item quantity
			cout << "Enter the item quantity : ";
			scanf("%s", scanner);
			quantity = atoi(scanner);
			cin.clear();
			cin.ignore();
			//create a new item
			ShoppingItem *item = new ShoppingItem(name, quantity, NULL);
			//add item to the cart
		   	if(!(list.getFirstItem())){
				list.setFirstItem(item);
			}
			else{
				list.addItem(item);
			}
			cout << endl;
		}
		else if(searchOption == 2){
			//display the entire cart
			list.displayList();
		}
		else if(searchOption == 3){
			//delete the cart
			list.deleteList();
			cout << endl << "Exiting the application" << endl;
			break;
		}
		else{
			//check user input
			cout << endl << "Please enter a valid option" << endl << endl;
		}
	}
}