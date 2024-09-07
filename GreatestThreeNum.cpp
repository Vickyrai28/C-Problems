#include<iostream>
using namespace std;

int main(){
    long long num1;
    long long num2;
    long long num3;

    cout<<"Enter First Number"<<endl;
    cin>>num1;

    cout<<"Enter Second Number"<<endl;
    cin>>num2;

    cout<<"Enter Third Number"<<endl;
    cin>>num3;

    if(num1>num2 && num1>num3){
        cout<<num1<<" is grestest";
    }

    else if (num1<num2 && num2>num3)
    {
        cout<<num2<<" is grestest";
    }

    else if (num3>num2 && num3>num1)
    {
        cout<<num3<<" is grestest";
    }

    else{
        cout<<"All is equal";
    }
    
    
    return 0;
}