#include<iostream>
using namespace std;

int main(){
    int num, rem, palin, sum= 0;

    cout<<"Please Enter a Number:";
    cin>>num;

   
    palin = num;

    if(num != 0){
        while (num != 0)
        {
            rem = num % 10;
            sum = (sum * 10) + rem;
            num = num / 10;
        };

        if (palin == sum)
        {
            cout<<"yes, it is a palindrome Number";
        }

        else{
            cout<<"NO, it is not a palindrome Number";
        }
        
        
    }
    return 0;
}