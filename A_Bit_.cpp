#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vl vector<long long int>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int res = 0 ;
    while(n--){
        string s ;
        cin>>s;
        if(s == "X++"){
            res++;
        }
        else if(s == "X--"){
            res--;
        }
        else if(s == "++X"){
            ++res;
        }
        else if(s == "--X"){
            --res;
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