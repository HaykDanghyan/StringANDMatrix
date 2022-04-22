#include <iostream>
#include <string>
bool checkPalindrome(std::string str)
{
    int size = str.length();
    int count;
    for(int i = 0; i < size / 2; i++)
    {
        if(str[i] != str[size - i - 1])
        {
            count++;
        }
    }
    return (count <= 1);
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