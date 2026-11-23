#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &v:a) cin>>v;

    for(int i=1;i<n;i++){
        a[0]^=a[i];
    }
    if(n%2==0 && a[0]!=0) cout<<"-1\n";
    else cout<<a[0]<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}