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

L* ms(L* first, L* last)
{

	std::cout << std::endl << first->i << " , " << last->i << std::endl;
	std::cin.ignore();
	L* x = first;
	L* y = first;
	L* z = first;
	L* y_less_one = first;
	L* result;
	L* result_start = result;
	if (!first->next){
			std::cout << "break";
			return first;
		}	// base case

	std::cout << "here" << std::endl;
	while(z->next->next)
	{
		y_less_one = y;
		y = y->next;
		z = z->next->next;
	}
	if (z->next)
	{
		y_less_one = y;
		y = y->next;
		z = z->next;
	}
		

	std::cout << x->i << " " << y_less_one->i << " " << y->i << " " << z->i <<std::endl;
	y_less_one->next=NULL;

	first = ms(x,y_less_one);					
	last = ms(y,z);
		 
	std::cout << "here";
	while (first || last)
	{
		if (compare(first,last))
		{
			result->next = first;
			first=first->next;
		}
		else
		{
		 	result->next = last;
			last=last->next;
		}
		result=result->next;
	}
	return result;

}

int main()
{

	L* l = new L();
	l->i = 3;
	l->add(2);
	l->add(16);
	l->add(7);

	l->show(l);

	ms(l,l->next->next->next);
	l->show(l);

	std::cout << "blrffpt" << std::endl;
	return 0;
}
