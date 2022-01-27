#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    int n ;
    cin>>n;
    int k ; 
    cin>>k;
    int a[n];
    for(int i = 0 ; i<n ; i++){
        cin>>a[i];
    }
    int count = 0 ; 
    for(int i = 0 ; i<n ; i++){
        if(a[i]>=a[k-1] && a[i]>0){
            count++;
        }
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