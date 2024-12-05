#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    if (t>=1 && t<=500)
    {
       for(int a=0; a<t; a++)
       {
        int n;
        cin>>n;
        int w[100] , h[100];
        if (n>=1 && n<=100)
        {

            for( int i=0; i<n; i++)
            {
               cin>>w[i];
               cin>>h[i];
            }

            for(int b=0; b<n; b++)
            {
                if(w[b]==0 && w[b]>100)
                {
                    break;
                }
                if(h[b]==0 && h[b]>100)
                {
                    break;
                }
            }
            int max_w=0, max_h=0;
            for(int j=0; j<n; j++)
            {
                if(w[j]>=max_w)
                {
                    max_w = w[j];
                }
            }
            for(int j=0; j<n; j++)
            {
                if(h[j]>=max_h)
                {
                    max_h = h[j];
                }
            }
            if(max_h == max_w)
            {
                int peri= max_w*4;
                cout<<peri<<endl;
            }
            else if(max_h != max_w)
            {
                int peri=(max_h*2)+(max_w*2);
                cout<<peri<<endl;
            }
        }
    }
    }
    return 0;
}
