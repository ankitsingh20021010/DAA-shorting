// Online C compiler to run C program online
#include <stdio.h>
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}
void swap(int *a, int *b){
    int c=*a;
    *a=*b;
    *b=c;
}
//selection sort
void Insertion (int arr[], int n){
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

int binarysearch(int arr[], int n, int f){
    int low = 0;
    int high = n - 1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] == f){
            return 1;   // found
        }
        else if(arr[mid] < f){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return -1;   // not found
}
int main() {
    int arr[]={4,1,5,3,2,22,12,21,29};
    int n= sizeof(arr)/sizeof(arr[0]);
    Insertion(arr,n);
    int f=22;
    int result=binarysearch(arr,n,f);
    if(result==1){
        printf("%d is find in array\n",f);
    }
    if(result ==-1){
        printf("%d is not found in array \n",f);
    }
    return 0;
}
