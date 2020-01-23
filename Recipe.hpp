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
		std::string serialize();




};
