#ifdef MENUOPTION_H
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
    MenuOption(MenuNode* node,std::string option,std::function<void()> command);
    MenuOption(MenuNode* node,std::string option,std::function<void()> command,bool enable);
    std::string getOption();
	bool getEnable();
    MenuNode* run();
};



#endif