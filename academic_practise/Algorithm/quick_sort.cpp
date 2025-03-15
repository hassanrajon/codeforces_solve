#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int part(int arr[],int low,int high){
  int pivot = arr[low];
  int i=low;
  int j=high;
  while(i<j){
    while(arr[i]<=pivot && i<=high)i++;
    while(arr[j]>=pivot and j>=low+1)j--;
    if(i<j)swap(arr[j],arr[i]);
  }
  swap(arr[j],arr[low]);
  return j; 
}
void quick_sort(int arr[],int low,int high){
    if(low<high){
        int pivot = part(arr,low,high);
        quick_sort(arr,low,pivot-1);
        quick_sort(arr,pivot+1,high);
    }
}

int main(){
    int arr[100]={10,9,8,7,6,5,4,3,2,1,10,9,8,7,6,5,4,3,2,1,10,9,8,7,6,5,4,3,2,1,10,9,8,7,6,5,4,3,2,1,10,9,8,7,6,5,4,3,2,1,10,9,8,7,6,5,4,3,2,1,10,9,8,7,6,5,4,3,2,1,10,9,8,7,6,5,4,3,2,1,10,9,8,7,6,5,4,3,2,1,10,9,8,7,6,5,4,3,2,1};
    quick_sort(arr,0,99);
    for(int i=0;i<100;i++)cout<<arr[i]<<" ";
}