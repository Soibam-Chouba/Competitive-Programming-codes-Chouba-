#include <iostream>
using namespace std;
int main()
{
    int a, b, x=0;
    cin>>a;
    cin>>b;
    if (a>=1 && b>=1 && a<=10 && b<=10)
    {
        do{
            a*=3;
            b*=2;
            ++x;
          }while(a<=b);
          cout<<x;
    }
    return 0;
}
