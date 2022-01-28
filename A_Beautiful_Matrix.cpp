#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vl vector<long long int>
using namespace std;

void solve(){
    int n = 5 ;
    int A[n][n];
    int  y = 0 , z = 0 ;
    for(int i = 0 ;i<n ; i++){
        for(int j =0 ;j<n ; j++){
            cin>>A[i][j];
            if(A[i][j] == 1){
                y = i ;
                z = j ;
            }
        }
    }  
    int res = abs(y-2)+abs(z-2);
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