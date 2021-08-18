#include <iostream>

int main() {
  int F;
  int C;
  
  std::cout << "Digite uma temperatura em Fahrenheit para ser convertida para Celsius \n";
  std::cin >> F;
  C = ( (F - 32) * 5 ) / 9;
  
  std::cout << "Essa e a temperatura convertida para Celsius \n ";
  std::cout << C;
return 0;	
}
