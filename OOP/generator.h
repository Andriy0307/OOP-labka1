#ifndef GENERATOR_H_INCLUDED
#define GENERATOR_H_INCLUDED

#include <vector>

using namespace std;

class Generator {
public:
	Generator() = default;
	Generator(const int& x01,int m_);
	double generator1();
	double generator2();
	void generator3();
	void generator4();
	void generator5();
	void generator6();
	void generator7();
	void generator8();
	void generator9();
	void generator10();
	int reversal_number(long long a, int m);
	int m = 10000;

	vector<double> number;

	void print();
	void get(int& x01,int m_);
private:
	int x0;




};

#endif // GENERATOR_H_INCLUDED
