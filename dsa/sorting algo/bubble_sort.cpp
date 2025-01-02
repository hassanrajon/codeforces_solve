#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void bubble_sort(int arr[],int n){
    // swap adjacent elements if the first one is bigger than second
    for(int i=0;i<(n-1);i++){
        for(int j=0;j<(n-i-1);j++){
            if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
        }
    }
}
int main(){
    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    bubble_sort(arr,10);
    for(int i=0;i<10;i++)cout<<arr[i]<<" ";
}