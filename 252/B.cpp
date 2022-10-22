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
  int K,N;cin>>N>>K;
  vector<int> A(N),B(K);
  rep(i,N) cin>>A[i];
  rep(i,K) cin>>B[i];
  int m=0;
  rep(i,N) chmax(m,A[i]);
  vector<int> ms;
  rep(i,N){
    if(A[i]==m)
    ms.push_back(i+1);
  }
  rep(i,K){
    for(int a:ms){
      if(B[i]==a){
        cout<<"Yes"<<endl;
        return 0;
      } 
    }
  }
  cout<<"No"<<endl;
  return 0;
}