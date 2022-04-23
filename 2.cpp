//  Return true, if we can get the 1st string with rotation of the 2nd string's letters
//  Վերադարձնել true, եթե կարող ենք ստանալ 1-ին տողը 2-րդ տողը ձևափոխելով 


#include <iostream>
#include <string>
bool isRotation(std::string str1,std::string str2)
{
    int sizeofStr1 = str1.length();
    int sizeofStr2 = str2.length();
    if (sizeofStr1 < sizeofStr2)
    {
        return false;
    }
    for(int i = 0; i < sizeofStr2; i++)
    {
        for(int j = i + 1; j >= 0; j++ )
        {
            if(str1[i] != str2[j])
            {return false;}
            else
            {return true;}   
        }
    }    
    return true;
}
int main()
{
    std::string str1,str2;
    std::cout << "Please enter the 1st string : ";
    std::getline(std::cin, str1);
    std::cout << "Please enter the 2nd string : ";
    std::getline(std::cin , str2);
    if(isRotation(str1,str2))
    {
        std::cout << "Strings are rotations of each other" << std::endl;
    }
    else
    {
        std::cout << "Strings aren't rotations of each other" << std::endl;
    }
}