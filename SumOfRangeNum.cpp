#include<iostream>
using namespace std;

int main(){
    long long BigInt1;
    long long BigInt2;
    int sum = 0;
    cout<<"Enter the starting number"<<endl;
    cin>>BigInt1;
    cout<<"Enter the ending number"<<endl;
    cin>>BigInt2;
    
    for (int i = BigInt1; i <= BigInt2; i++)
    {
       sum += i;
    }
    cout<<"The sum of range is "<<sum<<endl;
    return 0;
}