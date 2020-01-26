#include <iostream>
#include <fstream>
#include "Recipe.hpp"
#include "MenuOption.hpp"
#include "MenuNode.hpp"

using namespace std;

void save(Recipe recipe1,string filename)
{
	fstream fs(filename,fstream::out);
	fs<<recipe1.serialize()<<endl;
	fs.flush();
	fs.close();
}

Recipe load(string filename)
{
	ifstream ifs(filename);
	string input="";
	getline(ifs,input);
	//cout<<input<<endl;
	Recipe r(input);
	return r;
}

void testMenu()
{
	MenuNode title;
	title.setPrompt("say sth");
	int increment=0;
	MenuOption option1("+1",[&](){
			increment++;
			cout<<increment<<endl;
			},&title);
	MenuOption option2("exit",[](){});
	title.addOption(option1);
	title.addOption(option2);
	MenuNode::startMenu(&title);

}

int main()
{
	testMenu();

	/*
	//Recipe recipe1("iron",1,true,1);
	Recipe recipe=load("test.txt");
	cout<<recipe.serialize()<<endl;
	//save(recipe1,"test.txt");
	cout<<"program end here"<<endl;
	*/
}
