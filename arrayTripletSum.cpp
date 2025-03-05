#include<bits/stdc++.h>

using namespace std;

int main(){

    int num;
    cout<<"Enter the Size of the Array: ";
    cin>>num;

    vector<int> array(num);

    cout<<"Enter the Array Elements: "<<endl;

    for(int i=0; i<array.size(); i++){
        cin>>array[i];
    }

    cout<<"Printing the Array: ";
    for(int i=0; i<array.size(); i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;


    // Printing the Triplet
    cout<<"Printing the Triplet: "<<endl;
    for(int i=0; i<array.size(); i++){
        for(int j=i+1; j<array.size(); j++){
            for(int k=j+1; k<array.size(); k++){
                cout<<"("<<array[i]<<", "<<array[j]<<", "<<array[k]<<")";
                cout<<endl;
            }
            
        }
    }

    int sum;
    cout<<"Enter the required Sum: ";
    cin>>sum;

    cout<<"Printing the Triplet Whose Sum = "<<sum<<endl;
    for(int i=0; i<array.size(); i++){
        for(int j=i+1; j<array.size(); j++){
            for(int k=0; k<array.size(); k++){
                if((array[i]+array[j]+array[k])==sum){
                    cout<<"("<<array[i]<<", "<<array[j]<<", "<<array[k]<<")";
                    cout<<endl;
                }
            }
        }
    }



    return 0;
}