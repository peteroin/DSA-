#include<bits/stdc++.h>

using namespace std;

void display(vector<int> array){
    for(int i=0; i<array.size(); i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int bubbleSearch(vector<int> array, int key){
    int start=0;
    int end=(array.size())-1;
    int mid=start + (end-start)/2;

    while(start<=end){
        if(array[mid]==key){
            return mid;
        }

        if(key>array[mid]){
            start=mid+1;
        }
        else{    //key<array[mid]
            end=mid-1;
        }
        
        mid=start + (end-start)/2;
    }

    return -1;
}

int main(){

    int key;

    vector<int> array{8,6,7,4,12,3,5};
    sort(array.begin(), array.end());     //Binary Search only Worked for Sorted Array / Only Worked for Monotonic functions
    display(array);
    cout<<"Value to Search: ";
    cin>>key;
    int index=bubbleSearch(array, key);    //For Both Odd and Even Number of Elements
    cout<<key<<" is at index: "<<index;

    return 0;
}