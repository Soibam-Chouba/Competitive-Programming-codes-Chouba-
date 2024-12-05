#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>> t;
    string digit;

    if(t>=1 && t<=1000)
    {
        for(int i=0; i<t; i++)
        {
          cin>>digit;
          //cout <<  digit[0] + digit[5];
               string digit_1[6];
               int digit_Int[6];
               int sum1=0, sum2=0;
               for(int j=0; j<6; j++)
               {
                 if(j==0){digit_1[j]= digit.substr(j,1);}
                 else if(j==1){digit_1[j]= digit.substr(1,1);} //row,column
                 else if(j==2){digit_1[j]= digit.substr(2,1);}
                 else if(j==3){digit_1[j]= digit.substr(3,1);}
                 else if(j==4){digit_1[j]= digit.substr(4,1);}
                 else if(j==5){digit_1[j]= digit.substr(5,1);}
                 //cout<<digit_1[j]<<" ";
                 digit_Int[j] = stoi(digit_1[j]);              //stoi() for string to integer.
               }
               sum1= digit_Int[0]+digit_Int[1]+digit_Int[2];
               sum2= digit_Int[3]+digit_Int[4]+digit_Int[5];
               //cout<<endl<<sum1<<" "<<sum2<<endl;
               /*string f3_
               string l3_digit= digit.substr(3,5);
               cout<<f3_digit<<" "<<l3_digit<<endl;
               int
               int sum2 = stoi(l3_digit);*/

                 if(sum1==sum2)
                 {
                   cout<<"Yes";
                 }
                 else if(sum1!=sum2)
                 {
                   cout<<"No";
                 }

            cout<<endl;
        }
    }
    return 0;
}
