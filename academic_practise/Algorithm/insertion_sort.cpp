#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void insertion_sort(int arr[],int n){
    //  
    for(int i=0;i<n;i++){
        int temp=arr[i],j=i-1;
        while(j>=0 and arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int main(){
    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    insertion_sort(arr,10);
    for(int i=0;i<10;i++)cout<<arr[i]<<" ";
}