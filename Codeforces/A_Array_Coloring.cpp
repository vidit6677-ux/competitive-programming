#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &v:a) cin>>v;

    int od=0,ev=0;
    int os=0,oe=0;

    for(int i=0;i<n;i++){
        if(a[i]%2==0) {
            ev++;
            oe+=a[i];
        }
        else {
            od++;
            os+=a[i];
        }
    }
    if(os%2==0 ) cout<<"YES\n";
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