#include <iostream>
#include <string>
class node
{
	public:
		node() : c(NULL), g(NULL), l(NULL){};
		char c;
		node* g;
		node* l;
		int add(char _c)
		{
			if (c==0)
			{
				c = _c;
				g = new node();
				l = new node();
				return 0;
			}
			if (_c == c) { return 1;}
			if (_c < c)	 { return l->add(_c);}
			else       	 { return g->add(_c);} 
			return 0;
		}
};

int main()
{
	
	std::string s = "blebh";
	node* n = new node();
	for(int i=0;i<s.length();i++)
	{
		std::cout << n->add(s[i]) << std::endl;
	}
	
	return 0;
}
