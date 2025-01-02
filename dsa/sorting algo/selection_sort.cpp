#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void selection_sort(int arr[],int n){
    // select the minimum value and swap
    for(int i=0;i<(n-1);i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini])
            mini = j;
        }
        swap(arr[i],arr[mini]);
    }
}
int main(){
    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    selection_sort(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}