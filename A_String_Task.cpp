#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vl vector<long long int>
using namespace std;

void solve(){
    string s ,res;
    cin>>s;
    int n = s.length();
    vi v = {'a','e','i','o','u','A','E','I','O','U'};
    for(int i = 0 ;i<n ;i++){
        auto x = find(v.begin(),v.end(),s[i]);
        if(x == v.end()){
            res += ".";
            res += (char) tolower(s[i]);
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