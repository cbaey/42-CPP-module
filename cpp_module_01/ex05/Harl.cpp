#include "Harl.hpp"

void	Harl::complain(std::string str)
{
	Harlfn arr[4] = {
		{ "DEBUG", &Harl::debug },
		{ "INFO", &Harl::info },
		{ "WARNING", &Harl::warning },
		{ "ERROR", &Harl::error }
		};

	for (int i = 0; i < 4; ++i) {
                if (arr[i].name == str) {
			(this->*(arr[i].fn))();
                        return ;
                }
        }
        std::cout << "comment not found.\n";	
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << "\n";
}
;

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << "\n";
}
;

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << "\n";
}
;

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now."<< "\n";
}
;
