#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repp(i, s, n) for (int i = (s); i <= (int)(n); ++i)
using ll = long long;
using P = pair<int, int>;
const ll mod = 1000000007;
template <typename T>
bool chmax(T &a, const T& b) {if (a < b) {a = b;return true;}return false;}
template <typename T>
bool chmin(T &a, const T& b) {if (a > b) {a = b;return true;}return false;}

int main()
{
  int N; cin>>N;
  string T; cin>>T;

  int x=0,y=0;
  int cnt=0;

  rep(i,T.size()){
    if(T[i]=='R') cnt++;
    if(T[i]=='S'){
      if(cnt%4==0) x++;
      else if(cnt%4==1) y--;
      else if(cnt%4==2) x--;
      else if(cnt%4==3) y++;
    }
  }
  cout<<x<<" "<<y<<endl;
  
  return 0;
}