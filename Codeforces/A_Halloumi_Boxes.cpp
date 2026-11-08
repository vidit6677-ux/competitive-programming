#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
   int n,k;
   cin>>n>>k;
   vector<int> a(n);
   for(auto &v:a) cin>>v;


   if(n==k) cout<<"YES\n";
   if(k>=2 ) cout<<"YES\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}