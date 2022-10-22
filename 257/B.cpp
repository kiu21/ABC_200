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
  int N,K,Q;cin>>N>>K>>Q;
  vector<int> A(N);
  vector<int> L(Q);
  rep(i,K) cin>>A[i];
  rep(i,Q) cin>>L[i];

  vector<bool> ok(N+1,false);
  rep(i,N) ok[A[i]]=true;

  rep(i,Q){
    if(A[L[i]-1]!=N && ok[A[L[i]-1]+1]!=true){
      ok[A[L[i]-1]+1]=true;
      ok[A[L[i]-1]]=false;
      A[L[i]-1]++;
    }
  }
  rep(i,K) cout<<A[i]<<" ";
  cout<<endl;

  return 0;
}