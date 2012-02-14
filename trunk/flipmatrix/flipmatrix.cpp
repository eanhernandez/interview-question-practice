#include<iostream>
#include<vector>
std::vector < std::vector <char> > flip(std::vector < std::vector <char> > );
void dump( std::vector < std::vector <char> > v );
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
	v.at(4).at(2) = 'X';
	v.at(6).at(4) = 'X';
	dump(v);
	v= flip(v);
	dump(v);

	return 0;
}

void dump( std::vector < std::vector <char> > v )
{
	for (int i=0;i<10;i++)
	{
		for (int j=0;j<10;j++)
		{
			std::cout << v.at(j).at(i) << " "; 
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
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
	return v;
}

