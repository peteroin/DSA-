#include<bits/stdc++.h>

using namespace std;

int main(){

    int num, mask, k, ans;

    cout<<"Enter the Number: ";
    cin>>num;

    cout<<"Which Kth Bit to Set: ";
    cin>>k;

    mask=1<<k;
    ans=num|mask;

    cout<<"Number After Setting the Kth Bit: "<<ans;

    




}