#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> rows;
    cin >> cols;

    int matrix[rows][cols];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
cout<< " entered mattrix:"<<endl;

for(int i=0;i<rows;i++)
{
for(int j=0;j<cols;j++)
{
cout<<matrix[i] [j];
cout<<" ";
}
cout<<"    \n";
}
cout << endl;

    int transpose[cols][rows];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "The transpose matrix is:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
