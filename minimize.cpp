#include <iostream>
int main()
{
    int a,b, t;
    int c[55];
    std::cin>>t;
    if(t>=1 && t<=55){
       for(int i=0; i<t; i++)
        {
            std::cin>>a;
            std::cin>>b;
           if (a>=1 && b>=a && b<=10)
              {
               c[i]=b-a;
              }
        }
    for(int i=0; i<t; i++){
        std::cout<<c[i]<<std::endl;
    }
    }
return 0;
}
