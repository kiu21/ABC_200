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
    string S;
    cin>>S;
    if(S[0]==S[1]&&S[1]==S[2]) cout<<-1<<endl;
    else{
        if(S[0]==S[1]){
            cout<<S[2]<<endl;
            return 0;
        } 
        if(S[1]==S[2]){
         cout<<S[0]<<endl;
         return 0;
        }
        if(S[0]==S[2]){
            cout<<S[1]<<endl;
            return 0;
        }
        cout<<S[0]<<endl;
    }
  return 0;
}