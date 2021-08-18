#include <iostream>
using namespace std;
 
 int main () {
 	int n1;
 	int n2;
 	int n3;
  cout << "Digite 2 numeros inteiros que soamdos dão 11 ou mais\n";
  cin >> n1;
  cin >> n2;
  n3 = n1 + n2;
 if (n3 > 10) {
  cout << n3;}
 if (n3 <= 10) {
  cout << "tente de novo"; }
 return 0;
 }
