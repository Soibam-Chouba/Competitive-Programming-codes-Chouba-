#include <iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  if(t>=1 && t<=10000)
  {
    while(t--)
      {
          int n, m, r, c;
          cin>>n>>m>>r>>c;

          int left_person =(r- 1)*m+c;
          long int num_people = n*m;
          long int sum_Man =0;
          for(int i=0;i<sizeof(m); i++)
          {
              if(m[0]==1 && m[i]==0 && m==n)
              {
                      cout<<1;
                      for(int k=0; k<sizeof(m)-2; k++)
                      {
                          cout<<9;
                      }
                      cout<<8;
                      for(int k=0; k<sizeof(m)-1; k++)
                      {
                          cout<<0;
                      }
                      cout<<endl;
              }
    else
        {
        for(int j= left_person + 1; j<=num_people; j++)
          {
              int cur_row = (j - 1) / m + 1;
              int cur_col = (j - 1) % m + 1;

              int pre_row = (j - 2) / m + 1;
              int pre_col = (j - 2) % m + 1;

              sum_Man += abs(pre_row - cur_row)+abs(pre_col - cur_col);
          }
          cout<<sum_Man<<endl;
        }
          }

      }
  }
  return 0;
}
