//  Եթե առաջին տողի մեջ  ձևափոխություններից միայն մեկը կատարելու դեպքում դուք ստանում եք երկրորդ տողը, ապա վերադարձնել true, հակառակ դեպքում՝ false: 
//  If  we do just 1 transformation and get the 2nd string , return true, else return false

#include <iostream>
#include <string>
std::string  checking (std::string str1, std::string str2)
{
  std::string longer;
  std::string shorter;
  if(str1.length() <= str2.length())
   {
 	shorter = str1;
	longer =  str2;
   }
  else
   {
	shorter = str2;
	longer  = str1;
   }

	for(int i = 0; i < shorter.length(); ++i)
	 {
		char main = shorter[i];
		for (int j = i; j < longer.length(); ++j)
		{
			if(longer[j] == main)
			{
				longer[j] = 'A';
			}
		}
	 }

int a_chi = 0;

	for (int k = 0; k < longer.length(); ++k)
	{
		if(longer[k] != 'A')
		{
			++a_chi;
		}
	} 
	
	if(a_chi > 1)
	{
		return "False";
	}

return "True";
}

int main()
{
std::string str1 = "";
std::string str2 = "";
std::cout << "Please enter the first word : ";
std::cin >> str1;
std::cout << "Please enter the second word : ";
std::cin >> str2;
std::cout << checking(str1, str2) << std::endl;

return 0;
}