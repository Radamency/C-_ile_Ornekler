#include<iostream>

int main()
{
	int vize, final, ortalama;
	
	std::cout << "Lutfen Vize Notunu Giriniz:";
	std::cin >> vize;
	
	std::cout << "Lutfen Final Notunu Giriniz:";
	std::cin >> final;
	
	ortalama = (vize*0.4)+(final*0.6);
	
	if(ortalama<50)
	{
		std::cout <<"Ortalamaniz:" << ortalama << " Kaldiniz";
	}
	else
	{
		std::cout <<"Ortalamaniz:" << ortalama << " Gectiniz";
	}
	
	return 0;
}
