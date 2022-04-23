// Արդյոք մի տողը մյուսի ենթատողն է
// Is the first string substring of another one


#include <iostream>

bool is_substring(std::string s1, std::string s2)
{
	if(s1.length() != s2.length())
	{
		return false;
	}

	for(int i = 0; i < s1.length(); i++)
	{	
		char main = s1[i];
		for(int j = 0; j < s2.length(); j++)
		{
			if(s2[j] == main)
			{
				s1[i] = '1';
			}	
		}
	}
	for(int i = 0; i < s1.length(); i++)
	{
		if(s1[i] != '1')
		{
			return false;
		}
	}

return true;
}
int main ()
{
std::string s1, s2;
std::cout << "Enter the main word: ";
std::cin >> s1;
std::cout << "Enter the second to know can we create first word from its characters: ";
std::cin >> s2;

if(is_substring(s1,s2) == true)
{
	std::cout << "TRUE" << std::endl;
}
else
{
	std::cout << "FALSE" << std::endl;
}
return 0;
}