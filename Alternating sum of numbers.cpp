#include <iostream>
using namespace std;
int main()
{
    int t, n, sum;
    int arry[100];
    cin>>t;

    if (t>=1 && t<=1000)
    {
        for(int i=1; i<=t; i++)
        {
            cin>>n;
            //for(int k=1; k<=n; k++){
            for(int j=1; j<=n; j++)
            {
               cin>>arry[j];
            }
            /*for(int j=1; j<=n; j++)
            {
               cout<<arry[j]<<" ";
            }
            cout<<endl;*/
            for (int j=1; j<=n; j++)
            {

               if(j==1)
               {
                   sum = arry[j];
               }
               else if(j%2==1 && j>=3)
               {
                   sum = sum + arry[j];
               }
               else if(j%2==0 && j>=2)
               {
                   sum = sum - arry[j];
               }
            }
            //}
             cout<<sum<<endl;
        }

    }
    return 0;
}
