#include<iostream>
using namespace std;

int main(){
    long long BigInt;
    int sum = 0;
    cout<<"Enter the Number"<<endl;
    cin>>BigInt;
    cout<<endl<<endl;
    for (int i = 1; i <= BigInt; i++)
    {
        sum += i;
        
    }
    cout<<"The sum of first "<<BigInt<<" Natural numbers is "<<sum<<endl;
    return 0;
}

