#include <bits/stdc++.h>
using namespace std;

// #define int long long int
#define rep(i,a,b)      for(int i = a; i <  b;++i)
#define rev(i,a,b)      for(int i = a; i >= b;--i)

void FastIO()
{

    #ifndef ONLINE_JUDGE
     freopen("in.txt","r", stdin);
   //  freopen("out.txt", "w", stdout);
    // freopen("Error.txt", "w", stderr);

    #endif // ONLINE_JUDGE      
} 

bool cmp(int a,int b){
     return b > a;
}
void  solve(int t)
{     
     string a,b; 
     cin >> a >> b;

     int cntA[26] = {} ,cntB[26] = {};

     rep(i,0,a.size()) cntA[a[i] - 'a']++;
     rep(i,0,b.size()) cntB[b[i] - 'a']++;

     sort(cntA,cntA+26,cmp);
     sort(cntB,cntB+26,cmp);

     bool ok = 1;

     rep(i,0,26) 
          if(cntB[i] != cntA[i]) ok = 0;

     cout << (ok ? "Yes\n":"No\n");
}
      
int32_t main()
{
     FastIO() ;

     int test_case = 1;
   //  cin >> test_case;

     rep(i,1,test_case+1){
          solve(i);
     }
     return 0;
}

