#include<iostream>
#include<vector>



void show(std::vector< std::vector<char> >* v);
void rotate(std::vector< std:: vector<char> >* v);
int main()
{
	std::vector< std::vector<char> >* v = new  std::vector< std::vector<char> >;
	std::vector<char>* w;
	for (int i=0;i<10;i++)
	{
		w = new std::vector<char>;
		for (int j=0;j<10;j++)
		{
			w->push_back('X');
		}
		v->push_back(*w);
	}
	v->at(2).at(1)='O';
	v->at(3).at(1)='O';
	v->at(4).at(1)='O';
	v->at(4).at(2)='O';

	show(v);
	rotate(v);
	show(v);
	rotate(v);
	show(v);
	rotate(v);
	show(v);
	rotate(v);
	show(v);

	return 0;
}
void rotate(std::vector< std:: vector<char> >* v)
{
	int w = v->size();
	int h = v->at(0).size();

	char temp;

	for (int j=0;j<h;j++)
	{
		for (int i=0;i<w;i++)
		{
			if (v->at(i).at(j) != 'X')
			{
				temp = v->at(i).at(j);
				v->at(i).at(j)=v->at(j).at(h-1-i);
				v->at(j).at(h-1-i) = v->at(w-1-i).at(h-1-j);
				v->at(w-1-i).at(h-1-j) = v->at(w-1-j).at(h-1-i);
				v->at(w-1-j).at(h-1-j)= temp;
			}
		}
	}

}
void show(std::vector< std::vector<char> >* v)
{
	for (int i=0;i<v->size();i++)
	{
		for (int j=0;j<v->at(i).size();j++)
		{
			std::cout << v->at(i).at(j);
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

};
