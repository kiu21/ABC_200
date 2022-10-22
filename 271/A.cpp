#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repp(i, s, n) for (int i = (s); i <= (int)(n); ++i)
using ll = long long;
using P = pair<int, int>;
using table = vector<vector<int>>;
const ll mod = 1000000007;
template <typename T>
bool chmax(T &a, const T& b) {if (a < b) {a = b;return true;}return false;}
template <typename T>
bool chmin(T &a, const T& b) {if (a > b) {a = b;return true;}return false;}

int main()
{
    int N;cin>>N;
    string ans="";
    int cnt=0;
    if(N<10){
        ans="0"+N;
        cout<<ans<<endl;
        return 0;
    }
    while(N>0){
        N-=16;
        cnt++;
    }
    if(cnt<=1) ans="0"+ans;
    else{
            if(cnt<10) ans+='0'+(cnt-1);    
            if(cnt==10) ans+='A';
            if(cnt==11) ans+='B';
            if(cnt==12) ans+='C';
            if(cnt==13) ans+='D';
            if(cnt==14) ans+='E';
            if(cnt==15) ans+='F';

            if(N<10) ans+='0'+(N+16);
            if(N==10) ans+='A';
            if(N==11) ans+='B';
            if(N==12) ans+='C';
            if(N==13) ans+='D';
            if(N==14) ans+='E';
            if(N==15) ans+='F';
    }
     cout<<ans<<endl;

    return 0;
}