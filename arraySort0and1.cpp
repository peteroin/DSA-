#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> array{0, 1, 0, 1, 0, 1, 1, 0, 0, 1, 0, 1};

    int start = 0;
    int end = array.size() - 1;
    int i=0;

    cout<<"Array: ";
    for(int i=0; i<array.size(); i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;

    while(i <= end){

        if(array[i]==0){
            swap(array[start], array[i]);
            start++;
            i++;
        }
        else{
            swap(array[end], array[i]);
            end--;
        }

    }


    // Printing the Sorted Array
    cout<<"Sorted Array: ";
    for(auto value : array){
        cout<<value<<" ";
    }




    return 0;
}