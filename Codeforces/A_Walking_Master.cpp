#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    
    c=c-(a);

    d=d-(b);
    if(c>d || d<0) cout<<"-1"<<"\n";
    else cout<<d+(d-c)<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}