#include<cstdio>
#include<iostream>
using namespace std;

int main() {
  #ifndef ONLINE_JUDGE
    freopen("input/uva11059.in", "r", stdin);
  #endif
  int S[20], kase = 0, n;
  while(cin >> n && n) {
    for(int i = 0; i < n; i++) cin >> S[i];
    long long ans = 0;
    for(int i = 0; i < n; i++) {
      long long v = 1;
      for(int j = i; j < n; j++) {
        v *= S[j];
        if(v > ans) ans = v;
      }
    }
    cout << "Case #" << ++kase << ": The maximum product is " << ans << ".\n\n";
  }
  return 0;
}