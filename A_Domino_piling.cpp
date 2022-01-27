#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vl vector<long long int>
using namespace std;

void solve(){
    int n , m ;
    cin>>n>>m ;
    int res = 0 ;
    if(n%2 == 0){
        res += (n/2)*m;
    }
    else{
        res += (n/2)*m;
        res += (m/2);
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