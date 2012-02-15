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
	L* temp = first;
	L* mid = first ;
	L* seclast = first;
	if (first != last)
	{
		while(temp != last)
		{
			seclast = mid;
			mid = mid->next;
			temp = temp->next->next;
		}
		L* hold = new L();
		seclast->next = NULL;
		ms(first,mid);
		ms(mid->next,last);
		
		while (first != last)
		{
			if (compare(first,mid))
			{
				hold->i = first->i;
				first = first->next;
			}
			else
			{
				hold->i = mid->i;
				mid = mid->next;
			}
		}
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
