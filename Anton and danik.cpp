#include <iostream>
using namespace std;
int main()
{
    int n, a=0, b=0;
    cin>>n;
    string game;
    cin>>game;

    for(int i=0; i<n; i++)
    {
        if(game[i]=='A')
        {
            a++;
        }
        else if(game[i]=='D')
        {
            b++;
        }
    }

    if(a==b)
    {
        cout<<"Friendship"<<endl;
    }
    else if(a>b)
    {
        cout<<"Anton"<<endl;
    }
    else if(a<b)
    {
        cout<<"Danik"<<endl;
    }
    return 0;
}
