#include <iostream>
using namespace std;
int main()
{
    //n = solution
    int n;
    cin>>n;
    int matrix[1000][3];

    //takin input
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>matrix[i][j];
        }
    }

    //calculating...
    int sure_solution=0, write=0, s=1;
    for(int i=0; i<n; i++)
    {

        for(int j=0; j<3; j++)
        {
          if(matrix[i][0]==0 && matrix[i][1]!=1)
          {
              sure_solution=0;
          }
          else if(matrix[i][0]==0 && matrix[i][2]!=1)
          {
              sure_solution=0;
          }
          else if(matrix[i][0]==0)
          {
              sure_solution=1;
          }
          sure_solution= sure_solution + matrix[i][j];
          //cout<<sure_solution<<" /";
          s= s* sure_solution;
          //cout<<s<<" ";
          if(s==2)
          {
            //if(sure_solution>1 && sure_solution<3){
                write++;
              //}
          }
        }
        sure_solution-=sure_solution;
        s-=(s-1);
        //cout<<sure_solution;
    }
    //cout<<endl;
    cout<<write;
    return 0;
}
