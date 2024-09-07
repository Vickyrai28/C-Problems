#include<iostream>
using namespace std;

int main(){
    long long Num;
    int Dig;
    int Sum = 0;

    cout<<"Please Enter your Number:";
    cin>>Num;
    
    cout<<endl;

    if (Num != 0)
    {
        while (Num != 0)
        {
            Sum += Num % 10;
            Num = Num / 10;
        }

        cout<<Sum<<endl;
        
        
        
        
    }

    else{
        cout<<0<<endl;
    }
    
    return 0;
}