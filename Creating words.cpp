#include <iostream>
using namespace std;
int main()
{
    char a[3], b[3], c[2];
    int t;
    cin>>t;
    if(t>=1 && t<=100)
    {
       for(int i=0; i<t; i++)
           {
              for(int j=0; j<3; j++)
                 {
                   cin>>a[j];
                   c[0]=a[0];
                 }


              for(int j=0; j<3; j++)
                 {
                   cin>>b[j];
                   c[1]=b[0];
                 }
              for(int j=0; j<3; j++)
                 {
                   a[0]=c[1];
                   cout<<a[j];
                 }
                 cout<<" ";
              for(int j=0; j<3; j++)
                 {
                   b[0]=c[0];
                   cout<<b[j];
                 }
                 cout<<endl;
           }

    }
    return 0;
}
