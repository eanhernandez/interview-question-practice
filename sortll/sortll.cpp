#include<iostream>
class L
{
	public:

	int i;
	L* next;
	void add(int _i)
	{
		L* temp = new L();
		temp->next = next;
		temp->i = i;
		i = _i;
		next = temp;
	}
	void show(L* _l)
	{
		if (_l != NULL)
		{
			std::cout << _l->i <<  " " ;
			show(_l->next);
		}
	}
};

bool compare(L* a, L* b)
{
	if (!a) {return false;}
	if (!b) {return true;}
	if (a->i > b->i) {return true;}
	return false;
}

void ms(L* first, L* last)
{
	L* x = first;
	L* y = first;
	L* z = first;
	L* y_less_one = first;

	if (first != last)
	{
		while(z)
		{
			y_less_one = y;
			y = y->next;
			z = z->next->next;
		}
		L* hold = new L();
		ms(x,y);
		ms(y->next,z);
			
		y_less_one->next = NULL;
		L* hold_start = hold;
		while (x && y)
		{
			if (compare(x,y))
			{
				hold->i = x->i;
				hold = hold->next;
				x = x->next;
			}
			else
			{
				hold->i = y->i;
				hold = hold->next;
			 	y = y->next;	
			}
		}
		start = hold_start;

	}

}

int main()
{

	L* l = new L();
	l->i = 3;
	l->add(2);
	l->add(16);
	l->add(7);

	l->show(l);

	std::cout << "blrffpt" << std::endl;
	return 0;
}
