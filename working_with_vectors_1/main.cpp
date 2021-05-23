#include<iostream>
#include<vector>
#include<stdlib.h>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{ 
	const int Random_Numbers = 100;
	
	// user input to ensure the size of our array

	int Total_Number;
	cout << "how many numbers to generate ?" << endl;
	cin >> Total_Number;

	vector<int> numbers(Random_Numbers + 1);

	// initializing the vectors to zeros.

	for (int i = 0; i < numbers.size(); i++)
		numbers[i] = 0;

	// GENERATING THE NUMBERS
	for (int j = 0; j < Total_Number; j++) {
		numbers[rand() % Random_Numbers + 1] ++;
		cout << numbers[j] << endl;
	}
	//for (int K = 1; K <= Random_Numbers; K++)
		//cout << K << " occours " << numbers[K] << " times" << endl;
	return 0;
}