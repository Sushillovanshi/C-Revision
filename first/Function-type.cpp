#include<iostream>
using namespace std;

 int add(int a, int b)
    
    {
        int c;
        c = a + b;
        return c;

    }

int main()
{
   int a , b;
   cout<<"Enter they any number"<<endl;
   cin>>a;

   cout<<"Enter they any second number"<<endl;
   cin>>b;

   cout<<"Add they number"<<add(a,b);

    
}
