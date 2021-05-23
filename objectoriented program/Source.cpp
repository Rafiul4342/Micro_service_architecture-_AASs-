#include<iostream>
#include<cstring>

using namespace std;


class item{

	int itemnumber;
	float price;

public:

	void set_item(void);
	void get_item();
};

void item::set_item(void)
{
	cout << "Please enter the item_number and the corresponding price" << endl;
	cin >> itemnumber;
	cin >> price;
}
void item::get_item()
{
	cout << " item_numberber = " << itemnumber<<endl;
	cout << "price of the item = " << price << endl;
}

void main()
{
	item toiletpaper;
	toiletpaper.set_item();
	toiletpaper.get_item();
		
}