#include<iostream>
#include<vector>
std::vector < std::vector <char> > flip(std::vector < std::vector <char> > );

int main()
{

	std::vector< std::vector<char> > v;
	for (int i=0;i<10;i++)
	{
		std::vector<char> t;
		for (int j=0;j<10;j++)
		{
			t.push_back('O');
		}
		v.push_back(t);
	}

	v.at(1).at(2) = 'X';

	v= flip(v);


	for (int i=0;i<10;i++)
	{
		for (int j=0;j<10;j++)
		{
			std::cout << v.at(i).at(j) << " "; 
		}
		std::cout << std::endl;
	}

	std::cout<< "fwah!" <<std::endl;
	return 0;
}
std::vector < std::vector <char> > flip(std::vector < std::vector <char> > v)
{
	for (int i=0; i<v.size();i++)
	{
		for (int j=0; j<v.at(i).size();j++)
		{
			if (v.at(i).at(j) == 'X')
			{
				for (int k=0;k<v.at(i).size();k++)
					{
						v.at(i).at(k) = '!';
					}
			}
		}
	}
}













