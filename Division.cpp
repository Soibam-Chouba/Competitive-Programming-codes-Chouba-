#include <iostream>
using namespace std;
int main()
{
    int t;
    int rating[10000];
    cin>>t;

    if (t>=1 && t<=10000)
    {
        for(int i=0; i<t; i++)
        {
            cin>>rating[i];
        }

        for(int j=0; j<t; j++)
        {
            if(rating[j]>=1900)
            {
                cout<<"Division 1";
            }
            else if(rating[j]>=1600 && rating[j]<=1899)
            {
                cout<<"Division 2";
            }
            else if(rating[j]>=1400 && rating[j]<=1599)
            {
                cout<<"Division 3";
            }
            else if(rating[j]<=1399)
            {
                cout<<"Division 4";
            }
            cout<<endl;
        }
    }
    return 0;
}
