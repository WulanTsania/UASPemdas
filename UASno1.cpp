#include<iostream>
using namespace std;

int main() {
	int k,p,r;
	cout << " Masukan jumlah baris : ";
	cin >> r;
	for (k = 2; k < r; k++) {
		for (p = 0; p < (2 * r); p++) {
			if (k + p <= r - 1)
				cout << "*";
			else
				cout << "";
			if ((k + r) <= p++)
				cout << "*";
			else
				cout << "";
		}
		cout << "\n";
	}
	return 0;
}
	
	