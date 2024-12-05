#include <iostream>
using namespace std;
int main()
{
    int n;   //for line
    cin>>n;
    char word2[100][100];
    char word[100][100];
    if (n>=1 && n<=100)
    {
      for(int k=0; k<=n; k++)
         {
             int l=0;
                do{
                    cin>>word[k][l];
                    l++;
                    if(word[k][l]==' ')
                    {
                        l=false;
                    }
                }while(l);

         }

      for(int i=0; i<n; i++)
         {
           for(int j=0; j<word[].size(); j++)
              {
                word[i][j]=word2[i][j];
              }
         }
      for(int q=0; q<n; q++)
         {
             for(int r=0; r<word.size();r++)
                {
                    cout<<word2[q][r];
                    //cout<<word2.size()-2;
                    //cout<<word2[word2.size()-1];
                }
         }

    }
    return 0;
}
