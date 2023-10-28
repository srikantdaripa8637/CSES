#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin>>str;
    long long n;
    n=str.length();
    int i,j;
    int maxi=INT_MIN;
    

    for(i=0;i<n;i++){
        unordered_map<char,int>mpp;
        for(j=i;j<n;j++){
            
            mpp[str[j]]++;
            int flag=0;
            for(auto it:mpp){
                if(it.second>1){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                int len=mpp.size();
                maxi=max(maxi,len);
            }
        }
    }
    cout<<maxi;

    return 0;
}