#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    

    int maxi=0;
    for(int i=1;i<n;i++){
        maxi=max(maxi,abs(a[i-1]-a[i]));}
        int q=a[0];
        int y=2*(x-a[n-1]);

        cout<<max(maxi,max(q,y))<<"\n";

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}