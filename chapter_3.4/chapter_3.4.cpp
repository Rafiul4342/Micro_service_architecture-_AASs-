// chapter_3.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
#include<cstring>
#include<cmath>
using namespace std;

/*int main()
{

    float v;
    float p_v;
    float p[8] = { 1000,2000,3000,4000,5000,6000,7000,8000 };
    float r[8] = { 0.11,0.12,0.13,0.14,0.14,0.15,0.16,0.17, };

    cout << setw(5) << "n=1";
    for (int i = 2; i <= 8; i++)
        cout << setw(9) << "n=" << i;
    cout << "\n";
    for (int i = 0; i < 8; i++)
    {
        cout << setw(-6) << "p=";
        for (int j = 0; j < 8; j++)
        {
            if (j == 0)
                p_v = p[i];
            v = p_v * (1 * r[i]);
            p_v = v;
            //cout.precision(2);
            //cout.setf(ios::fixed, ios::floatfield);
            cout << v << setw(10);

        }
        cout << endl;
    }
    return 0;
}
       
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
*/

#include<iostream>
#include<iomanip>
#include<cmath>
#define  size 8
using namespace std;
int main()
{
    float v, pf;
    int n = size;
    float p[size] = { 1000,2000,3000,4000,5000,6000,7000,8000 };//9000,1000};
    float r[size] = { 0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18 };//,0.19,0.20};

    cout << setw(5) << "n=1";
    for (int i = 2; i <= size; i++)
        cout << setw(9) << "n=" << i;
    cout << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << setw(-6) << "p=";
        for (int j = 0; j < size; j++)
        {
            if (j == 0)
                pf = p[i];

            v = pf * (1 + r[i]);

            cout.precision(2);
            cout.setf(ios::fixed, ios::floatfield);
            cout << v << setw(10);
            pf = v;
        }
        cout << "\n";

    }
    return 0;
}
