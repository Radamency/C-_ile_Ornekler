#include<iostream>

int main()
{
	int sayi;
	
	
	std::cout << "Lutfen Sayiyi Giriniz:";
	std::cin >> sayi;
	
	if(sayi%3 == 0)
	{
		std::cout << "Girdiginiz Sayi 3'e Bolunuyor:\n";
	}
	if(sayi%5 == 0)
	{
		std::cout << "Girdiginiz Sayi 5'e Bolunuyor:";
	}
	
	return 0;
}
