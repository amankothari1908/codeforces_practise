#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vl vector<long long int>
using namespace std;

void solve(){
    int n ; 
    cin>>n;
    string s;
    cin>>s;
    int res=0 ;
    for(int i =1 ;i<n ; i++){
        if(s[i]==s[i-1]){
            res++;
        }
    } 
    cout<<res<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Test = 1 ;
    // cin>>Test;
    while(Test--){
        solve();
    }
    return 0;
}