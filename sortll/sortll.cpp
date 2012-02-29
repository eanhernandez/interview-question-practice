#include<iostream>
class L
{
	public:

	int i;
	L* next;
	L():next(0)	{}

	L* tail(L* _l)
	{
		if (_l->next)
		{
			return tail(_l->next);
		}
		else
		{
			return _l;
		}
	}

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
		if (_l)
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
	if (a->i < b->i) {return true;}
	return false;
}

L* ms(L* a, L* b)
{
	L* y = a;	// these are all for counting across the LL
	L* z = a;	// so I can get beginning, mid1, mid, and end
	L* y_less_one = a;
	
	L* H = new L();	// these are for tracking Head and Start of the LL
	L* S;
	S = H;
	
	if (a->next == b->next)	// base case for when it's down to just one number
	{
		return a;
	}
	while(z->next && z->next->next)	// count across to end of this set
	{
		y_less_one = y;				// tracks end of first subset
		y = y->next;				// tracks beginning of second subset
		z = z->next->next;			// tracks end of second subset
	}
	while (z->next)					// once we are near the end, moves forward one at 
	{								// a time to the very end
		y_less_one = y;				
		y = y->next;
		z = z->next;
	}

	y_less_one->next=0;				// split up the set into two
	z->next=0;

	a = ms(a,y_less_one);			// recursive merge sort calls
	b = ms(y,z);					//

	while (a || b)					// as long as we havent reach the end of both
	{
		if (compare(a,b))
		{
			H->next = a;			// head tells the previous winner to point to the winner
			H=a;					// head points to the winner
			a=a->next;				// a moves forward so the next a in line is considered
		}
		else
		{
			H->next = b;
			H=b;
			b=b->next;
		}
	}
	return S->next;					// S isn't part of the results, it just points to them
}

int main()
{

	L* l = new L();
	l->i = 3;
	l->add(2);
	l->add(16);
	l->add(6);
	l->add(1);
	l->add(36);
	l->add(7);
	l->add(4);

	l->show(l);
	std::cout << std::endl;
	l = ms(l,l->tail(l));
	l->show(l);

	return 0;
}
