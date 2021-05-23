/* **************************************************** 

In this program we will create a shopping list with item number
corresponding price, the user will use different methods to 
add item and delete item  and finnally see the total price of
the items 

*******************************************************/


#include<iostream>
#include<cstring>
#include<iomanip>


using namespace std;

int const m = 50; // VARIABLE FOR CREATING ARRAY NUNBERS 
				  
//class declaration for items   

class  item {
	int item_number[m]; //menber variable array for item number 
	float price[m]; //menber variable array for item price 
	int count;    /* We are not sure how many items will  be on our list 
				   so we use this variable and set it to zero and 
				    increase by one for adding each item */
		
/* Corresponding methods declaration */

public:

	void getitem(void); // this method shows all the items number of 

	void show_item(void); // this method adds item number and price 

	void deteteitem(void);// this methods delete items form list 

	void tatalcost(void); // this method shows total cost 

	void cnt(void) {
		count = 0;
	}
};

// we will set the item using the function 

void item::getitem(void)
{
	cout << "Plese enter item number " << endl;
	cin >> item_number[count]; //setting item_number
	
	cout << "Plese enter item Price " << endl;
	cin >> price[count]; //setting item price 

	count++;
}

void item::show_item(void)
{
	for (int i = 0; i < count; i++)
	{
		cout << "item code: " << item_number[i] << endl; //displays all the items
		cout << "Item Price :" << price[i] << endl; //display item price 
	}
	cout << endl;
}

void item::deteteitem(void)
{
	int a;
	cout << "Please enter the item number " << endl;

	cin >> a;

	for (int i = 0; i < count; i++)
		if (item_number[i] == a)
			price[i] = 0;
}

void item::tatalcost(void)
{
	float sum = 0;
	for (int i = 0; i < count; i++)
		sum = sum + price[i];
	cout << "the total price is Price = " << sum<<endl;
}

int main() {

	int x;
	item list;
	list.cnt();
	do {
		cout << "Please";
		cin >> x;
		switch (x) {
		case 1:
			list.getitem();
			break;
		case 2:
			list.show_item();
			break;
		case 3:
			list.tatalcost();
			break;
		case 4:
			list.deteteitem();
			break;
		case 5:
			exit;
			
		}
	}

	while (x != 5);
		
		return 0;
}
