#include <iostream>
using namespace std;
int main()
{
    int n, nextR=0, Kplace;
    cin>>n;
    cin>>Kplace;
    if(n<=50 && n>=1 && Kplace>=1 && Kplace<=50)
    {

    int conScr[n];
    for(int i=0; i<n; i++)
       {
        cin>>conScr[i];
       }
     for(int j=0; j<n; j++)
        {
           if(conScr[j]>=conScr[Kplace-1] && conScr[j]>=1)
             {
              ++nextR;
             }
        }
    cout<<nextR;

    }
    return 0;
}
