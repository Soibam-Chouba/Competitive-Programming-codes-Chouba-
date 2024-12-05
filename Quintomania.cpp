#include <iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    if(test>=1 && test<=1000)
    {
       for(int t=0; t<test; t++)
       {
           int note;
           cin>>note;
           int note_melo[500];
           if(note>=2 && note<=500)
           {
               for(int n=0; n<note; n++)
               {
                  cin>>note_melo[n];
               }//how many int in notes.
           }//note range

           //output part calculating
           int interval=0;
           int semiton_checker=0;
           for(int i=0; i<note; i++)
           {
               int size_ = sizeof(note_melo) / sizeof(note_melo[0]);
               int last_index = size_-1;

               if(i==note-1)
                {
                    continue;
                }
                interval=abs(note_melo[i]-note_melo[i+1]);
                //cout<<interval<<" ";

               if(interval==5 || interval==7)
               {
                   semiton_checker++;
                   //cout<<semiton_checker<<" ";
               }
           }//calculating
           //real output;
           if(semiton_checker==note-1)
           {
               cout<<"Yes"<<endl;
           }
           else if(semiton_checker!=note)
           {
               cout<<"No"<<endl;
           }
       }//test
    }//test range

    return 0;
}
