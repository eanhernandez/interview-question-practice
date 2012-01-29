#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int d(std::string& s1, std::string& s2)
{
	int d =0;
	std::vector< std::vector<int> > m;
	// setup...
	m.resize(s1.length()+1);
	for (int i=0;i<s1.length()+1;i++)
	{
		m[i].resize(s2.length()+1);
		m[i][0]=i;
	}

	std::cout << "  ";
	for (int i=0;i<s2.length()+1;i++)
	{
		m[0][i]=i;
		std::cout << s2[i] << " ";
	}
	std::cout << std::endl;

	// dp
	for (int i=1;i<s1.length()+1;i++)
	{
		std::cout << s1[i-1] << " ";
		for (int j=1;j<s2.length()+1;j++)
		{

			if (s1[i-1]==s2[j-1]){d = 0;} else { d = 1;}
			
			m[i][j] = std::min 
			(
				m[i-1][j-1] + d,
				m[i-1][j] + 1
			);
			m[i][j] = std::min
			(
				m[i][j],
				m[i][j-1] + 1
			);
			
			std::cout << m[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return m[s1.length()][s2.length()];
}

int main()
{
	std::string s1("abbacus");
	std::string s2("abusz");
	std::cout << d(s1,s2) << std::endl;
	return 0;
}
