#include <iostream>
#include <ctime>
#include "deck.h"
#define count(a,b) for(int i = a; i < b; i++)


using namespace std;
using namespace RCS;

int main()
{
	clock_t start, end;

	start = clock();
	deck test_deck;

	test_deck.shuffle();


	count(0,52)
		cout << test_deck.draw(i) << endl;

	end = clock();

	float diff ((float)start-(float)end);

	diff = diff/CLOCKS_PER_SEC;

	cout << endl << diff << endl;


	cin.ignore();
	return 0;
}