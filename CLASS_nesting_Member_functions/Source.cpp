


/* IN this Program we will learn how to nest member functions with out calling that function using a . operatior*/

#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;


class set{

	int m, n;
public :

	void input(void);
	void display(void);

	int  largest(void);

};

void set::input(void)
{
	cout << "Please enter the value of m and n" << endl;
	cin >> m >> n;
}

void set::display(void)
{
	cout << " the largest value = "<< largest()<<endl;
}

int set::largest(void)
{
	if (m > n)
		return m;
	else
		return n;
	return 0;
}

void main()
{
	set A;
	A.input();
	A.display();

}