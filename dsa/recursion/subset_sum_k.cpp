#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int count_subset(int arr[],int ind,int n,int sum,int k){
    if(ind==n){
        if(sum==k)return 1;
        else return 0;
    } 
    sum+=arr[ind];
    int l = count_subset(arr,ind+1,n,sum,k);
    sum-=arr[ind];
    int r = count_subset(arr,ind+1,n,sum,k);
    return l +r;
}
// print only one subset sum equals to k
bool print_one(int arr[],vector<int>&a,int ind,int n,int sum,int k){
    if(ind==n){
        if(sum==k){
            for(auto it:a)cout<<it<<" ";
            return true;
        }
        return false;
    }
    a.push_back(arr[ind]);
    sum+=arr[ind];
    if(print_one(arr,a,ind+1,n,sum,k)){
        return true;
    }
    a.pop_back();
    sum-=arr[ind];
    if(print_one(arr,a,ind+1,n,sum,k)){
        return true;
    }
    return false;
}
// printing all subset sum equals to k
void print_subset(int arr[], vector<int> &a, int ind, int n, int sum, int k)
{
    if (ind == n)
    {
        if (sum == k)
        {
            for (auto it : a)
                cout << it << " ";
                 cout << endl;
        }
        return;
    }
    a.push_back(arr[ind]);
    sum+=arr[ind];
    print_subset(arr,a,ind+1,n,sum,k);
    a.pop_back();
    sum-=arr[ind];
    print_subset(arr,a,ind+1,n,sum,k);
}
int main()
{
    int arr[3] = {1, 2, 1};
    vector<int>a;
    cout<<count_subset(arr,0,3,0,2);
}