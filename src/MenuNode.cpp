#include "MenuNode.hpp"
#include "MenuOption.hpp"


MenuNode::MenuNode()
{
    prompt="";
	options=std::vector<MenuOption>();
}
MenuNode::addOption(MenuOption option)
{
    options.push_back(option);
}
int MenuNode::readInt()
{
	std::cout<<"Choose your option"<<std::endl;
	int output;
    std::cin>>output;
	if(output<1||output>=options.size())
	{
		std::cout<<"Invalid input"<<std::endl;
		output=-1;
	}
	else if(!options[output-1].getEnable())
	{
		std::cout<<"This option is disabled"<<std::endl;
		return -1;
	}
	return output;
}
MenuNode::setPrompt(std::string prompt)
{
    this->prompt=prompt;
}
MenuNode* MenuNode::runMenu(MenuNode* node)
{
    int input=-1;
	while(input==-1)
	{
		std::cout<<node->prompt<<std::endl;
		for(int i=0;i<node->options.size();i++)
		{
			std::cout<<std::to_string(i+1)+". "+node->options.get(i).getOption()+(node->options[i].getEnable() ? "": "(disable)"))<<std::endl;
		}
		input=node->readInt();
	}
	return node->options[input-1].run();
}
void MenuNode::startMenu(MenuNode* node)
{
    MenuNode* current=node;
	while(current!=nullptr)
	{
		current=runMenu(current);
    }
}



