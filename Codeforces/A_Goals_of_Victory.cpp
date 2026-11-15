#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
   vector< int> a(n-1);
    for(auto &v:a) cin>>v;

    int sum=0;
    for(auto &v:a) sum+=v;

    cout<<-(sum)<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}