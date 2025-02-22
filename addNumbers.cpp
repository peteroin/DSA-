#include<iostream>

using namespace std;

int main(){
    int num, sum=0;

    cout<<"Consecutive Adding Upto: ";
    cin>>num;
    for(int i=0; i<=num; i++){
        sum+=i;
    }
    cout<<"Sum: "<<sum;
}
