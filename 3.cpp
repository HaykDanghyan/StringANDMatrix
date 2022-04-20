// Change every space in string with %20
// Փոխել տողի յուրաքանչյուր բացատը %20-ով


#include <iostream>
#include <string>
std::string replaceSpace(std::string str)
{
    std::string tmp{};
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] != ' ')
        {
            tmp = tmp + str[i] ;
        }
        if(str[i] == ' ')
        {
            std::string change_space = "%20";
            tmp = tmp + change_space;
        }
    }
    return tmp;
}
int main ()
{
    std::string str{};
    std::cout << "Please enter your string : ";
    std::getline(std::cin,str);
    std::cout << "The string replaced by %20's is : " << replaceSpace(str) << std::endl;
}