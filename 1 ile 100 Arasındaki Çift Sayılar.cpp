#include<iostream>

int main()
{
	int sayac;
	
	for(sayac=1; sayac<=100; sayac++)
	{
		if(sayac%2 == 0)
		{
			std::cout << sayac << " ";
		}
	}
	
	return 0;
}
