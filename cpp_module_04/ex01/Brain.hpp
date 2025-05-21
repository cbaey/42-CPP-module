#ifndef BRAIN_HPP
#define BRAIN_HPP

#include<iostream>
#include<string>

class	Brain{
	public:
		Brain();
		Brain(const Brain& a);
		Brain& operator=(const Brain& a);
		virtual ~Brain();
		std::string	getIdea(int i)const;
		void	setIdea(std::string idea, int i);

	private:
		std::string ideas[100];
};

#endif
