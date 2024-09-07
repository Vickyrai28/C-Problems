// WRITE A PROGRAM TO CALCULATE SIMPLE INTREST


#include<iostream>
using namespace std;


int main(){
    float Principle, Rate, Time;

    cout<<"Principle: ";
    cin>>Principle;
    
    cout<<"Rate: ";
    cin>>Rate;
    
    cout<<"Time: ";
    cin>>Time;

    float intrest = (Principle*Rate*Time)/100;
    cout<<"Intrest is: "<<intrest<<endl;

    float Amount = Principle + intrest;
    cout<<"Total Amount is: "<<Amount;

    
    

    return 0;

}