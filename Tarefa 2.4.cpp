#include <iostream>

int main() {
  float K;
  float C;
  
  std::cout << "Digite uma temperatura em Celsius para ser convertida para kelvin \n";
  std::cin >> C;
  K = C + 273.15;
  
  std::cout << "Essa e a temperatura convertida para kelvin \n";
  std::cout << K;
return 0;
}
