#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"Year Must be of 4 Digits"<<endl;
    cout<<"Enter the year"<<endl;
    cin>>year;
    int rem1 = year % 400;
    int rem2 = year % 4;
    int rem3 = year % 100;
    if(rem1 == 0)
    {
        cout<<year<<" is a leap year"<<endl;
    }

    else if (rem2 == 0 && rem3 != 0)
    {
        cout<<year<<" is a leap year"<<endl;
    }
    
    else
    {
        cout<<year<<" is not a leap year";
    }
    return 0;
}