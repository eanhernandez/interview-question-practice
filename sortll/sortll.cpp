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

void ms(L* _l, int first, int last)
{
	if (last > first)
	{
		ms(l,first,(int)(last/2));
		ms(l,(int)(last/2),last);
		m(l,first,(int)(last/2),last);
	}
}
void m(L* _l,int first, int mid, int last)
{
	L* temp = new L();
	L* f;
	L* m;
	L* l;

	for (int i=
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
