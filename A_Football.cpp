#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vl vector<long long int>
using namespace std;

void solve(){
    string s ;
    cin>>s;
    int n = s.length();
    if(n<7){
        cout<<"NO"<<endl;
        return;
    }
    int count= 1;
    for(int i = 1 ; i<n ; i++){
        // cout<<i<<" "<<s[i]<<" "<<s[i-1]<<" "<<count<<endl;
        if(s[i]==s[i-1]){
            count++;
        }
        else if(s[i]!=s[i-1]){
            count = 1 ;
        }
        if(count == 7){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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