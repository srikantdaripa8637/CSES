#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin>>n;
    int i=1,j=2;

    vector<long long>ans;

    while(j<=n){
        ans.push_back(j);
        j+=2;
    }

    while(i<=n){
        ans.push_back(i);
        i+=2;
    }
    

    if(n==1){
        cout<<1;
    }
    else if(n<=3 && n!=1){
        cout<<"NO SOLUTION";
    }
    else{
        for(i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
    }

    
    return 0;
}