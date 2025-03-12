#include<bits/stdc++.h>

using namespace std;

void moveAllNegToLeft(int *array, int size){
    // Dutch National Flag Algorithm
    int low=0, high=size-1;
    
    while(low<high){
        if(array[low]<0){
            low++;
        }
        else if(array[high]>0){
            high--;
        }
        else{
            swap(array[low], array[high]);
        }
    }
}

int main(){

    int array[]={-1, 8, 4, -3, 0, 7, 5, -9, -5, -7};
    int size=sizeof(array)/sizeof(int);

    cout<<"Array: ";
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;

    moveAllNegToLeft(array, size);

    cout<<"Array After Algorithm: ";
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;

    return 0;
}