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

void ms(L* first, L* last)
{
	L* temp = first;
	L* mid = first ;
	if (first != last)
	{
		while(temp != last)
		{
			mid = mid->next;
			temp = temp->next->next;
		}

		ms(first,mid);
		ms(mid->next,last);
		while (first != last)
		{
			if (first->i > mid->i)
			{
				
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
