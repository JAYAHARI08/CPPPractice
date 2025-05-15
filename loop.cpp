
#include<iostream>
using namespace std;
int main()
{
    int a,three,five,seven;
    while(1)
    {
        cout<<"ENTER A NUMBER";
        cin>>a;
        three=a%3;
        if(three==0)
        {
            cout<<"AAA"<<endl;
        }
            else
                { 
                    
                
                     five=a%5;
                     if(five==0)
                    {
          cout<<"CCC"<<endl;
      }
      else
      {
    
         seven=a%7;
         if(seven==0)
         {
         cout<<"XXX"<<endl;
         }
         else
         {
             cout<<"BETTER LUCK NEXT TIME"<<endl;         }
      }
       if(a==10)
             {
                 cout<<"END"<<endl;
                 break;
             } 
    }
}}
