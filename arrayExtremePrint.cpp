#include<bits/stdc++.h>

using namespace std;

void fillArray(int array[10], int size){

    cout<<"Fill the element the Array: ";

    for(int index=0; index<size; index++){
        cin>>array[index];
    }

}

void printExtreme(int array[10], int size){

    int start=0, end=size-1;

    while(start<=end){

        if(start == end ){

            cout<<array[start]<<" ";
        }
        else{

            cout<<array[start]<<" ";
            cout<<array[end]<<" ";

        }
        
        start++;
        end--;
    }
}



int main(){
    int array[10], size=10;

    fillArray(array, size);
    printExtreme(array, size);
}