#include <fstream>
#include <iostream>
#include <string>
#include "attribute_class.hpp"
#include "chara_class.hpp"
#include "item_class.hpp"
#include "place_class.hpp"

class	Campaign
{
	private:
	World	world;
	Player	players[];
	int	current_number_of_players = 0;
	int	starting_number_of_players = 0;
	
	public:
	std::string	name;
	int		id = 0;
}

class	Game_Instance
{
	private:
	
	public:
	int	id = 0;
}
