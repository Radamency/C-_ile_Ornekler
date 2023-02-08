#include<iostream>

int main()
{
	int sayi;
	
	
	std::cout << "Lutfen Sayiyi Giriniz:";
	std::cin >> sayi;
	
	if(sayi<=100 && sayi>=0)
	{
		std::cout << "Girdiginiz Sayi Gecerlidir:\n";
	}
	else
	{
		std::cout << "Girdiginiz Sayi Gecersizdir:";
	}
	
	return 0;
}
