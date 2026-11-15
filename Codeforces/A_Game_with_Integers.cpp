#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    if((n-1)%3==0 || (n+1)%3==0){
        cout<<"First\n";
    }
    else cout<<"Second\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
   cin>>t;
    while (t--) solve();
    return 0;
}