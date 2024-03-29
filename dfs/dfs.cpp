#include<iostream>
#include<vector>

class vertex
{
	public:
		std::vector<vertex*> v;
		char data;
		bool visited;
		vertex(char d):data(d),visited(0){};
};

bool findroute(vertex* a, vertex* b)
{
	std::cout << "in: " << a->data << "," << b->data << std::endl;

	a->visited = 1;
	if (a == b){return 1;}

	for (vertex* x : a->v)
	{
		if (!x->visited && (findroute(x,b) == 1)){return 1;}
	}
	return 0;
}

int main()
{

	vertex* A = new vertex('A');
	vertex* B = new vertex('B');
	vertex* C = new vertex('C');
	vertex* D = new vertex('D');
	vertex* E = new vertex('E');
	vertex* F = new vertex('F');
	vertex* X = new vertex('X');

	A->v.push_back(B);
	B->v.push_back(C);
	C->v.push_back(F);
	C->v.push_back(B);
	C->v.push_back(D);
	D->v.push_back(A);

	std::cout << "found: " << findroute(A,X) << std::endl;
	return 0;
}
