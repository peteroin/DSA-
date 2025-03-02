#include<bits/stdc++.h>

using namespace std;

void fillArray(int array[10], int size){

    cout<<"Fill the Array: ";

    for(int index=0; index<size; index++){
        cin>>array[index];
    }
}

void reverseArray(int array[10], int size){

    int start=0, end=size-1;
    int temp;

    while(start<=end){

        swap(array[start], array[end]);

        // OR

        // temp=array[start];
        // array[start]=array[end];
        // array[end]=temp;
        
        start++;
        end--;
    }

    // Printing the Reversed Array

    cout<<"Reversed Array: ";
    for(int index=0; index<size; index++){

        cout<<array[index]<<" ";
    }
}

int main(){

    int array[10], size=10;

    fillArray(array, size);
    reverseArray(array, size);

    return 0;
}