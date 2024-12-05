#include <iostream>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    cin>>n;
    int arry[200][200];
    int show_magic[1000];
    if(t>=1 && t<=200)
    {

    for(int x=0; x<4; x++)
    {
        for(int s=0; s<1; s++)
        {

         for (int i = 0; i < n; i++)
            {
             for (int j = 0; j < n; j++)
             {
                cin >> arry[i][j];
             }//column
            }//raw

          for (int p = 0; p < n; p++)
            {
             for (int q = 0; q < n; q++)
             {
                if(arry[p][q]<0 && n>1 && arry[p][q]!=1 )
                {
                    int use_magic = (arry[p][q])*-1;
                    for(int l=0; l<use_magic; l++)
                    {
                        show_magic[p]=0;
                        show_magic[p]++;
                    }
                    cout<<show_magic[p]<<endl;
                }//condition2

                else if(arry[p][q]<0 && n==1 && arry[p][q]==1)
                {
                    show_magic[p]=0;
                    cout<<show_magic<<endl;
                }
             }//column2
            }//raw2

        }
    }//test case
    }//condition
    return 0;
}
