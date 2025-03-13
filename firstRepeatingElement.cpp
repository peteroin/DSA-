#include<bits/stdc++.h>

using namespace std;

int firstRepeated(int *array, int size){
    for(int i=0; i<size; i++){
        bool isRepeated=false;
        for(int j=i+1; j<size; j++){
            if(array[i]==array[j]){
                isRepeated=true;
                cout<<"Repeated Element is at Index: "<<i+1<<endl<<endl;         //Array given in Question with First element at Index 1 therefore i+1
                return i+1;
            }
        }
    }
    return -1;
}


// Using Unordered Map Hashing
int repeatedUsingMap(int *array, int size){

    unordered_map<int, int> hash;
    for(int i=0; i<size; i++){
        hash[array[i]]++;
    }

    for(int i=0; i<size; i++){
        if(hash[array[i]] > 1){

            cout<<"Using Hashing"<<endl;
            cout<<"Repeted Element is at Index: "<<i+1<<endl;
            return i+1;
        }
    }
    return -1;


}



int main(){

    int array[]={1,5,3,4,3,5,6};
    int size=sizeof(array)/sizeof(int);

    firstRepeated(array, size);
    repeatedUsingMap(array, size);
    
}