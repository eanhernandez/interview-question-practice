#include<iostream>
#include <algorithm>
#include<vector>
void v_pad(std::vector<char>*v, std::vector<char>*p);
void s_pad(std::string* s, std::string* p);
int main()
{
	std::vector<char>* v = new std::vector<char>;
	std::vector<char>* p = new std::vector<char>;

	v->push_back('b');	
	v->push_back(' ');	
	v->push_back(' ');	
	v->push_back('l');	
	v->push_back(' ');	
	v->push_back('a');	
	
	p->push_back('%');
	p->push_back('2');
	p->push_back('0');
	
	v_pad(v,p);
	for (int i=0; i<v->size(); i++)
	{
		std::cout << v->at(i) ;
	}
	std::cout << std::endl;
	

	std::string* s = new std::string("bl ah");
	std::string* p1 = new std::string("%20");


	s_pad(s,p1);
	std::cout << *s << std::endl;
	std::cout << std::endl;

	return 0;
}


void s_pad(std::string* s, std::string* p)
{
	int c=0;
	for (int i=0;i<s->length();i++)
	{
		if (s->at(i) == ' ')
		{
			c++;
		}
	}

	int x = s->length()-1;
	s->resize(s->length()+(c * (p->length()-1)));
	int y = s->length()-1;

	while (x >0)
	{
		if (s->at(x) == ' ')
			{
			 	for(int i=p->length()-1;i>=0;i--)
				{
					s->at(y) = p->at(i);
					y--;
				}
				x--;
			}
		else
		{
			s->at(y) = s->at(x);
			y--;
			x--;
		}
	}
}

void v_pad(std::vector<char>*v, std::vector<char>*p)
{
	int c=0;
	for (int i=0;i<v->size();i++)
	{
		if (v->at(i) == ' '){ c++;}
	}

	if (c==0){return;}

	int w_end = v->size()-1;
	v->resize(v->size()+(c*(p->size()-1)));
	int v_end = v->size()-1;

	while (w_end >= 0)
	{
		if (v->at(w_end)==' ')
			{
				for (int i=(p->size()-1);i>=0;i--)
				{
					v->at(v_end) = p->at(i);
					v_end--;
				}
				w_end--;
			}
			else
			{	
				v->at(v_end) = v->at(w_end);
				v_end--;
				w_end--;
			}
	}
};
