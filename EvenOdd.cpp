// EXCERCISE 1) WRITE A PROGRAM TO CHECK WHETHER AN ENTERED NUMBER IS EVEN OR ODD

// ************* SOLVED *************** 





#include<iostream>
using namespace std;

int main(){
    long long BigInt;
    cout<<"Enter a number"<<endl;
    cin>>BigInt;
    int reminder = BigInt % 2;
 
    if(reminder == 0)
    {
        cout<<"The given Number "<<BigInt<<" is EVEN Number";
    }

    else
    {
        cout<<"The given Number "<<BigInt<<" is ODD Number";
    }
    return 0;
}