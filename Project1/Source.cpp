#include<iostream>
#include<conio.h>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
    int m;
    int* v;
    cout << "  Enter vector size : " << endl;
    cin >> m;
    v = new int[m];
    cout << " to check your performance  insert " << m << " integer value" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    cout << " Given integer value are :" << endl;
    for (int j = 0; j < m; j++)
    {

        if (j == m - 1)
            cout << v[j];
        else
            cout << v[j] << ",";

    }
    cout << endl;
    return 0;
}