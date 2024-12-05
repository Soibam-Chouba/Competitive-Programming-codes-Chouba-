#include <iostream>
using namespace std;
int main()
{

 int t;
 cin>>t;
 if(t>=1 && t<=500)
 {
     for(int i=0; i<t; t++)
     {
         int light;
         cin>>light;
         int switch_[500][2];
         for(int j=0; j<light; j++)
         {
             for(int k=0; k<2; k++)
             {
                cin>>switch_[j][k];
             }

         }

         int max_=0, min_=0, total1=0, total2=0, total3=0;

         for(int j=1; j<=light; j++)
         {
             for(int k=1; k<=2; k++)
             {

                if(switch_[j%2==1][0]==1 && switch_[j%2==1][1]==1)
                {
                    total1= total1+2;
                    total2= total1-2;
                    total3=0;
                }
                else if(switch_[j%2==0][0]==1 && switch_[j%2==0][1]==1)
                {
                    total1=total1+2;
                    total2=total1-2;
                    total3=0;
                }
                else if(switch_[j%2==1][0]==1 || switch_[j%2==1][1]==1|| switch_[j%2==0][0]==1 || switch_[j%2==0][1]==1)
                {
                    total1=total1+1;
                }

             }

         }
        for(int j=1; j<=light; j++)
         {
             for(int k=1; k<=2; k++)
             {
              if(light==1)
              {

                if(switch_[k][0]==1 && switch_[j%2==1][1]==1)
                {
                    cout<<total3<<" "<<total3<<endl;
                }
                else if(switch_[j%2==0][0]==1 && switch_[j%2==0][1]==1)
                {
                    cout<<total3<<" "<<total3<<endl;
                }
                else if(switch_[j%2==1][0]==1 || switch_[j%2==1][1]==1|| switch_[j%2==0][0]==1 || switch_[j%2==0][1]==1)
                {
                    cout<<total1<<" "<<total1<<endl;
                }
              }
              else if(light>1)
              {

                if(switch_[k][0]==1 && switch_[j%2==1][1]==1)
                {
                    cout<<total2<<" "<<total1<<endl;
                }
                else if(switch_[j%2==0][0]==1 && switch_[j%2==0][1]==1)
                {
                    cout<<total2<<" "<<total1<<endl;
                }
                else if(switch_[j%2==1][0]==1 || switch_[j%2==1][1]==1|| switch_[j%2==0][0]==1 || switch_[j%2==0][1]==1)
                {
                    cout<<total2<<" "<<total1<<endl;
                }
              }

             }

         }

     }
 }
 return 0;
}
