#include <iostream>
using namespace std;
int main()
{
    int m, n;
    int grup1[50]={0,0,0,3,0,0,0,7,0,0,0,11,0 ,0 ,0 ,15,0 ,0 ,0 ,19,0 ,0 ,0 ,23,0 ,0 ,0 ,27,0 ,0 ,0 ,31,0 ,0 ,0 ,35,0 ,0 ,0 ,39,0 ,0 ,0 ,43,0 ,0 ,0 ,47,0 ,0 };
    int grup2[50]={0,0,0,0,0,5,0,0,0,9,0,0 ,0 ,13,0 ,0 ,0 ,17,0 ,0 ,0 ,21,0 ,0 ,0 ,25,0 ,0 ,0 ,29,0 ,0 ,0 ,33,0 ,0 ,0 ,37,0 ,0 ,0 ,41,0 ,0 ,0 ,45,0 ,0 ,0 ,49};
    cin>>m;
    cin>>n;
    char snake[m][n];

    if(m>=3 && n>=3 && m<=50 && n<=50 && n%2==1)
    {
      for(int i=0; i<m; i++)
      {
          for(int j=0; j<n; j++)
          {
              //line 1 [Done]
              if(i==0)
              {
                  snake[i][j]='#';
                  cout<<snake[i][j];
              }

              //line 2 [Done]
              else if(i==1)
              {
                  if(j==n-1)
                  {
                    snake[i][j]='#';
                    cout<<snake[i][j];
                  }
                  else
                  {
                    snake[i][j]='.';
                    cout<<snake[i][j];
                  }

              }

              //line 3 & line+2 [Done]
              else if(i%2==0)
              {
                  snake[i][j]='#';
                  cout<<snake[i][j];
              }

              //line 4++ & line+2
              else if(i%2==1)
              {

                       if(i>=3 && i==grup1[i])
                         {
                          snake[i][0]='#';
                          cout<<snake[i][j];
                         }
                       else if(i>=5 &&i==grup2[i])
                         {
                          snake[i][m-1]='#';
                          cout<<snake[i][j];
                         }

                       else
                       {
                         snake[i][j]='.';
                         cout<<snake[i][j];
                       }

              }

          }
          cout<<endl;
      }
    }
    return 0;
}
