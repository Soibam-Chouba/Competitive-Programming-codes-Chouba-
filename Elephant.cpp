#include <iostream>
using namespace std;
int main()
{
    int x, step=0, move_=0;
    cin>>x;
    if(x>=1 && x<=1000000)
    {
        do{
           step= step+5;
           move_++;
        }while(step<x);
    }
    cout<<move_;
    return 0;
}
