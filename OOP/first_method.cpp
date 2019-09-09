#include <iostream>
#include "first_method.h"

using namespace std;

FirstMethod::FirstMethod(const int& m_,const int& a_,const int& c_, const int& x01){
    m = m_;
    a = a_;
    c = c_;
    x0 = x01;
}
void FirstMethod::get(int& m_,int& a_,int& c_, int& x01){
    m = m_;
    a = a_;
    c = c_;
    x0 = x01;
}

void FirstMethod::random(){
    int t;
    for(int i = 1; i < 10;++i){
        t = (a*x0 + c)%m;
        number.push_back(t);
        x0 = t;
    }
}
void FirstMethod::print(){
    for(int i = 0; i < number.size();++i){
        cout<<number[i]<<" ";
    }
    cout<<"\n";
}
