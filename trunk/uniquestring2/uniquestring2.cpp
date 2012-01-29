#include <iostream>
#include <string>
int main()
{
	std::string s = "blbeh";

	for (int i=0;i<s.length();i++)
	{
		for (int j=i+1;j<s.length();j++)
		{
			if (s[i] == s[j]) 
			{
				std::cout << "dupe: " << s[i] << std::endl;
			}
		}
	}
	return 0;
}
