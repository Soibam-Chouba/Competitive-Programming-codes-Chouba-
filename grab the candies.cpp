#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t, n;

    cin>>t;
    if(t>=1 && t<=100)
    {
        while(t--)
        {
          cin>>n;
          vector<int> candies(n);
          int mihai=0, bianca=0;
          bool has_even = false;

          for(int j=0; j<n; j++)
          {
             cin>>candies[j];

             if(candies[j]%2==0)
             {
                 mihai+=candies[j];
                 has_even = true;
             }
             else if(candies[j]%2==1)
             {
                 bianca+=candies[j];
             }
          }//for1

          /*cout<<"mihai:"<<mihai<<endl;
          cout<<"bianca:"<<bianca<<endl;*/
          //for know the value.
          if(mihai && has_even > bianca)
            {
              cout<<"Yes"<<endl;
            }
          else if(mihai<=bianca)
            {
              cout<<"No"<<endl;
            }
         mihai=0;
         bianca=0;
        }//test case.
    }//checking range
    return 0;
}
