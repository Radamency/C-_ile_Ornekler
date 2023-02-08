#include<iostream>

int main()
{
	int sayi;
	
	
	std::cout << "Lutfen Sayiyi Giriniz:";
	std::cin >> sayi;
	
	if(sayi%2 == 0)
	{
		std::cout << "Girdiginiz Sayi " << sayi << " Cift Sayidir:";
	}
	else
	{
		std::cout << "Girdiginiz Sayi " << sayi << " Tek Sayidir:";
	}
	
	return 0;
}
