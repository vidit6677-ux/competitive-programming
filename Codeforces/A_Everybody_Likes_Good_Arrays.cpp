#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &v:a) cin>>v;

    int c=0;

    for(int i=0;i<n-1;i++){
        if(a[i]%2==0 && a[i+1]%2==0 ||   a[i]%2!=0 && a[i+1]%2!=0){
            c++;
        }
    }
    cout<<c<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}