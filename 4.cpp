#include <iostream>
#include <string>
bool checkPalindrome(std::string str)
{
    if(str.length() == 1)
    {return true;}
    if(str.length() == 0 || str.length() == 2)
    {return false;}
    for(int i = 3; i < str.length(); i++)
    {
        if(str[i] != str[str.length() - i])
        {return false;}
        else{return true;}   
    }
    return true;
}
int main()
{
    std::string str{};
    std::cout << "Please enter your string : ";
    std::getline(std::cin , str);
    if(checkPalindrome(str))
    {
        std::cout << "Your string can be palindrome" << std::endl;
    }
    else
    {
        std::cout << "Your string can't be palindrome" << std::endl;
    }
    return 0;
}