#include <iostream>
#include "first_method.h"

using namespace std;

ThreeFirstMethods::ThreeFirstMethods(const int& m_,const int& a_,const int& c_,const int& d_, const int& x01){
    m = m_;
    a = a_;
    c = c_;
    d = d_;
    x0 = x01;
}
void ThreeFirstMethods::get(int& m_,int& a_,int& c_,int& d_, int& x01){
    m = m_;
    a = a_;
    c = c_;
    d = d_;
    x0 = x01;
}

void ThreeFirstMethods::random1(){
    int t;
    for(int i = 1; i < 10;++i){
        t = (a*x0 + c) % m;
        number.push_back(t);
        x0 = t;
    }
}

void ThreeFirstMethods::random2(){
    int t;
    for(int i=1; i<10; ++i){
        t = (d*x0*x0 + a*x0 + c) % m;
    }

}

void FirstMethod::print(){
    for(int i = 0; i < number.size();++i){
        cout<<number[i]<<" ";
    }
    cout<<"\n";
}
