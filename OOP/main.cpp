#include <iostream>
#include "first_method.h"

using namespace std;

int main()
{
    int a;
    cin >> a;
    switch(a)
    {
        case 1:
          int m,c,x0,a;
          cin>>m>>c>>a>>x0;
          FirstMethod s;
          s.get(m,a,c,x0);
          s.random();
          s.print();
            break;

    }
    return 0;
}
