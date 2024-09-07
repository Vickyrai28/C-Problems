// EXCERCISE 1) WRITE A PROGRAM TO CHECK WHETHER AN ENTERED NUMBER IS POSITIVE OR NEGATIVE

// ************* SOLVED ***************   



#include<iostream>


using namespace std;


int main(){
    long long BigInteger;
    cout<<"Enter a Number"<<endl;
    cin>>BigInteger;

    if (BigInteger > 0)
    {
        cout<<"The number "<<BigInteger<<" is positive"<<endl;
    }

    else if (BigInteger == 0)
    {
        cout<<"The number "<<BigInteger<<" is zero"<<endl;
    }
    

    else{
        cout<<"The number "<<BigInteger<<" is negative"<<endl;
    }
    return 0;
}




