// if symbol == unique(meets only 1 time) , return true , else return false
// եթե սիմվոլը հանդիպում է միայն 1 անգամ վերադարձնել true , հակառակ դեպքում վերադարձնել false


#include <iostream>
bool findUnique(std::string str)
{
    for(int i = 0; i < str.length() - 1; i++)
    {
        for(int j = i + 1; j < str.length(); j++)
        {
            if(str[i] == str[j])
            {
                return false;
            }
        }
    }
    return true;
    
}
int main()
{
    std::string str{};
    std::cout << "Please enter your string : ";
    std::getline(std::cin, str);
    if (findUnique(str)) 
    {
        std::cout << "All characters in " << str << " are unique " << std::endl;
    }
    else 
    {
        std::cout << "The string " << str  << " has repeated characters" << std::endl;
    }
    return 0;
}
