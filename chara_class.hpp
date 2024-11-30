#include "main_header.hpp"

class	Character
{
	private :
	public :
	std::string	name;
	int		id;
}

class	Npc
{
	private :
	public :
	std::string	name;
	int		id;
}

class	Player
{
	private :
	int		number_of_chara = 0;
	int		minutes_played = 0;
	Character	*first_chara = NULL;
	Character	*last_chara = NULL;

	public :
	std::string	name;
	int		id;

	std::string	get_name(void);
	Character	*get_first_chara(void);
	Character	*get_last_chara(void);
	Character	*get_chara_by_id(int id);
	Character	*get_chara_by_name(std::string name);
}
