#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    if(t>=1 && t<=1000)
    {
       while(t--)
        {
          int n;
          cin>>n;
          vector <int> a(n);

          for(int i=0; i<n; i++)
          {
              cin>>a[i];
          }
        }
    }

    return 0;
}
