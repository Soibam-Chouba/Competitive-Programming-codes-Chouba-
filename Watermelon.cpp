#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{

    double sum, w, num = 100, num1=2, num3=0.00;
    double per[3]={25, 50, 75};
    double sum1[3];
    double sum2[3];
    sum = fmod(w,2);

    cin>>w;
    if (w>=1 && w<=100)
    {
        if( sum == 0 && w >=4)
        {
        for( int i=0; i<3; i++)
           {
             sum1[i] =(per[i]/num)*w;
             sum2[i]= fmod(sum1[i],num1);
             cout << fixed << setprecision(2);
             cout << per[i] << "% of " << w << " is " << sum1[i]<< endl;
           }
         if(sum2[0]==num3 && sum2[1]==num3 && sum2[2]==num3)
             {
                  cout<<"YES";

             }
             else
             {
                  cout<<"NO";

             }

       }
    }
    return 0;
}
