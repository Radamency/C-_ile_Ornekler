#include<iostream>

int main()
{
	int sayac, sayi, toplam=0;
	
	for(sayac=1; sayac<=5; sayac++)
	{
		std::cout <<"Lutfen Sayi Giriniz:";
		std::cin >> sayi;
		toplam = toplam + sayi;
	}
	
	std::cout << toplam;
	
	return 0;
}
