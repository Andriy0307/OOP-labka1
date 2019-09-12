#include <iostream>
#include "generator.h"

#include <vector>
#include <cmath>
#include <string>

using namespace std;

void gistograma(vector<double> a, double m) {
	vector <double> u(10, 0);
	double r = a.size();
	for (int i = 0; i < a.size(); ++i) {
		double t = a[i] / m;
		if ((t >= 0.0) && (t <= 0.1)) {
			u[0] += 1.0 / r;
		}
		else if ((t > 0.1) && (t <= 0.2)) {
			u[1] += 1.0 / r;
		}
		else if ((t > 0.2) && (t <= 0.3)) {
			u[2] += 1.0 / r;
		}
		else if ((t > 0.3) && (t <= 0.4)) {
			u[3] += 1.0 / r;
		}
		else if ((t > 0.4) && (t <= 0.5)) {
			u[4] += 1.0 / r;
		}
		else if ((t > 0.5) && (t <= 0.6)) {
			u[5] += 1.0 / r;
		}
		else if ((t > 0.6) && (t <= 0.7)) {
			u[6] += 1.0 / r;
		}
		else if ((t > 0.7) && (t <= 0.8)) {
			u[7] += 1.0 / r;
		}
		else if ((t > 0.8) && (t <= 0.9)) {
			u[8] += 1.0 / r;
		}
		else if ((t > 0.9) && (t <= 1.0)) {
			u[9] += 1.0 / r;
		}
	}
	for (int i = 0; i < 10; ++i) {
		cout << "  [0;0.1]:  " << u[i] << endl;
	}
}

int main() {
	cout << "Enter number of method" << endl;
	int num_method;
	cin >> num_method;
	switch (num_method)
	{
	case 1:
	{
		cout << "Enter m" << endl;
		int m, c, x0, d, a,xn1,xn2;
		cin >> m;
		cout << "Enter c" << endl;
		cin >> c;
		cout << "Enter a" << endl;
		cin >> a;
		cout << "Enter x0" << endl;
		cin >> x0;
		cout << "Enter d" << endl;
		cin >> d;
		cout << "Enter xn1" << endl;
		cin >> xn1;
		cout << "Enter xn2" << endl;
		cin >> xn2;

		Generator generate_1;
		generate_1.get(m, a, c, d, x0,xn1,xn2);
		generate_1.generate1();
		generate_1.print();

		gistograma(generate_1.number, m);

	}
	break;
	case 2:
	{
		cout << "Enter m" << endl;
		int m, c, x0, d, a, xn1, xn2;
		cin >> m;
		cout << "Enter c" << endl;
		cin >> c;
		cout << "Enter a" << endl;
		cin >> a;
		cout << "Enter x0" << endl;
		cin >> x0;
		cout << "Enter d" << endl;
		cin >> d;
		cout << "Enter xn1" << endl;
		cin >> xn1;
		cout << "Enter xn2" << endl;
		cin >> xn2;

		Generator generate_2;
		generate_2.get(m, a, c, d, x0, xn1, xn2);
		generate_2.generate1();
		generate_2.print();
		gistograma(generate_2.number, m);

	}
	break;
	case 3:
	{
		cout << "Enter m" << endl;
		int m, c, x0, d, a, xn1, xn2;
		cin >> m;
		cout << "Enter c" << endl;
		cin >> c;
		cout << "Enter a" << endl;
		cin >> a;
		cout << "Enter x0" << endl;
		cin >> x0;
		cout << "Enter d" << endl;
		cin >> d;
		cout << "Enter xn1" << endl;
		cin >> xn1;
		cout << "Enter xn2" << endl;
		cin >> xn2;

		Generator generate_3;
		generate_3.get(m, a, c, d, x0, xn1, xn2);
		generate_3.generate1();
		generate_3.print();

		gistograma(generate_3.number, m);

	}
	break;
	}

	return 0;
}
