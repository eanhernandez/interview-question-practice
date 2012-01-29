#include<iostream>
#include<string>
int main()
{
	std::string s = "rebeccatron";
	char c;

	for (int i=0; i<(s.length()/2); i++)
	{
			c = s[i];
			s[i] = s[s.length()-1-i];
			s[s.length()-1-i] = c;
	}

	std::cout << s << std::endl;
	return 0;
}
