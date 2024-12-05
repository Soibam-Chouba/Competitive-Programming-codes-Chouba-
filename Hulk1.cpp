//Chouba's problem no.7
//Hulk (div 2)//Question no.:A (Accepted)
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if (n>=1 && n<=100)
       {
       for(int i=1; i<=n;i++)   //This loop is for only i= 1
       {
           if (i==1)
           {
               cout<<"I hate";
           }
       }
       for(int i=1; i<2;i++)    //This loop will show " that " between after only 1st "I hate" and 1st "I love".
       {
              if(n==1)          //This is the solution of output "I hate that it".
                {
                 continue;
                }
              cout<<" that ";
       }
       for(int i=2; i<=n;i++)
       {
           if( i>=3 )           //This " that " is for only n>=3.
            {
              cout<<" that ";
            }
           if (i%2 == 1)        //Odd number
           {
               cout<<"I hate";
           }
           else if (i%2 == 0)   //Even number
           {
               cout<<"I love";
           }

         }

       cout<<" it";
    }
     return 0;
}
//Solve by Soibamcha Chouba Moirang.
