// 1,2,3 repeated symbol = 1,2,3 ... n 
// ամեն նոր կրկնվող սիմվոլը վերածվում է թվի

#include <iostream>
#include <string>
#include <map>
std::string count(std::string str)
{
        std::map <char , int> frequency;
        for(int i = 0; i < str.length(); i++)
        {
                char letter = str[i];
                if(frequency.find(letter) == frequency.end())
                {
                        frequency[letter] = 0;
                }
                frequency[letter]++;
        }
        std::cout << "Your string is " << str << " and this is the frequency of the letters!" << std::endl;
        for(auto i = frequency.begin(); i != frequency.end(); i++)
        {
                std::cout << i -> first << i -> second << std::endl;
        }
        std::cout << std::endl;
    return str;
}
int main()
{
    std::string str {};
    std::cout << "Please enter your string : ";
    std::getline(std::cin , str);
    std::cout << count(str) << std::endl;
}