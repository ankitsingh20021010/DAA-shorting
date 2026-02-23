// Online C compiler to run C program online
#include <stdio.h>
void swap(int *a, int*b){
    int c=*a;
    *a=*b;
    *b=c;
}
void print(int arr[],int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
//Bubble short
void bubbleshort(int arr[], int n){
    for(int i=0; i<n-1; i++){
     for(int j=0; j<n-i-1; j++){
         if(arr[j]>arr[j+1]){
             swap(&arr[j],&arr[j+1]);
         }
     }
 }
}
//
void selectionshort(int arr[],int n){
    for(int i=0; i<n+1; i++){
        int smallestindex= i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[smallestindex]){
                swap(&arr[j],&arr[smallestindex]);
            }
        }
    }
}
int main() {
 int arr[]={4,1,5,2,3};
 int n=sizeof(arr)/sizeof(arr[0]);
     print(arr,n);
     printf("\n");
     selectionshort(arr,n);
 
    print(arr,n);
    
    

    return 0;
}
