#ifndef SCANNER_H
#define SCANNER_H


#include <iostream>
#include <string>


class Scanner
{
	private:
		std::string in;
		int index;
		std::string delimiter;
		int index2;
		void repos();
	public:
		Scanner(std::string,char deli=' ');
		bool hasNext();
		std::string next();
		bool hasNextDouble();
		double nextDouble();
		bool hasNextBoolean();
		bool nextBoolean();


};

#endif