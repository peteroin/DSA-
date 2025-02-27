#include<bits/stdc++.h>

using namespace std;

int main (){

    int num, rem, reverse=0;
    bool isNegative = 0;

    cout<<"Enter The Number: ";
    cin>>num;

    if(num<=INT_MIN){
        return 0;
    }

    

    if(num<0){

        isNegative=1;
        num=-num;
    }

    

    while(num>0){

        if(num>(INT_MAX)/10){
            return 0;
        }

        rem=num%10;
        reverse=(reverse*10) + rem;
        num=num/10;

    }

    if(isNegative){
        cout<<"Reversed Number: "<<-reverse;
    }
    else{
        cout<<"Reversed Number: "<<reverse;
    }

    

}