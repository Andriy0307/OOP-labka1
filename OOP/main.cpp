#include <iostream>
#include "generator.h"

#include <vector>
#include <cmath>
#include <string>

using namespace std;

void gistograma(vector<double> a,const int m) {
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
	for (double i = 0; i < 10; ++i) {
		cout << "["<<i/10<<";"<<(i+1)/10<<"]"<<":  "<< u[i] << endl;
	}
}


int main() {
	int method_number;
    cout << "Enter number of method" << endl;
	cin >> method_number;
	switch (method_number)
	{
	case 1:
	{
		int x0;
		cout << "Enter x0" << endl;
		cin >> x0;
		int m = 12000;

		Generator generator_1;
		generator_1.get(x0,m);
		generator_1.generator1();
		generator_1.print();

     	gistograma(generator_1.number, m);

	}
	break;
	case 2:
	{
		int  x0;
		cout << "Enter x0" << endl;
		cin >> x0;
		int m = 12000;

		Generator generator_2;
		generator_2.get(x0,m);
		generator_2.generator2();
		generator_2.print();
		gistograma(generator_2.number, m);

	}
	break;
	case 3:
	{
		int x0;
		cout << "Enter x0" << endl;
		cin >> x0;
		int m = 12000;

		Generator generator_3;
		generator_3.get(x0,m);
		generator_3.generator3();
		generator_3.print();

		gistograma(generator_3.number, m);

	}
	break;
	case 4:
	{
		int m = 12000;

		Generator generator_4;
		generator_4.generator4();
		generator_4.print();

		gistograma(generator_4.number, m);
	}
	break;
	case 5:
	{
		int m = 12000;

		Generator generator_5;
		generator_5.generator5();
		generator_5.print();

		gistograma(generator_5.number, m);
	}
	break;
	case 6:
	{
		int x0;
		cout << "Enter x0" << endl;
		cin >> x0;
		int m = 12000;

		Generator generator_6;
		generator_6.get(x0, m);
		generator_6.generator6();
		generator_6.print();

		gistograma(generator_6.number, m);
	}
	break;
	case 7:
	{
		int x0;
		cout << "Enter x0" << endl;
		cin >> x0;
		int m = 12000;

		Generator generator_7;
		generator_7.get(x0, m);
		generator_7.generator7();
		generator_7.print();

		gistograma(generator_7.number, m);
	}
	break;
	case 8:
	{
		int x0;
		cout << "Enter x0" << endl;
		cin >> x0;
		int m = 12000;

		Generator generator_8;
		generator_8.get(x0, m);
		generator_8.generator8();
		generator_8.print();

		gistograma(generator_8.number, m);
	}
	break;
	case 9:
	{
		int x0;
		cout << "Enter x0" << endl;
		cin >> x0;
		int m = 12000;

		Generator generator_9;
		generator_9.get(x0, m);
		generator_9.generator9();
		generator_9.print();

		gistograma(generator_9.number, m);
	}
	break;
	case 10:
	{
		int x0;
		cout << "Enter x0" << endl;
		cin >> x0;
		int m = 12000;

		Generator generator_10;
		generator_10.get(x0, m);
		generator_10.generator10();
		generator_10.print();

		gistograma(generator_10.number, m);
	}
	break;
	}
	return 0;
}
