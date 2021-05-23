// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<stdio.h>

using namespace std;

int POINTS[] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 };
char list[] = { 'a', 'b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
int compute_score(string word);
int add = 0;
int main()
{
	string word1, word2;
	cin >> word1;
	cin >> word2;
	int player1 = compute_score(word1);
	int player2 = compute_score(word2);
	if (player1 > player2)
		cout << "player 1 wins" << endl;
	else if (player1 < player2)
		cout << "player2 wins" << endl;
	else
		cout << "game draw";


}
int compute_score(string word) {
	for (int i = 0; i < word.length(); i++)
	{
		for (int j = 0; j < 26; j++) {

			if (list[j] == word[i]) {

				add = add + POINTS[j];
			}

		}
	}
	return add;
}