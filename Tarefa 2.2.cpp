#include <iostream>

int main() {
	int F;
	int C;
	
	std::cout << " Digite a temperatura em Celsius para ser convertida para Fahrenheit \n";
	std::cin >> C;
	F = (9 * C + 160) / 5;
	std::cout << "Essa e a temperatura em graus Fahrenheit \n"; 
	std::cout << F;
	return 0;
}
