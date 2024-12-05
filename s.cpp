#include<iostream>
using namespace std;
int main()
{
    int rows;
    int cols;
 cout<<"enter the rows of matrix :";
 cin>>rows;

 cout<<"enter the cols of matrix :";
 cin>>cols;
 cout<<endl;
 cout<<"=============================="<<endl;
 int matrix [rows][cols];

 cout<<"enter the elements of the matrix :"<<endl;
 cout<<"------------------------------\n";
 for(int i=0; i<rows; i++)
 {
     for(int j=0; j<cols; j++)
     {
         cout<<"enter the elements=["<<i<<"]["<<j<<"]"<<endl;

         cin>>matrix[i][j];
     }
 }

    int transpose[rows][cols];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            transpose[i][j]=matrix[i][j];
        }
    }

    cout<<"the transpose matrix is :"<<endl;
    for(int i=0;i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
         cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}
