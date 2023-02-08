#include<iostream>

int main()
{
	int not1, not2, not3;
	
	std::cout << "Birinci Notu Giriniz:";
	std::cin >> not1;
	
	std::cout << "Ikinci Notu Giriniz:";
	std::cin >> not2;
	
	std::cout << "Ucuncu Notu Giriniz:";
	std::cin >> not3;
	
	std:: cout << (not1 + not2 + not3)/3;
	
	return 0;
}
