#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vl vector<long long int>
using namespace std;

void solve(){
    string s1,s2;
    cin>>s1>>s2;
    int flag = 0 , z = 0 ;
    for(int i = 0 ; i<s1.length() ; i++){
        char c1 = (char) tolower(s1[i]);
        char c2 = (char) tolower(s2[i]);
        if(c1!=c2){
            flag = 1;
            if(c1<c2){
                cout<<-1<<endl;
                return;
            }
            else{
                cout<<1<<endl;
                return;
            }
        }
    }
    if(flag == 0 ){
        cout<<0<<endl;
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