#include <iostream>
#include <string>
int main()
{
	std::string s = "blehfrrr";
	std::string x = "";
	x.append(256,' ');

	for (int i=0; i<s.length(); i++)
	{
		if (x[(unsigned) s[i]] == 'x')
		{
			std::cout << "dupe: " << s[i] << std::endl;
			break;
		}
		else
		{
			x[(unsigned) s[i]] = 'x';
		}
	}

	return 0;
}
