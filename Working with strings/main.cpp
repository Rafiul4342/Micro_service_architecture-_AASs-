#include<iostream>
#include<cstring>
#include<vector>
#include<stdlib.h>
#include<string>

using namespace std;

void main() {

	string a, b, c;
	a = "Hello";
	b = "world";
	c = a + " ";
	c += b;
	
	cout << "c is " << c << endl;
	cout << "c is " << c.c_str() << endl;
	for (int i = 0; i < c.length(); i++)
		cout << c[i];
	cout << endl;
	

}