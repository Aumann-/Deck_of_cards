#include "deck.h"
//#include <iostream>
#include <ctime>
#include <cstdlib>
//#include <string>

namespace RCS
{
	deck::deck()
	{
		srand(time(NULL));
		myCards = new card[52];
		//initialize spades
		for (deck_counter = 0; deck_counter < 13; deck_counter++)
		{
			if (deck_counter == 0)
			{
				myCards[deck_counter].setSuit(6);
				myCards[deck_counter].setValue('A');
			}

			else if (deck_counter == 10)
			{
				myCards[deck_counter].setSuit(6);
				myCards[deck_counter].setValue('J');
			}

			else if (deck_counter == 11)
			{
				myCards[deck_counter].setSuit(6);
				myCards[deck_counter].setValue('Q');
			}

			else if (deck_counter == 12)
			{
				myCards[deck_counter].setSuit(6);
				myCards[deck_counter].setValue('K');
			}

			else if (deck_counter == 9)
			{
				myCards[deck_counter].setSuit(6);
				myCards[deck_counter].setValue('T');
			}

			else
			{
				myCards[deck_counter].setSuit(6);
				myCards[deck_counter].setValue(deck_counter + 49);
			}
		}
		//initialize hearts
		for (deck_counter; deck_counter < 26; deck_counter++)
		{
			if (deck_counter == 13)
			{
				myCards[deck_counter].setSuit(3);
				myCards[deck_counter].setValue('A');
			}

			else if (deck_counter == 23)
			{
				myCards[deck_counter].setSuit(3);
				myCards[deck_counter].setValue('J');
			}

			else if (deck_counter == 24)
			{
				myCards[deck_counter].setSuit(3);
				myCards[deck_counter].setValue('Q');
			}

			else if (deck_counter == 25)
			{
				myCards[deck_counter].setSuit(3);
				myCards[deck_counter].setValue('K');
			}

			else if (deck_counter == 22)
			{
				myCards[deck_counter].setSuit(3);
				myCards[deck_counter].setValue('T');
			}

			else
			{
				myCards[deck_counter].setSuit(3);
				myCards[deck_counter].setValue((deck_counter - 13) + 49);
			}
		}

		//initialize clubs
		for (deck_counter; deck_counter < 39; deck_counter++)
		{
			if (deck_counter == 26)
			{
				myCards[deck_counter].setSuit(5);
				myCards[deck_counter].setValue('A');
			}

			else if (deck_counter == 36)
			{
				myCards[deck_counter].setSuit(5);
				myCards[deck_counter].setValue('J');
			}

			else if (deck_counter == 37)
			{
				myCards[deck_counter].setSuit(5);
				myCards[deck_counter].setValue('Q');
			}

			else if (deck_counter == 38)
			{
				myCards[deck_counter].setSuit(5);
				myCards[deck_counter].setValue('K');
			}

			else if (deck_counter == 35)
			{
				myCards[deck_counter].setSuit(5);
				myCards[deck_counter].setValue('T');
			}

			else
			{
				myCards[deck_counter].setSuit(5);
				myCards[deck_counter].setValue((deck_counter - 26) + 49);
			}
		}

		//initialize diamonds
		for (deck_counter; deck_counter < 52; deck_counter++)
		{
			if (deck_counter == 39)
			{
				myCards[deck_counter].setSuit(4);
				myCards[deck_counter].setValue('A');
			}

			else if (deck_counter == 49)
			{
				myCards[deck_counter].setSuit(4);
				myCards[deck_counter].setValue('J');
			}

			else if (deck_counter == 50)
			{
				myCards[deck_counter].setSuit(4);
				myCards[deck_counter].setValue('Q');
			}

			else if (deck_counter == 51)
			{
				myCards[deck_counter].setSuit(4);
				myCards[deck_counter].setValue('K');
			}

			else if (deck_counter == 48)
			{
				myCards[deck_counter].setSuit(4);
				myCards[deck_counter].setValue('T');
			}

			else
			{
				myCards[deck_counter].setSuit(4);
				myCards[deck_counter].setValue((deck_counter - 39) + 49);
			}
		}
	}

	std::string deck::draw()
	{
		return myCards[deck_counter - 1].readCard();
		deck_counter--;
	}

	std::string deck::draw(int i)
	{
		return myCards[i].readCard();
	}

	void deck::shuffle()
	{
		card temp;

		int fCard, sCard;

			for (int j = 0; j < 100000; j++)
			{	
			fCard = rand() % 52;
		
			temp = myCards[fCard];

			sCard = rand() % 52;

			myCards[fCard] = myCards[sCard];

			myCards[sCard] = temp;
			}
		
	}




}//end namespace