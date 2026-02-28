/*The majority element is the element that appears more than ⌊n / 2⌋ times. 
 You may assume that the majority element always exists in the array. */
#include<stdio.h>
int major(int arr[],int n){
   int count=0;
   int candidate=0;
   for(int i=0; i<n; i++){
    if(count==0){
        candidate=arr[i];
    }
    if(candidate==arr[i]){
        count ++;
    }
    else{
        count --;
    }
   }
   return candidate;
}

int main(){
    int arr[]={1,2,3,1,2,3,3,4,3,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("the majority element is %d \n",major(arr,n));
    return 0;
}
