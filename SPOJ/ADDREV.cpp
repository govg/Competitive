#include <iostream>
int revnum(int inp)
{
	int result(0);
	while(inp)
	{
		result*=10;
		result+=inp%10;
		inp = inp/10;
	}
	return result;
}

int main()
{
	int a,b,sum;

	int t;
	std::cin>>t;
	while(t--)
	{

		std::cin>>a>>b;

		int x,y;
		x = revnum(a);
		y = revnum(b);
		sum = x+y;
		sum = revnum(sum);

		std::cout<<sum<<std::endl;
	}
	return 0;
}


