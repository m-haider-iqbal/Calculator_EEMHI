#include<iostream>
//#include<conio.h>
#include<math.h>
//#include<stdlib.h>
//#include<iomanip>

    float num1, num2, res;
    int Select;
    
using namespace std;

void sum();
void min();
void mul();
void divv();

int main ()
{
            cout<<"\nEnter Any Two Numbers: \n";
            cin>>num1>>num2;
            sum();
            min();
            mul();
            divv();

//   cout<<endl;

    return 0;
    
}

void sum()
{
        cout<<"\nYou Entered No1 = "<<num1;
        cout<<"\nYou Entered No2 = "<<num2;
        res = num1+num2;
        cout<<"\n\nResult = "<<res;
}

void min()
{
        cout<<"\nYou Entered No1 = "<<num1;
        cout<<"\nYou Entered No2 = "<<num2;
        res = num1-num2;
        cout<<"\n\nResult = "<<res;
}

void mul()
{
        cout<<"\nYou Entered No1 = "<<num1;
        cout<<"\nYou Entered No2 = "<<num2;
        res = num1*num2;
        cout<<"\n\nResult = "<<res;
}

void divv()
{
        cout<<"\nYou Entered No1 = "<<num1;
        cout<<"\nYou Entered No2 = "<<num2;
        res = num1/num2;
        cout<<"\n\nResult = "<<res;
}
