#include <iostream>

int main()
{
	int input(0);
	while(1)
	{
		std::cin>>input;
		if(input == 42)
			break;
		else
			std::cout<<input<<std::endl;
	}
	return 0;
}


