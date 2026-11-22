#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    string a;
    cin>>a;

    int i=0,j=n-1;
    while(i<j){
        if(a[i]==a[j]) break;
        else {
            i++;
            j--;
        }
    }
    cout<<j-i+1<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}