#ifndef RECIPE_H
#define RECIPE_H

#include <string>
#include <iostream>
#include "Scanner.hpp"


class Recipe
{
	private:
		std::string output;
		double quantity;
		bool isPrimitive;
		double time;

	public:
		Recipe(std::string,double,bool,double);
		Recipe(std::string);
		std::string serialize();




};


#endif
