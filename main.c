
#include <stdio.h>
#include <stdbool.h>

void troca(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort( int arr[], int tamanhoarr){
    int i, j;
    bool snap;
    
    for(i = 0; i < tamanhoarr - 1; i++){
        snap = false;
        for(j = 0; j < tamanhoarr - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                troca(&arr[j], &arr[j + 1]);
                snap = true;
            }
        }
        if (snap == false){
            break;
        }
        
    }
    
}
void printArray(int arr[], int size){
    int i;
    for(i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[] = { 23, 34, 15, 80, 12, 11, 49 };
    int tamanhoarr = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, tamanhoarr);
    printf("Bubble array: \n");
    printArray(arr, tamanhoarr);
    return 0;
}
