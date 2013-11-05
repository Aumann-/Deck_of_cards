#ifndef CARD_H
#define CARD_H
#include <string>

namespace RCS
{
	class card
	{
	private:
		std::string value_suit;
	public:
		card();
		void setSuit(char);
		void setValue(char);
		char readSuit();
		char readValue();
		std::string readCard();

	};


}//end namespace

#endif