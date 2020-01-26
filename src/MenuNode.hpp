#ifndef MENUNODE_H
#define MENUNODE_H

#include <iostream>
#include <string>
#include <vector>

class MenuOption;

class MenuNode
{
    private:
    std::string prompt;
    std::vector<MenuOption> options;
    public:
    MenuNode();
    addOption(MenuOption);
    int readInt();
    void setPrompt(std::string);
    static MenuNode* runMenu(MenuNode*);
    static void startMenu(MenuNode*);



};






#endif