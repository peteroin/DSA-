#include<bits/stdc++.h>

using namespace std;

int funcEvenOrOdd(int number){

    if(number%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    int number;

    cout<<"Enter the Number: ";
    cin>>number;

    int check=funcEvenOrOdd(number);

    if(check==1){
        cout<<number<<" is Even."<<endl;
    }
    else{
        cout<<number<<" is Odd."<<endl;
    }

    return 0;
}