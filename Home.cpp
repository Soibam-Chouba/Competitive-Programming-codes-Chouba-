#include<iostream>
#include<string>         //to proper use of String...
int main()
{
std::cout<<"Hello again"<<"\n"<<"\"hello\""<<std::endl; //<<"hello"+"again" wrong..
//cout is an object...
//let's  create a variable
std::string name1 = "Chouba ";
std::string name2 = "Moirang";
std::cout<<"My name is "<<name1 + name2<<".\n";
std::cout<<20+2<<std::endl;;        //+; -; *; /
//we can finalize a variable's value with Using const Keyword...
const int myGoat = 10;
// int myGoat = 7;     //it will give me error...
std::cout<<"The rael GOAT is Leo Messi "<<myGoat<<".\n";

/*
<< Binary Left shift Operator.
>> Binary right shift Operator.
*/
std::string name;
std::cout<<"Enter your first name: ";
std::cin>> name;
std::cout<<"My full name is "<< name +" "+ name1 + name2<<".\n\n\n"; //+"something"+
/*
float vs. double

The precision of a floating point value indicates how many digits the value can
have after the decimal point. The precision of float is only six or seven decimal digits,
while double variables have a precision of about 15 digits. Therefore it is safer to use
double for most calculations.
*/
std::cout<<"*New*\n"<<"Scientific Numbers:\n"<<"an \"e OR E\" indicate the power of (10)^n.\n";
int myHp = 2e2;
std::cout<< "My Hp is: "<<myHp<<"\n";
double d1 = 12.534E2;
std::cout<< "Enemy Hp is: "<<d1<<"\n";
return 0;
}

