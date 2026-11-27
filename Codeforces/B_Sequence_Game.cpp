#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vector<int> a(n),b;
    for(auto &v:a) cin>>v;

    b.push_back(a[0]);

    for(int i=1;i<n;i++){

        if(a[i]>=a[i-1]) b.push_back(a[i]);

        else {
                b.push_back(a[i]);
                b.push_back(a[i]);
        }

    }
    cout<<b.size()<<'\n';
    for(auto &it:b){
        cout<<it<<' ';
    }
    cout<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}