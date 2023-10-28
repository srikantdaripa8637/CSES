#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int solve(int ind,int n, int x,vector<int>coin,vector<vector<int>>dp){
    if(ind==0){
        if(x%coin[0]==0){
            return x/coin[0];
        }
        else{
            return 1e9;
        }
    }
    if(dp[ind][x]!=-1){
        return dp[ind][x];
    }
    
    int notPick=solve(ind-1,n,x,coin,dp);
    int pick=INT_MAX;
    if(coin[ind-1]<=x){
        pick=1+solve(ind,n,x-coin[ind-1],coin,dp);
    }
    return min(pick,notPick);
}
int main(){
    int n,x;
    cin>>n>>x;
    vector<int>coin(n);
    int i;
    for(i=0;i<n;i++){
        cin>>coin[i];
    }
    vector<vector<int>>dp(n+1,vector<int>(x+1,-1));
    int result=solve(n,n,x,coin,dp);
    if(result>=1e9){
        cout<<"-1";
    }
    cout<<result;
    return 0;
}