#include<iostream>
using namespace std;
int main()
{
    {
    // if else condistion

    int age ;
    cout<<"enter your age"<<endl;
    cin>>age;

    if (age>=100)
    {
        cout<<"invalid age";
    }

    else if  (age>=18)
    {
        cout<<"you can vote";
    }

    else{
        cout<<"you can not vote";
    }

}

}