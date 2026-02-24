// Online C compiler to run C program online
//Big of N square [O(n^2)]
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

//sortig
void insertionsorting(int arr[],int n){
    for(int i=1; i<n; i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
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
