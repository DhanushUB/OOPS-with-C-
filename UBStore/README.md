The University Store

The University Store may like to create an application which enables the users to create and maintain a shopping cart on a computer or online. The shopping Cart application must enable the user to enter the name and quantity of each shopping item. As well as the user must also be able to display the contents of the shopping list.
Your application will have two classes:
1-	ShoppingItem Class: 
This class has three private variables:   
-	A string name  , an int quantity and a pointer to ShoppingItem called next.
-	The class has the following methods:
-	ShoppingItem : a constructor with 3 parameters : the first is a reference to string , the second is an int and the third is of ShoppingItem type.  This constructor is used to initialize the private data member using the setter methods.
-	setName: This method should be used to set the value of the private member name.
-	getName: This method should be used to retrieve the value of the private member name.
-	setQuantity: This method should be used to set the value of the private member quantity.
-	getQuantity: This method should be used to retrieve the value of the private member quantity.
-	setNextItem: This method should be used to set the value of the private member quantity.
-	getNextItem: This method should be used to retrieve the value of the private member quantity.
-	display : This method will print the whole cart items to the screen.
-	Overloading the output operation to be used in the display method.

2-	List class: It has a private pointer to ShoppingItem called firstItem . and has the following methods:
-	List() : a default constructor
-	setFirstItem   : this method should be used to set the value of the private data member firstItem.
-	getFirstName: this method should be used to return the value of the private firstItem.
-	addItem : this method should be used to add a new item to the cart.
-	displayList : This method will display all methods in the cart.
-	deleteList :  this method is for deleting all items from your cart.
Your main application should include the following:
-	Display a menu containing options for adding a new item to the shopping list, also, display the shopping cart and exiting the application.
-	Prompt the user for the input the menu selection.
-	Adding new item to the shopping list: prompt the user to enter the data of the item (name, quantity,,, etc.) Then create a new ShoppingItem object and add it to the list.
-	Display: for each item in the list: Display all item’s data
-	Exiting the application: Make sure you delete each shopping Item from the Shopping cart then exit the application.


Your output may be like these screens

 
 


 



 
 




