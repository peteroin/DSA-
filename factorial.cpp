#include<iostream>

using namespace std;

int main(){
    int num, factorial = 1;
    cout<<"Factorial of: ";
    cin>>num;
    int input=num;
    if(num==0){
        cout<<"Factorial of "<<num<<" is "<<factorial;
    }
    else if(num>0){
        for(num; num>=1; num--){
        factorial*=num;
    }
    cout<<"Factorial of "<<input<<" is "<<factorial;
    }
    else
    cout<<"Factorial of Negative Number not Exist";
    
}