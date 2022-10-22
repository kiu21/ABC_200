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
  vector<vector<char>> A(N,vector<char>(N));
  rep(i,N)rep(j,N) cin>>A[i][j];

  bool flag=true;
  rep(i,N){
    rep(j,N){
      if(i>j) continue;
      if(A[i][j]=='W'){
        if(A[j][i]!='L') flag=false;
      }
      if(A[i][j]=='L'){
        if(A[j][i]!='W') flag=false;
      }
      if(A[i][j]=='D'){
        if(A[j][i]!='D') flag=false;
      }
    }
  }
  if(flag) cout<<"correct"<<endl;
  else cout<<"incorrect"<<endl;
  return 0;
}