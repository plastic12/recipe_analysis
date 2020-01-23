#ifndef RECEPE_H
#define RECIPE_H

#include <string>
#include <iostream>


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
