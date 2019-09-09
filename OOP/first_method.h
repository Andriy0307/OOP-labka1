#ifndef FIRST_METHOD_H_INCLUDED
#define FIRST_METHOD_H_INCLUDED
#include <vector>

using namespace std;

class FirstMethod{
public:
    FirstMethod() = default;
    FirstMethod(const int& m_,const int& a_,const int& c, const int& x0);
    void random();
    void print();
    void get(int& m_,int& a_,int& c_, int& x01);
private:
    int m;
    int a;
    int c;
    int x0;
    vector<int> number;
};




#endif // FIRST_METHOD_H_INCLUDED
