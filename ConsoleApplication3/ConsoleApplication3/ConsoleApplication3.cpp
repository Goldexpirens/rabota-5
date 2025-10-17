

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int n, z, y;

	cout << "Ввидите чсило 1:";
	cin >> n;

	cout << "Ввидите цыфру множителя\n1-складывание\n2-вычитание\n3-умножение\n4-делить\n5-делить от остатка(%)\n";
	cin >> y;

	cout << "Ввидите чсило 2:";
	cin >> z;

	if (y == 1) {
		cout << n + z;
	}
	else if (y==2) {
		cout << n - z;
	}

	else if (y == 3) {
		cout << n * z;
	}
	else if (y == 4) {
		cout << n / z;
	}
	else if (y == 5) {
		cout << n % z;
	}

	return 0;
}

