#include<bits/stdc++.h>

using namespace std;

// Using Double For Loop
int findDuplicate(vector<int>& array){

    cout<<"Using Double for Loop"<<endl;
    for(int i=0; i<array.size(); i++){
        for(int j=i+1; j<array.size(); j++){
            if(array[i]==array[j]){
                cout<<"Duplicate Elements: "<<array[j]<<" at Indexes "<<i<<" and "<<j<<endl<<endl;
                return array[j];
            }
        }
    }
    return -1;
    
}

// Using Sort Method
int sortDuplicate(vector<int>& array){
    
    cout<<"Using Sort Method"<<endl;
    sort(array.begin(), array.end());

    for(int i=0; i<array.size()-1; i++){
        if(array[i]==array[i+1]){
            cout<<"Duplicate Element : "<<array[i]<<endl<<endl;
            return array[i];
        }
    }
    return -1;

}

// Using Visited Method
int visitedDuplicate(vector<int>& array){
    int ans=-1;
    for(int i=0; i<array.size(); i++){
        int index=abs(array[i]);

        // Already Visited
        if(array[index]<0){
            ans=index;
            break;
        }
        // Mark Visited
        array[index] *= -1;

    
    }
    cout<<"Using Visited Method"<<endl;
    cout<<"Duplicate Element: "<<ans<<endl<<endl;
    return ans;
}

// Using Positioning Method
int positioningDuplicate(vector<int> &array){
    while(array[0] != array[array[0]]){
        swap(array[0], array[array[0]]);
    }
    cout<<"Using Positioning Method"<<endl;
    cout<<"Duplicate Element: "<<array[0];
    return array[0];
}

int main(){

    vector<int> array{8,5,9,7,5,6,1,4,2};

    cout<<"Array: ";
    for(int i=0; i<array.size(); i++){
        cout<<array[i]<<" ";
    }
    cout<<endl<<endl;


    findDuplicate(array);

    sortDuplicate(array);

    visitedDuplicate(array);

    positioningDuplicate(array);

    return 0;
}