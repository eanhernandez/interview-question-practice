#include<iostream>
#include<algorithm>
int f(int a[])
{
	int meh = 0, msf = 0, x = 0, y = 0;
	for (int i=0;i<10;i++)
	{
		if (meh+a[i] > 0)
		{
			meh = meh+a[i];
		}
		else
		{
			meh = 0;
		}
		if (meh> msf)
		{
			msf = meh;
			y = i;
		}
	}
	return msf;
}
int main()
{
	int a[10] = {-1,14,-100,19,50,-505,6,7};
	std::cout << f(a) << std::endl;
}
