#include <iostream>

int main () {
   float F;
   float C;
   float K;
  
  std::cout << "Digite uma temperatura em Fahrenheit para Celsius para depois ser convertida para Kelvin \n";
  std::cin >> F;
  C = ( (F - 32) * 5 ) / 9;
  K = C + 273.15;
  
  std::cout << "Essa e a temperatura convertida para Celsius \n ";
  std::cout << C << "\n";
  
  std::cout << "Essa e a temperatura convertida para kelvin \n";
  std::cout << K;
return 0;	
}
