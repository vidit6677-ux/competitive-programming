#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0,d=0;
    int maxi=-10;

    for(int i=0;i<n;i++){
        if(s[i]=='.') {c++; d++;
        maxi=max(maxi,c);}
        else c=0;
    }

    if(maxi>=3) cout<<"2\n";
    else cout<<d<<"\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}