#include <iostream>
#include <string>
#include <fstream>

class	Npc
{
	private :
	std::string	land;
	
	Race

	public :
	std::string	name;
	int		num;
	
	
}

class	Equipment
{
	private :
	std::string	land;
	
	Race

	public :
	std::string	name;
	int		num;
	
	
}

class	Weapon
{
	private :
	std::string	land;
	
	Race

	public :
	std::string	name;
	int		num;
	
	
}

class	Item
{
	private :
	std::string	land;
	
	Race

	public :
	std::string	name;
	int		num;
	
	
}

class	Land
{
	private :
	std::string	land;
	
	Race

	public :
	std::string	name;
	int		num;
	
	
}

class	Job
{
	private :
	std::string	land;
	
	Race

	public :
	std::string	name;
	int		num;
	
	
}

class	Ability
{
	private :
	std::string	land;
	
	Race

	public :
	std::string	name;
	int		num;
	
	
}

class	Skill
{
	private :
	std::string	land;
	
	Race

	public :
	std::string	name;
	int		num;
	
	
}

class	Race
{
	private :
	std::string	land;
	
	Race

	public :
	std::string	name;
	int		num;
	
	
}

class	Character
{
	private :
	std::string	last_name;
	Race

	public :
	std::string	first_name;
	int		num;
	
}

class	Player
{
	private :
	Character	*charas = NULL;

	public :
	std::string	name;

	std::string	get_name(void);
	Character	*get_chara_list(void);
	Character	*get_chara_num(int num);
	Character	*get_chara_named(std::string name);
}
