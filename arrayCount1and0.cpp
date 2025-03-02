#include<bits/stdc++.h>

using namespace std;

void fillArray(int array[10], int size){

    cout<<"Fill the Array: ";

    for(int index=0; index<size; index++){
        cin>>array[index];
    }
}

void findArray(int array[10], int size){

    int one=0, zero=0;

    for(int index=0; index<size; index++){

        if(array[index]==1){
            one+=1;
        }
        else if(array[index]==0){
            zero+=1;
        }
    }

    cout<<"Number of 1 in the Array: "<<one<<endl;
    cout<<"Number of 0 in the Array: "<<zero;

}



int main(){

    int array[10], size=10;

    fillArray(array, size);
    findArray(array, size);

    return 0;
}