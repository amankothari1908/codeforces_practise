#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vl vector<long long int>
using namespace std;

void solve(){
    int a , b ;
    cin>>a>>b;
    int count = 0 ;
    while(a<=b){
        a = 3*a;
        b = 2*b;
        count++;
        // cout<<a<<" "<<b<<" "<<count<<endl;
    } 
    cout<<count<<endl;
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