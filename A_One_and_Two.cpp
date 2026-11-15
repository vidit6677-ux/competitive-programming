#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &v:a) cin>>v;

ll p = accumulate(a.begin(), a.end(), 1LL, multiplies<ll>());
int sum=1;
int c=0;

    for(int i=0;i<n;i++){
        sum=sum*a[i];
        p=p-a[i];
        if(sum==p) c=i;
       
        
    }
     if(c!=0) cout<<c<<"\n";
        else cout<<"-1\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}