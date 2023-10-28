#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin>>n;
    
    long long sum=0;
    int i;

    for(i=0;i<n-1;i++){
        long long x;
        cin>>x;
        sum=sum+x;
    }
    long long prev_sum=n*(n+1);
    prev_sum=prev_sum/2;
    
    cout<<(prev_sum-sum);

    return 0;
}