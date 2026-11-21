#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b) cout<<"First\n";
    else if(a==b && c%2!=0) cout<<"First\n";
    else cout<<"Second\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}