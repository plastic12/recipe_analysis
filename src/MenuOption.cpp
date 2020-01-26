#include "MenuOption.hpp"
#include "MenuNode.hpp"


MenuOption::MenuOption(std::string option,std::function<void()> command,MenuNode* node,bool enable)
{
	this->node=node;
	this->option=option;
	this->command=command;
	this->enable=enable;
}
std::string MenuOption::getOption()
{
	return option;
}
bool MenuOption::getEnable(){return enable;}
MenuNode* MenuOption::run()
{
    command();
    return node;
}

