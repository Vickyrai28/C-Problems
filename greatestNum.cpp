#include<iostream>
using namespace std;

int main(){
    long long num1;
    long long num2;
    cout<<"Enter the First Number"<<endl;
    cin>>num1;
    cout<<"Enter the second Number"<<endl;
    cin>>num2;
    if (num1>num2)
    {
        cout<<num1<<" is bigger than "<<num2<<endl;
    }

    else if (num1==num2)
    {
        cout<<num2<<" is equal to "<<num1<<endl;
    }
    

    else
    {
        cout<<num2<<" is bigger than "<<num1<<endl;
    }
    
    return 0;
}