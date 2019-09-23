#include <iostream>

using namespace std;
int main(){
	int a;
	int b;
	cout << "Adjon meg ket egesz szamot. \n";
	cin >> a >> b;

	//Csere különbséggel.
	a = a + b;
	b = a - b;
	a = a - b;

	cout << "Valltozok az elso csere utan: a = " << a << ", b = " << b << endl;

	//Csere szorzattal.
	a = a * b;
	b = a / b;
	a = a / b;

	cout << "Valltozok az masodik csere utan: a = " << a << ", b = " << b << endl;

	//Csere xor-al.
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	cout << "Valltozok az harmadik csere utan: a = " << a << ", b = " << b << endl;
}
