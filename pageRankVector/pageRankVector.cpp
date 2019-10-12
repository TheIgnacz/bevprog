#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
using namespace std;

void kiir(vector<double> tomb, int n) {
	for (int i = 0; i < n; i++)
		cout << tomb[i] << " " << endl;
}

double tavolsag(vector<double> PR, vector<double> PRv, int n) {
	double tavolsag = 0;
	for (int i = 0; i < n; i++)
		tavolsag += (PRv[i] - PR[i]) * (PRv[i] - PR[i]);
	return sqrt(tavolsag);
}

int main(void) {

	vector<vector<double>> L = {
	{0.0, 0.0, 1.0 / 3.0, 0.0},
	{1.0, 1.0 / 2.0, 1.0 / 3.0, 1.0},
	{0.0, 1.0 / 2.0, 0.0, 0.0},
	{0.0, 0.0, 1.0 / 3.0, 0.0}
	};

	vector<double> PR = { 0.0, 0.0, 0.0, 0.0 };
	vector<double> PRv = { 1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0 };

	for (;;) {
		for (int i = 0; i < 4; i++) {
			PR[i] = 0.0;
			for (int j = 0; j < 4; j++)
				PR[i] += (L[i][j] * PRv[j]);

		}
		if (tavolsag(PR, PRv, 4) < 0.00000001) {
			break;
		}
		for (int i = 0; i < 4; i++) {
			PRv[i] = PR[i];
		}
	}
	kiir(PR, 4);

	return 0;
}
