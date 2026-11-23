#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &v:a) cin>>v;
    int g=0;
    int c=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            g=gcd(a[i],a[j]);
            if(g>=2) {
                    
                     c=1;
            }
        }
    }
    if(c==0) cout<<"YES\n";
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