#include<iostream>

using namespace std;

bool fcheckPrime(int number){
    if(number == 1){
        return false;
    }
    else{
        for (int i = 2; i < (number - 1); i++){
            if ((number % i) == 0){
                return false;
            }
        }
        return true;
    }
}

int main(){
    int number;
    cout<<"---CHECK PRIME NUMBER---"<<endl;
    cout<<"Enter the Number: ";
    cin>>number;
    bool checkPrime = fcheckPrime(number);
    if(checkPrime){
        cout<<number<<" is Prime Number";
    }
    else{
        cout<<number<<" is Not Prime Number";
    }
}