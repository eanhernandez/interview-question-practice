#include<iostream>

class ll
{
	public:
		ll(int _i) : i(_i),next(NULL){}
		void push(int _j)
		{
			ll* new_ll = new ll(i);
			new_ll->next = next;
			next = new_ll;
			i = _j;
		}
		int i;
		ll* next;
};

int findEnd(ll* l)
{
	if (l->next == NULL)
	{
		return l->i;
	}
	else 
	{
		std::cout << "not " << l->i << std::endl;
		return findEnd(l->next);
	}
}

int main()
{

	ll* l1 = new ll(2);
	l1->push(12);
	l1->push(54);
	std::cout << findEnd(l1);

	return 0;
}
