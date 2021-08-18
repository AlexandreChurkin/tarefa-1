#include <iostream>

int main() {
	int n1;
	int n2;

	
	std::cout << "Estou lhe desafiando a fazer um numero negativo \n";
	std::cin >> n1;
	
        if (n1 > 0) {

    std::cout << "Parabens esse numero e positivo"; }
    	
		else{
	std::cout << "\nEsse e um numero que voce digitou, mas positivo :D \n";
	n2 = n1 * -1;
	std::cout << n2;}
	
	return 0;
}
