#include <iostream>
#include <string>
using namespace std;
int main()
{
    string userName;
    cin>>userName;
    int count_;
    for(int i=0; i<sizeof(userName); i++)
    {
        for(int j=1; j<sizeof(userName); j++)
        {
           if(userName[i]!=userName[i+1])
           {
               count_++;
               cout<<count_<<" ";
           }
        }
    }
    if(count_%2==1)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM";
    }
    return 0;
}
