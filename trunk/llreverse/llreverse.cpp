#include<iostream>
class Node
{
	public:
	Node* next;
	int data;
	Node():next(0),data(-1){}
};
class LL
{
	public:
	Node* head;
};

void dump(Node* n)
{
	std::cout << n->data << " ";
	if (n->next)
	{
		dump(n->next);
	}
}
Node* R(Node* n)
{
	if (n->next)
	{
		Node* temp = R(n->next);
		n->next = 0;
		temp->next = n;
	}
	return n;
}

Node* R2(Node* n, Node*& tail)
{
	if (!n->next)
	{
		tail = n;
	}
	else
	{
		Node* temp = R2(n->next,tail);
		n->next = 0;
		temp->next = n;
	}
	return n;
}


void Reverse(LL* l)
{
	Node* n = l->head;
	do{	n=n->next; }
	while (n->next);
	R(l->head);
	l->head = n;
}

int main()
{
	LL l;
	Node a,b,c,d;
	d.data = 14;
	c.next = &d;
	c.data = 5;
	b.next = &c;
	b.data = 24;
	a.next = &b;
	a.data = 6;
	l.head = &a;

	//dump(l.head);
	//Reverse(&l);
	//dump(l.head);

	dump(&a);

	Node* tail =0;
	R2(&a,tail);
	dump(tail);

	return 0;
}
