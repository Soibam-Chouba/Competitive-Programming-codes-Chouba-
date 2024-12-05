#include <iostream>
using namespace std;
int main ()
{
    string arry[3];
    int t;
    cin>>t;
    if(t>=1 && t<=6)
        {
          for( int i=0; i<t; i++)
             {
              for(int j=0; j<1; j++)
                 {
                  cin>>arry[j];

                  if(arry[j]=="bca"|| arry[j]=="cab")
                    {
                     cout<<"NO"<<endl;
                    }
                  else if(arry[j]=="abc"|| arry[j]=="acb" || arry[j]=="bac"||arry[j]=="cba")
                    {
                     cout<<"YES"<<endl;
                    }
                  }

              }
        }
    return 0;
}
