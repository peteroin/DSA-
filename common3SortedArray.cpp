#include<bits/stdc++.h>

using namespace std;

vector<int> commonElements(int *array1, int *array2, int *array3, int size1, int size2, int size3){
    
    vector<int> ans;
    set<int> st;                  // If Duplicate Elements are present then only Unique Elements are stored 
    int i,j,k;
    i=j=k=0;

    while(i<size1 && j<size2 && k<size3){

        if(array1[i]==array2[j] && array2[j]==array3[k]){

            st.insert(array1[i]);
            i++,j++,k++;
        }
        else if(array1[i]<array2[j]){
            i++;
        }
        else if(array2[j]<array3[k]){
            j++;
        }
        else{
            k++;
        }
    }

    for(auto i : st){
        ans.push_back(i);
    }

    return ans;
}

int main(){

    int array1[]={1,5,10,20,40,80};
    int array2[]={6,7,20,80,100};
    int array3[]={3,4,15,20,30,70,80,120};

    int size1=sizeof(array1)/sizeof(int);
    int size2=sizeof(array2)/sizeof(int);
    int size3=sizeof(array3)/sizeof(int);

    vector<int> ans = commonElements(array1, array2, array3, size1, size2, size3);
    cout<<"Common Elements: ";
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }



}