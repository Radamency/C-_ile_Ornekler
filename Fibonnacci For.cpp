#include<iostream>

int main()
{
	int adim, gecici1=1, gecici2=1, gecici3, sayac;
	
	std::cout << "Lutfen Kacinci Basamaga Kadar Istediginizi Giriniz:";
	std::cin >> adim;
	
	std::cout << gecici1 << " ";
	std::cout << gecici2 << " ";
	for(sayac=1; sayac<=adim-2; sayac++) // Cunku Ilk Iki Sayi En Basta Ekrana Yazdiriliyor
	{
		gecici3 = gecici1 + gecici2;
		gecici1 = gecici2;
		gecici2 = gecici3;
		std::cout << gecici3 << " ";
	}
	
	return 0;
}
