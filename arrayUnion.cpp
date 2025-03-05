#include<bits/stdc++.h>

using namespace std;

int main(){


    vector<int> arra{5, 6, 8, 9, 9, 4, 3, 2, 1, 7};
    vector<int> arrb{1, 5, 9, 8, 7, 5, 4, 3, 0, 2};
    vector<int> arrunion;


    cout<<"First Array: ";

    for(int i=0; i<arra.size(); i++){

        cout<<arra[i]<<" ";
    }
    cout<<endl;


    cout<<"Second Array: ";

    for(int i=0; i<arrb.size(); i++){

        cout<<arrb[i]<<" ";

    }
    cout<<endl;

    cout<<"Union of Array 1 and Array 2: "<<endl;

    for(int i=0; i<arra.size(); i++){
        arrunion.push_back(arra[i]);
    }

    for(int i=0; i<arrb.size(); i++){

        arrunion.push_back(arrb[i]);
    }

    for(int i=0; i<arrunion.size(); i++){

        cout<<arrunion[i]<<" ";
    }

    return 0;

}