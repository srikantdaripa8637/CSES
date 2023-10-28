#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;

    long long arr[n];
    long long i;
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    long long count=0;
    for(i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            count+=abs(arr[i]-arr[i-1]);
            arr[i]=arr[i-1];
        }
    }
    cout<<count;
    return 0;
}
