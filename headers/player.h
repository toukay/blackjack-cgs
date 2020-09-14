#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "hand.h"
#include "card.h"

class Player {

	std::string name = "Player";
	int wallet = 10000;
	Hand hand;
	int bet = 0;
	bool split = false;
	bool doubleDown = false;

	public:
		Player(std::string name);
		Player(std::string name, int wallet);
		void hand_add_card(Card card);
		int get_hand_value();
		std::string get_hand();
		std::string get_ui_hand();
		std::string get_name();
		int get_wallet();
		int get_bet();
		void set_name(std::string name);
		void set_wallet(unsigned int);
		void add_bet(int bet);
		void won_bet();
		void lost_bet();
		void flush();
};


#endif
