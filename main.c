
#include <stdio.h>
#include <stdbool.h>

void troca(int* a, int* b){
    int temp = a;
    a = b;
    b = temp;
}

void bubble( int arr[], tamanhoarr){
    int i, j;
    bool snap;
    
    for(i = 0; i < tamanhoarr - 1; i++){
        snap = false;
        for(j = 0; j < tamanhoarr - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                troca(arr[j], arr[j + 1])
            }
        }
        
    }
    
}
int main(){
    printf("Hello World");

    return 0;
}
