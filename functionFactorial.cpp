#include<bits/stdc++.h>

using namespace std;

long long funcFactorial(int number){

    long long factorial=1;

    for(int i=1; i<=number; i++){
        factorial=factorial*i;
    }

    return factorial;
}

int main(){

    int number;

    cout<<"Enter the Number: ";
    cin>>number;

    long long factorial=funcFactorial(number);

    cout<<"Factorial of "<<number<<" is "<<factorial;
}