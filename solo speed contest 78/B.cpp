#include <bits/stdc++.h>
using namespace std;

// #define int long long int
#define rep(i,a,b) for(int i = a ; i < b ; i++)

void solve(int t){
     int mx = -1 , win = 0;
     rep(i,0,5){
          int sm = 0;
          rep(j,0,4){
               int a;
               cin >> a;
               sm += a;
          }

          if(sm > mx) mx = sm , win = i + 1;
     }

     cout << win << ' ' << mx << "\n";
}

int32_t main()
{
     freopen("in.txt","r", stdin);

     int t = 1;
    // cin >> t;

     rep(i,1,t+1){
          solve(i);
     }
     return 0;
}

