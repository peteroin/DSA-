#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int array[], int size){
    for(int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int partition(int array[], int low, int high){

        int pivot=array[low];
        int start=low+1;
        int end=high;

        while(start<=end){
            while(start<=high && array[start]<=pivot){
                start++;
            }
            while(end>=low && array[end]>pivot){
                end--;
            }
            if(start<end){
                swap(&array[start], &array[end]);
            }
        }
        swap(&array[low], &array[end]);
        return end;

}

void quickSort(int array[], int low, int high){
    if(low<high){
        int pi=partition(array, low, high);

        quickSort(array, low, pi-1);
        quickSort(array, pi+1, high);

    }

    
}

int main(){

    int size;
    printf("Enter the Size of the Array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter the Elements of the Array: ");
    for(int i=0; i<size; i++){
        scanf("%d", &array[i]);
    }

    printf("Unsorted Array: ");
    printArray(array, size);

    quickSort(array, 0, size-1);
    printf("Sorted Array: ");
    printArray(array, size);
}



