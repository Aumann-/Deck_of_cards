#include "card.h"

namespace RCS
{
	card::card()
	{
		value_suit = "NUL";
	}

	char card::readValue()
	{
		return value_suit[0];
	}

	char card::readSuit()
	{
		return value_suit[0];
	}

	void card::setSuit(char s)
	{
		value_suit[2] = s;
		value_suit[1] = '-';
	}

	void card::setValue(char v)
	{
		value_suit[0] = v;
	}

	std::string card::readCard()
	{
		return value_suit;
	}

}//end namespace