#include<bits/stdc++.h>

using namespace std;



int main(){


    vector<int> arra{5, 6, 8, 9, 9, 4, 3, 2, 1, 7};
    vector<int> arrb{1, 5, 9, 8, 7, 5, 4, 3, 0, 2};
    vector<int> arrUnion;


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

    // Delete Duplicate/Common Element of Array 1
    for(int i=0; i<arra.size(); i++){

        for(int j=i+1; j<arra.size(); j++){

            if(arra[i]==arra[j]){
                arra[j]=INT_MIN;
            }
        }
    }

    // Delete Duplicate/Common Element of Array 2
    for(int i=0; i<arrb.size(); i++){

        for(int j=i+1; j<arrb.size(); j++){

            if(arrb[i]==arrb[j]){
                arrb[j]=INT_MIN;
            }
        }
    }

    cout<<"Union of Array 1 and Array 2: "<<endl;

    for(int i=0; i<arra.size(); i++){

        if(arra[i]!=INT_MIN){
            arrUnion.push_back(arra[i]);
        }

    }

    for(int i=0; i<arrb.size(); i++){

        if(arrb[i]!= INT_MIN)
        {
            arrUnion.push_back(arrb[i]);
        }

    }


    // Delete Duplicate/Common Element from Union Array
    for(int i=0; i<arrUnion.size(); i++){

        for(int j=i+1; j<arrUnion.size(); j++){

            if(arrUnion[i] == arrUnion[j]){
                arrUnion[j]=INT_MIN;
            }
        }
    }

    // Answer Array of UNION
    vector<int> ansArrUnion;
    for(int i=0; i<arrUnion.size(); i++){

        if(arrUnion[i] != INT_MIN){

            ansArrUnion.push_back(arrUnion[i]);
        }
    }




    // Printing Union
    for(int i=0; i<ansArrUnion.size(); i++){

            cout<<ansArrUnion[i]<<" ";


    }

    return 0;

}