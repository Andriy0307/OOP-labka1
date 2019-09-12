#ifndef FIRST_METHOD_H_INCLUDED
#define FIRST_METHOD_H_INCLUDED
#include <vector>

using namespace std;

class TwoFirstMethods{
public:
    TwoFirstMethods() = default;
    TwoFirstMethods(const int& m_,const int& a_,const int& c_, const int& d_ ,const int& x0);
    void random1();
    void random2();
    void print();
    void get(int& m_,int& a_,int& c_,int& d_,int& x01);
private:
    int m;
    int a;
    int c;
    int x0;
    vector<int> number;
};




#endif // FIRST_METHOD_H_INCLUDED
