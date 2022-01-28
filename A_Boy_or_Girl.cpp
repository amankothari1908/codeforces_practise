#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vl vector<long long int>
using namespace std;

void solve(){
    string s ;
    cin>>s;
    int CHAR = 256 ;
    int check[CHAR] = {0};
    for(int i = 0 ;i< s.length() ; i++){
        check[s[i]]++;
    }

    int odd = 0 ;
    for(int i = 0 ;i<256 ; i++){
        if(check[i] >=1 ){
            odd++;
        }
    }

    if(odd % 2 != 0 ){
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }
     
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