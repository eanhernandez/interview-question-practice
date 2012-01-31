#include<iostream>
#include<vector>

void show(std::vector< std::vector<char> >* v){};

int main()
{

	std::vector< std::vector<char> >* v = new  std::vector< std::vector<char> >;
	std::vector<char>* w;
	for (int i=0;i<10;i++)
	{
		w = new std::vector
		for (int j=0;j<10;j++)
		{
			v->at(i).push_back('X');
		}
	}

	std::cout << "bleh" << std::endl;
	return 0;
}
