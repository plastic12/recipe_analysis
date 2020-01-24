#include "Scanner.hpp"


Scanner::Scanner(std::string input,char deli)
{
    in=input;
    delimiter=std::string(1,deli);
    index=0;
    index2=input.find_first_of(delimiter);
    if(index2!=std::string::npos)
        index2++;
}
void Scanner::repos()
{
    index=index2;
    if(index2!=std::string::npos)
    {
        index2=in.find_first_of(delimiter,index2);
        if(index2!=std::string::npos)
            index2++;
        //std::cout<<std::to_string(index)<<std::endl;
        //std::cout<<std::to_string(index2)<<std::endl;
    }
}
bool Scanner::hasNext()
{
    return index!=std::string::npos;
}
std::string Scanner::next()
{
    try
    {
        std::string out=in.substr(index,index2-index-1);
        repos();
        return out;
    }
    catch(const std::out_of_range &e)
    {
        return "";
    }
}
bool Scanner::hasNextDouble()
{
    if(index2==std::string::npos)
        return false;
    else
    {
        std::string out=in.substr(index,index2-index-1);
        try
        {
            std::stod(out);
            return true;
        }
        catch(const std::invalid_argument)
        {
            return false;
        }
    }
}
double Scanner::nextDouble()
{
    try
    {
        std::string out=in.substr(index,index2-index-1);
        repos();
        return std::stod(out);
    }
    catch(const std::out_of_range &e)
    {
        throw;
    }
    catch(const std::invalid_argument &e)
    {
        throw;
    }
}
bool Scanner::hasNextBoolean()
{
    if(index2==std::string::npos)
        return false;
    else
    {
        std::string out=in.substr(index,index2-index-1);
        if(out=="true"||out=="false")
            return true;
        else
            return false;
    }
}
bool Scanner::nextBoolean()
{
    try
    {
        std::string out=in.substr(index,index2-index-1);
        repos();
        if(out=="true")
            return true;
        else if(out=="false")
            return false;
        else
            throw std::invalid_argument("fail to convert string to boolean.");
    }
    catch(const std::out_of_range &e)
    {
        throw;
    }
}