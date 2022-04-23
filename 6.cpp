// 1,2,3 repeated symbol = 1,2,3 ... n 
// ամեն նոր կրկնվող սիմվոլը վերածվում է թվի

#include <iostream>
#include <string>
std::string isRepeated(std::string str)
{
        std::string new_str = "";
	new_str = str[0];
	static int num = 1;
	for(int j = 0; j < str.length(); ++j)
	{
		if(str[j] == str[j + 1])
		{
			++num;
		}
		if(str[j] != str[j + 1])
		{
			new_str = new_str + std::to_string(num);
                        new_str = new_str + str[j + 1];
			num = 1;
		}
	}
	if(new_str.length() > str.length())
	{
		return str;
	}	
	

return new_str;
}

int main()
{
        std::string str{};
        std::cout << "Please enter your string : ";
        std::getline(std::cin , str);
        std::cout << isRepeated(str) << std::endl;
        
    
}