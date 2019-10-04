// ch4drill.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<double>& a)
{
	bool swapp = true;
	while (swapp) {
		swapp = false;
		for (size_t i = 0; i < a.size() - 1; i++) {
			if (a[i] > a[i + 1]) {
				a[i] += a[i + 1];
				a[i + 1] = a[i] - a[i + 1];
				a[i] -= a[i + 1];
				swapp = true;
			}
		}
	}
}

void printVector(vector<double> a) {
	for (size_t i = 0; i < a.size(); i++) {
		cout << a[i] << " ";

	}
	cout << endl;
}

int main()
{
	//1.-5.

	/*double a = 0;
	double b = 0;

	while(cin >> a >> b){
		if ( a == b){
			cout << "The numbets are equal." << endl;
		}

		else if (a - b < (1.0/100)){
			cout << "The numbers are almost equal." << endl;
		}
		else{
			cout << "The smaller value is: " << (a < b ? a : b) << " The larger value is: " << (a > b ? a : b) << endl;
		}
	}*/

	//6.-11.
	double a = 0;
	double min;
	double max = 0;
	cin >> a;
	min = a;

	string raw = "";
	double sum = 0;
	int db = 0;

	vector<double> v;
	while (cin >> a && a != 0) {
		if (a < min) {
			min = a;
			cout << "The smallest so far." << endl;
		}
		else if (a > max) {
			max = a;
			cout << "The largest so far." << endl;
		}

		cin >> raw;

		if (raw == "m") {
			sum += a;
		}
		else if (raw == "cm") {
			sum += (a * 0.01);
		}
		else if (raw == "in") {
			sum += (a * 0.0254);
		}
		else if (raw == "cm") {
			sum += (a * 0.3048);
		}
		else {
			cout << "Wrong unit." << endl;
		}

		db++;
		v.push_back(a);
	}
	cout << db << " db" << endl;
	cout << "Osszeg: " << sum << " m." << endl;

	bubbleSort(v);
	printVector(v);



	return 0;
}
