#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> arra{1, 2, 3, 3, 5 , 6, 8, 9, 7, 4};
    vector<int> arrb{5, 0, 3, 4, 6};
    vector<int> intersection;

    cout<<"Array 1: ";
    for(int i=0; i<arra.size(); i++){
        cout<<arra[i]<<" ";
    }
    cout<<endl;

    cout<<"Array 2: ";
    for(int i=0; i<arrb.size(); i++){
        cout<<arrb[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<arra.size(); i++){

        int element=arra[i];
        for(int j=0; j<arrb.size(); j++){

            if(arra[i]==arrb[j]){

                
                arrb[j]=INT_MIN;                  // Remove Duplicate Element
                intersection.push_back(element);
            }
        }
    }

    cout<<"Intersection: ";
    for(auto value: intersection){

        cout<<value<<" ";
    }


    return 0;
}