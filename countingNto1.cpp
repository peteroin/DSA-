#include<iostream>

using namespace std;

int main(){
    int number;

    cout<<"---BACKWARD COUNTING---"<<endl;
    cout<<"Enter the Number: ";
    cin>>number;
    
    for(number; number>=1; number--){
        cout<<number<<endl;
    }
}