#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool Triplets(int *arr,int n, int sum){
    int l,r;
    // sort(arr, arr+n);
    for(int i=0;i<n-2;i++){
        l=i+1;
        r=n-1;
        while(l<r){
            if(arr[i]+arr[l]+arr[r]==sum){
                cout<<arr[i]<<","<<arr[l]<<","<<arr[r];
                return true;
            }else if(arr[i]+arr[l]+arr[r]<sum){
                l++;
            }else{
                r--;
            }
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    sort(arr,arr+n);
    Triplets(arr,n,sum);
    return 0;

}
