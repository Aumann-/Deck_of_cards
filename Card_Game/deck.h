#ifndef DECK_H
#define DECK_H

#include "card.h"
#include <string>


namespace RCS
{
	class deck
	{
	private:
		card *myCards;
		int deck_counter; //counter used to initialize deck
	
	
	public:
		deck();
		std::string draw();
		std::string draw(int);
		void shuffle();


	};//end deck class



}//end namespace



#endif