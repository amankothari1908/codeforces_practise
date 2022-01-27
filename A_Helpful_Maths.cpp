#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vl vector<long long int>
using namespace std;

void solve(){
    string s;
    cin>>s;
    string res;
    int one =0 , two = 0 ,three = 0 ;
    int op = 0 ;
    for(int i =0 ;i<s.length() ; i++){
        if(s[i] == '3'){
            three++;
        }
        else if(s[i] == '1'){
            one++;
        }
        else if(s[i] == '2'){
            two++;
        }
        else{
            op++;
        }
        // cout<<i<<" "<<s[i]<<" "<<one<<" "<<two<<" "<<three<<" "<<op<<endl;
    }
    while(one--){
        res += '1';
        if(op){
            res += '+';
            op--;
        }
    }

    while(two--){
        res += '2';
        if(op){
            res += '+';
            op--;
        }
    }
    while(three--){
        res += '3';
        if(op){
            res += '+';
            op--;
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