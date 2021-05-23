// this program features a very simple example of a class and shows the basics of object orinented programming demonstrationg how to 
// give atttributes to the objects in the form of number and quantity 


#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

// every thing we see around is an example of object so in C++ we are going to see how to create an object and how to assingn attributes
// these objects and one major advantage of this paradim is that it the program has control over its data 

class Item{

	int quantity;		// we are declaring the variables related to an item

	float price;		// WE are declaring the variables to cost 

public :
	void get_data(int a, float b);

	void show_data(void)

	{
		cout << " quantity = " << quantity <<endl;
		cout<<  "price =" << price<<endl;
}

};


void Item::get_data(int a, float b)
{   

	quantity = a;
	price = b;

}


int main()
{
	Item apple;

	cout << "the object apple" << endl;

	apple.get_data(4, 50);
	apple.show_data();

		Item bananana;
		bananana.get_data(15, 100);
		bananana.show_data();
		return 0;
}