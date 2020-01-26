#include "MenuOption.hpp"
#include "MenuNode.hpp"


MenuOption::MenuOption(MenuNode* node,std::string option,std::function<void()> command)
{
	this->node=node;
	this->option=option;
	this->command=command;
	this->enable=true;
}
MenuOption::MenuOption(MenuNode* node,std::string option,std::function<void()> command,bool)
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

