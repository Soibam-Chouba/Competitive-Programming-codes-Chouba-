#include <iostream>
using namespace std;
int main()
{
    int x=0, n;
    string arry[4]={"++X","X++","--X","X--"};
    string xoper[150];
    cin>>n;
    if (n>=1 && n<=150)
    {
        for( int i=0; i<n; i++)
        {
            cin>>xoper[i];
            if(xoper[i]==arry[0])
            {
               ++x;
            }
            else if(xoper[i]==arry[1])
            {
               x++;
            }
            else if(xoper[i]==arry[2])
            {
               --x;
            }
            else if(xoper[i]==arry[3])
            {
               x--;
            }
        }
        cout<<x;
    }
    return 0;
}
