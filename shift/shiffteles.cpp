#include <iostream>

int main()
{
	int a = 1;
	int index = 0;

	long long int b = 1;
	int index2 = 0;

	char c = 1;
	int index3 = 0;

	while (a != 0){
		a = a << 1;
		index++;
	}

	while (b != 0) {
		b = b << 1;
		index2++;
	} 

	while (c != 0) {
		c = c << 1;
		index3++;
	}

	std::cout << index << ", " << sizeof(a)*8 << "\n";
	std::cout << index2 << ", " << sizeof(b)*8 << "\n";
	std::cout << index3 << ", " << sizeof(c) * 8;
}
