#include <iostream>
#include <fstream>
#include "Recipe.hpp"

using namespace std;

int main()
{
	Recipe recipe1("iron",1,true,1);
	string s1=recipe1.serialize();
	Recipe recipe2(s1);
	/*
	fstream fs("test.txt",fstream::out);
	fs<<recipe1.serialize()<<endl;
	fs.flush();
	fs.close();
	*/
	cout<<"program end here"<<endl;
}
