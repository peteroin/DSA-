#include<bits/stdc++.h>

using namespace std;

void fillArray(int array[10], int size){

    cout<<"Fill the Element in the Array: ";
    for(int index = 0; index<size; index++){
        cin>>array[index];
    }
}

void maxArray(int array[10], int size){

    int max = INT_MIN;

    for(int index=0; index<size; index++){

        if(array[index]>=max){
            max=array[index];
        }
    }
    cout<<"Maximum Number: "<<max<<endl;
}

void minArray(int array[10], int size){

    int min = INT_MAX;

    for(int index=0; index<size; index++){

        if(array[index]<=min){
            min=array[index];
        }
    }
    cout<<"Minimum Number: "<<min;
}

int main(){

    int array[10], size=10;

    fillArray(array, size);
    maxArray(array, size);
    minArray(array, size);

    return 0;
}