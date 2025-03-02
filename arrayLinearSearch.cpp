#include<bits/stdc++.h>

using namespace std;

void fillArray(int array[10], int size){

    for(int index=0; index < size; index++){
        cin>>array[index];
    }

}

void findArray(int array[10], int size, int key){

    bool found=0;

    for(int index=0; index<size; index++){
        if(array[index]==key){
            found=1;
        }
    }

    if(found){
        cout<<key<<" is in the Array.";
    }
    else{
        cout<<key<<" is not in the Array.";
    }
}

int main(){

    int array[10], size = 10, key;

    cout<<"Fill the Element in the Array: ";

    fillArray(array, size);

    cout<<"Enter the Element to find: ";
    cin>>key;
    findArray(array, size, key);


    return 0;

}