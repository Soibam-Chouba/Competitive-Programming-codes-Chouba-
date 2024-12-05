#include <iostream>
using namespace std;
int main()
{
    int t, sizeAr;
    cin>>t;

    if(t<=100 && t>=1)
    {
    while (t--)
    {
      int n;
      cin>>n;
      int arry[n];
      for(int j=0; j<n; j++)
      {
         cin>>arry[j]; //element storing
      }//for1

      //max ele
      int maxEle = arry[0];
      for(int k=0; k<n; k++)
      {
          if (arry[k]>maxEle)
          {
              maxEle = arry[k];
          }
      }//for2

      int minEle = arry[0];
      for(int i=0; i<n; i++)
      {
          if (arry[i]<maxEle)
          {
              minEle = arry[i];
          }
      }//for3

      long long max_score=0;

      for(int l=0; l<n; l++)
      {
          if(arry[l]==maxEle)
          {
            max_score = max_score + (maxEle - maxEle);
          }
          else if(arry[l]!=maxEle)
          {
            max_score = max_score + (maxEle - minEle);
          }
      }//for4

      cout<<max_score<<endl;
    }//test case
    }//range of t.
    return 0;
}
