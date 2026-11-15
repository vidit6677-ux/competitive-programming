#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &v:a) cin>>v;

    int x=INT_MAX;
    for(int i=0;i<n;i++){
      x=min(x,abs(a[i]));
    }
   
    cout<<abs(x)<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    
    while (t--) solve();
    return 0;
}