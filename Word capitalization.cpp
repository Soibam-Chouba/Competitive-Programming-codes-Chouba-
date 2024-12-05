#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char word[1000];
    char capChar[26]={'A','B','C','D','E','F', 'G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char smlChar[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    cin>>word;
    int i=0;
    do{
        if(word[0]==smlChar[i])
        {
            word[0]=capChar[i];
        }
        i++;
    }while(i<26);
    cout<<word;
    return 0;
}
