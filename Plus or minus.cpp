#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d=0, t;
    cin>>t;
    if (t>=1 && t<=162)
    {
        for(int i=1; i<=t; i++)
        {
            for(int j=0; j<1; j++)
            {
                cin>>a;
                cin>>b;
                cin>>c;
                d = a + b;
            }
               if(c==d)
                {
                    cout<<"+\n";
                }
                else
                {
                    cout<<"-\n";
                }
        }
    }
    return 0;
}
