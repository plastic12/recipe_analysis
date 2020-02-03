#ifndef MENUOPTION_H
#define MENUOPTION_H



#include <string>
#include <functional>
#include "MenuNode.hpp"


class MenuNode;

class MenuOption
{
    private:
    MenuNode* node;
	std::string option;
	std::function<void()> command;
	bool enable;
    public:
    MenuOption(std::string option,std::function<void()> command,MenuNode* node=nullptr,bool enable=true);
    std::string getOption();
	bool getEnable();
    MenuNode* run();
};



#endif