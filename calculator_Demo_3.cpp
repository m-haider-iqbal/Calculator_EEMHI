#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<iomanip>


  char op;
using namespace std;



void sum()
   {
    
    int sum = 0;
    int n;
    int numberitems;
    cout << "Enter number of items: \n";
    cin >> numberitems;

    for(int i=0;i<numberitems;i++)
    {
        cout<< "Enter number "<<i<<":\n\n" ;
        cin>>n; 
        sum+=n;
    }
    cout<<"sum is: "<< sum<<endl<<endl;
    
    }
void diff()
    {
     int diff;
     int n1,n2;
     cout<<"enter two numbers to find their difference:\n\n";
     cout<<"enter first number:";
     cin>>n1;
     cout<<"\nenter second number:";
     cin>>n2;
     diff=n1-n2;
     cout<<"\ndifference is:"<<diff<<endl<<endl;
     }
     
void pro()
    
    {
     int pro=1;
     int n;
     int numberitems;
     cout<<"enter number of items:\n";
     cin>>numberitems;
     for(int i=0;i<=numberitems;i++)
     {
             cout<<"\nenter item "<<i<<":";
             cin>>n;
             pro*=n;
     }
             
     cout<<"product is:"<<pro<<endl<<endl;    
     }
       
 void div()
     {
      int div;
      int n1;
      int n2;
      cout<<"enter 2 numbers to find their quotient\n\n";
      cout<<"enter numerator:";
      cin>>n1;
      cout<<"\nenter denominator:";
      cin>>n2;
      div=n1/n2;
      cout<<"\nquotient is:"<<div<<endl<<endl;
      }      


       



int main()
{   

    do
    {
              
    cout<<"***which operation you want to perform***\n";
    cout<<"press 0 for exit\n";
    cout<<"press 1 for addition \n";
    cout<<"press 2 for subtraction\n";
    cout<<"press 3 for multiplication\n";
    cout<<"press 4 for division\n";
    cout<<"press option:";
    cin>>op;
    
    switch(op)
    {
              case '1':
              sum();
              break;
              case '2':
              diff();
              break;
              case '3':
              pro();
              break;
              case '4':
              div();
              break;
              case '0':
              exit(0);    
              default:
              cout<<"invalid input"  ;
              system("cls");
    } 
    }
                                                                         
    while(op!='0');
                    
                    getch();
                    }
