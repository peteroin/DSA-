#include<bits/stdc++.h>

using namespace std;


// Using Sort Method
void sortArray(vector<int>& array){
    sort(array.begin(), array.end());

    cout<<"Sort Method: "<<endl;
    cout<<"Printing the Sorted Array: ";
    for(int i=0; i<array.size(); i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
}


// Using Count Method
void sortArray2(vector<int>& array2){
    int zero, one, two;
    zero = one = two = 0;

    for(int i=0; i<array2.size(); i++){

        if(array2[i]==0){
            zero++;
        }
        else if(array2[i]==1){
            one++;
        }
        else{
            two++;
        }
    }

    int i=0;
    while(zero--){
        array2[i] = 0;
        i++;
        
    }
    while(one--){
        array2[i] = 1;
        i++;
    }
    while(two--){
        array2[i] = 2;
        i++;
    }
    

    cout<<"Using Count Method: "<<endl;
    cout<<"Printing the Sorted Array: ";
    for(int i=0; i<array2.size(); i++){
        cout<<array2[i]<<" ";
    }
    cout<<endl<<endl;
    
}

// Using In place Three Pointer Approach
void sortArray3(vector<int>& array3){

    int low=0, medium=0, high = array3.size() - 1;

    while(medium<=high){
        if(array3[medium]==0){
            swap(array3[low], array3[medium]);
            low++;
            medium++;
        }
        else if(array3[medium]==1){
            medium++;
        }
        else{
            swap(array3[medium], array3[high]);
            high--;
        }
    }

    cout<<"Using the In-Place Three Pointer Approach: "<<endl;
    cout<<"Printing the Sorted Array: ";
    for(int i=0; i<array3.size(); i++){
        cout<<array3[i]<<" ";
    }
    cout<<endl;


}

int main(){

    vector<int> array{0, 1, 1, 2, 2, 1, 0, 0, 2};
    vector<int> array2{0, 1, 1, 2, 2, 1, 0, 0, 2};
    vector<int> array3{0, 1, 1, 2, 2, 1, 0, 0, 2};

    cout<<"Printing the Array: ";
    for(int i=0; i<array.size(); i++){
        cout<<array[i]<<" ";
    }
    cout<<endl<<endl;

    // Sort Method
    sortArray(array);

    // Count Method
    sortArray2(array2);

    // In Place Three Pointer Approach
    sortArray3(array3);


    return 0;
}

