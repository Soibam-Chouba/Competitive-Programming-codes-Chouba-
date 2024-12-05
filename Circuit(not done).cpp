#include <iostream>
using namespace std;
int main()
{

 int t;
 cin>>t;
 if(t>=1 && t<=500)
 {
     for(int m=0; m<t; m++)
     {
         int light;
         cin>>light;
         int switch_[500][2];
         for(int i=1; i<=light; i++)
         {
             for(int j=1; j<=2; j++)
             {
                cin>>switch_[i][j];
             }
         }//input

         int max_=0, min_=0,total_=0;
         for(int a=1; a<=light; a++)
         {
             for(int b=1; b<=1; b++)
             {
                 if(switch_[a%2==1][1]==1 && switch_[a%2==1][2]==0)
                 {
                    //min_++;
                   // max_++;
                    if(light==1){min_++;max_++;}
                    else if(light>1){total_= total_+max_; min_=max_;}
                            // cout<<min_<<" "<<max_<<endl;
                 }
                 else if(switch_[a%2==1][1]==0 && switch_[a%2==1][2]==1)
                 {
                    if(light==1){min_++;max_++;}
                    else if(light>1){total_= total_+max_; min_=max_;}
                             //cout<<min_<<" "<<max_<<endl;
                 }
                 else if(switch_[a%2==1][1]==1 && switch_[a%2==1][2]==1)
                 {
                     if(light==1)
                        {
                          total_=total_+2;
                          if(total_>2)
                            {
                              min_=total_-2;
                              max_=min_;
                            }
                         }
                    else if(light>1)
                        {
                           total_=max_+2;
                           min_=total_-2;
                        }
                            // cout<<min_<<" "<<max_<<endl;
                 }
             }//for inside
         }//for outside
         if(light==1){cout<<min_<<" "<<max_<<endl;}

         else if(light>1){cout<<min_<<" "<<total_<<endl;}
 //output
     }
 }
 return 0;
}
