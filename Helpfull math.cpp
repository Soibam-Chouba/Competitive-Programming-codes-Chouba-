#include <iostream>
using namespace std;
int main()
{
    string sum;
    cin>>sum;
    cout<<sum.size()<<endl;
    int a=0, b=0, c=0;
    for(int i=0; i<sum.size(); i++)
    {
      //0 index
      if(sum[0]=='1')
      {
         a+=1;
      }
      else if(sum[0]=='2')
      {
         b+=1;
      }
      else if(sum[0]=='3')
      {
         c+=1;
      }
      //2 index
      if(sum[2]=='1')
      {
         a+=1;
      }
      else if(sum[2]=='2')
      {
         b+=1;
      }
      else if(sum[2]=='3')
      {
         c+=1;
      }
      //all even index
      if(sum[i]%2==0 && sum[i]=='1')
      {
         a+=1;
      }
      else if(sum[i]%2==0 && sum[i]=='2')
      {
         b+=1;
      }
      else if(sum[i]%2==0 && sum[i]=='3')
      {
         c+=1;
      }
    }
      cout<<a<<endl;
      cout<<b<<endl;
      cout<<c<<endl;
    for(int m=0; m<1; m++)
    {
         for(int j=0; j<a; j++)
         {
          cout<<'1'<<"+";
         }
         for(int k=0; k<b; k++)
         {
          cout<<'2'<<"+";
         }
         for(int l=0; l<c; l++)
         {
          cout<<'3'<<"+";
         }
    }

    return 0;
}
