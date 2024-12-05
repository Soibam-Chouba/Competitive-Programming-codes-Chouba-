#include <iostream>
using namespace std;
int main()
{
    int t;
    string arry[8][8] ={{"a1","b1","c1","d1","e1","f1","g1","h1"},
                      {"a2","b2","c2","d2","e2","f2","g2","h2"},
                      {"a3","b3","c3","d3","e3","f3","g3","h3"},
                      {"a4","b4","c4","d4","e4","f4","g4","h4"},
                      {"a5","b5","c5","d5","e5","f5","g5","h5"},
                      {"a6","b6","c6","d6","e6","f6","g6","h6"},
                      {"a7","b7","c7","d7","e7","f7","g7","h7"},
                      {"a8","b8","c8","d8","e8","f8","g8","h8"}};
    string arry2[1][t];
    cin>>t;
    if (t>=1 && t<=64)
    {
        //input
        for(int k=0; k<t; k++)
           {
             for(int i=0; i<t; i++)
                {
                 for(int j=t; j<t+1; j++)
                    {
                     cin>>arry2[i][j];
                    }
                }

        //comparing
             for(int i=0; i<8; i++)
                {
                 for(int j=0; j<8; j++)
                    {
                        if( arry[i][j]== arry2[i][t])
                        {
                            continue;
                        }
                        cout<<arry[i][j]<<endl;
                    }
                }
            }

    }
    return 0;
}
