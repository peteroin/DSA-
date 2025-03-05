#include<bits/stdc++.h>
#include<vector>

using namespace std;

int findUnique(vector<int> array){

    int ans=0;

    for(int i=0; i<array.size(); i++){
        ans = ans ^ array[i];
    }

    return ans;
}

int main(){

    int num;

    cout<<"Enter the Size of the array: ";
    cin>>num;

    vector<int> array(num);

    cout<<"Enter the Elements: ";

    for(int i=0; i<array.size(); i++){

        cin>>array[i];
    }

    int uniqueElement = findUnique(array);

    cout<<"Unique Element: "<<uniqueElement;

    return 0;
}