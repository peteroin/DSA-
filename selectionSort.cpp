#include<bits/stdc++.h>

using namespace std;

void display(vector<int>& array){

    for(int i=0; i<array.size(); i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(vector<int>& array){
    
    for(int i=0; i<array.size()-1; i++){
        int minIndex=i;
        for(int j=i+1; j<array.size(); j++){
            if(array[j]<array[minIndex]){
                minIndex=j;
            }
        }
        swap(array[minIndex], array[i]);
    }
    display(array);
}

int main(){

    vector<int> array{4,9,3,7,4,5,1};

    cout<<"Array: ";
    display(array);

    cout<<"Sorted Array: ";
    selectionSort(array);

    return 0;
}