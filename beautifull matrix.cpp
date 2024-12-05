#include <iostream>
#include <cstdlib> //for abs
using namespace std;
int main()
{
    int num[5][5];
    int raw, column, tRaw, tColumn, moves;
    for(int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            cin>>num[i][j];
            if (num[i][j]==1)
            {
               raw =i;
               column=j;
            }
        }
    }

    tRaw = 2;
    tColumn =2;
    moves = abs(raw - tRaw)+ abs(column - tColumn);
    cout<<moves;
    return 0;
}
