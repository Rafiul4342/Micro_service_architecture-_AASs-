#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

void swap_function(int &a, int &b)
{
	int temp;
	cout << "the  value of a and b before swap is " << a << "  and " << b << endl;
	temp = a;
	a = b;
	b = temp;
	cout << "the value after swap is a = " << a << "and b = " << b << endl;
}


 int main()
{
	int c, d;

	cout << "please enter the value of two variable" << endl;
	cin >> c >> d;

	swap_function(c, d);
	return 0;

}