#ifndef MENUNODE_H
#define MENUNODE_H

#include <iostream>
#include <string>
#include <vector>
#include "MenuOption.hpp"


class MenuNode
{
	std::string prompt;
    std::vector<MenuOption> options;
    
    public:
    MenuNode();
    void addOption(MenuOption);
    int readInt();
    void setPrompt(std::string);
    static MenuNode* runMenu(MenuNode*);
    static void startMenu(MenuNode*);



};






#endif
