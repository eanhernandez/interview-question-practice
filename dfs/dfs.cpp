#include<iostream>
#include<vector>
int main()
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(4);
	v.push_back(7);
	v.push_back(2);
	v.push_back(14);
	
	for (int& i : v)
		std::cout << i << std::endl;
	
	
	std::cout << "yahhhh" << std::endl;
	return 0;
}
