#include <iostream>
using namespace std;

int main () {
	int n1;
	int n2;
	int n3;
	
	cout << "digite dois numeros\n";
	cin >> n1;
	cin >> n2;
	
	if (n1 + n2 > 20){
		n3 = n1 + n2 + 8;
		cout << n3;
 	}
 	if (n1 + n2 <= 20){
		n3 = n1 + n2 - 5;
		cout << n3;
 	}
	
	return 0;
}
