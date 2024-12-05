#include <iostream>
using namespace std;
int main()
{
    int t, game[100], x=0;
    cin>>t;
    if (t>=1 && t<=100)
    {
      for(int i=0; i<t; i++)
      {
          cin>>game[i];
      }
      for(int j=0; j<t; j++)
      {
          if(game[j]%2==1)
          {
              cout<<"Kosuke"<<endl;
          }
          else if(game[j]%2==0)
          {
              cout<<"Sakurako"<<endl;
          }
          else if(game[j]==0)
          {
              cout<<"Sakurako"<<endl;
          }
          else if(game[j]==1)
          {
              cout<<"Kosuke"<<endl;
          }
          else if(game[j]==2)
          {
              cout<<"Sakurako"<<endl;
          }
      }
    }
    return 0;
}
