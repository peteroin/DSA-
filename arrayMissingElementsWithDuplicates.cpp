#include<bits/stdc++.h>

using namespace std;

void findMissing(int *array1, int size1){

    // Visiting Method
    for(int i=0; i<size1; i++){
        int index = abs(array1[i]);
        if(array1[index-1] > 0){
            array1[index-1] *= -1;
        }
    }

    // All positive indexes are missing
    cout<<"Using Visiting Method"<<endl;
    cout<<"Missing Element: ";
    for(int i=0; i<size1; i++){
        if(array1[i] > 0){
            cout<<i+1<<" ";
        }
    }
    cout<<endl<<endl;
}


// Sorting and Swapping Method
void sortAndSwap(int *array2, int size2){
    int i=0;
    int index=array2[i]-1;
    if(array2[i] != array2[index]){
        swap(array2[i], array2[index]);
    }
    else{
        ++i;
    }

    cout<<"Using Sorting And Swapping"<<endl;
    cout<<"Missing Element: ";
    for(int i=0; i<size2; i++){
        if(array2[i] != i+1){
            cout<<i+1<<" ";
        }
    }
    cout<<endl;


}

int main(){

    int array1[]={1,3,5,3,4};
    int size1;
    size1=sizeof(array1)/sizeof(int);

    int array2[]={5,3,3,3,1};
    int size2;
    size2=sizeof(array2)/sizeof(int);

    findMissing(array1, size1);
    sortAndSwap(array2, size2);

    return 0;
}