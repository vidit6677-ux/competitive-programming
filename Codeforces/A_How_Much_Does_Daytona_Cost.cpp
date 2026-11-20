#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto &v:a) cin>>v;
    int c=0;

    for(int i=0;i<n;i++){
        if(a[i]==k) {
            c=1;
        }


    }
    if(c==1) cout<<"YES\n";
    else cout<<"NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}