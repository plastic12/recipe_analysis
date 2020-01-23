#include "Recipe.hpp"


Recipe::Recipe(std::string output,double quantity,bool isPrimitive,double time)
{
	this->output=output;
	this->quantity=quantity;
	this->isPrimitive=isPrimitive;
	this->time=time;
}
//deserialize
Recipe::Recipe(std::string input)
{
	
}
std::string Recipe::serialize()
{
	std::string out;
	out=output+","+std::to_string(quantity)+",";
	if(isPrimitive)
		out=out+"true";
	else
		out=out+"false";
	out=out+","+std::to_string(time);
	return out;

}
