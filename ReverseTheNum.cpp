#include<iostream>
using namespace std;

int main(){
    int Num, Rem,Sum = 0;
    cout<<"Please Enter the Number:";
    cin>>Num;

    if (Num != 0)
    {
        while (Num != 0)
        {
            Rem = Num % 10;
            Sum = (Sum * 10) + Rem;
            Num = Num / 10; 
        }

        cout<<Sum;
        
    }

    else{
        cout<<0;
    }
    
    
    
    return 0;
}