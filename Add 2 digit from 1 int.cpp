#include <iostream>
using namespace std;
int main()
{
    int t,n, Digit1, Digit2;
    int sum[99];
    cin>>t;
    if(t>=1 && t<=90){
    for(int i=0; i<t; i++)
    {
        cin>>n;
        Digit1 = n/10;
        Digit2 = n%10;
        sum[i] = Digit1 + Digit2;
    }
    for(int i=0; i<t; i++)
    {
        cout<<sum[i]<<endl;
    }
    }
    return 0;
}
