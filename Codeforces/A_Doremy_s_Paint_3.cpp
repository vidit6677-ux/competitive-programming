#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &v:a) cin>>v;

    map<int,int> m;
    for(int x:a) m[x]++;
    int c=m.size();


   int f1=m.begin()->second;
   int f2=m.rbegin()->second;
    if(c>2) cout<<"No\n";
    else if(n%2==0 && c==2 && f1-f2==0) cout<<"Yes\n";
    else if(n%2!=0 && c==2 && abs(f1-f2)<=1) cout<<"Yes\n"; 
    else if(c==1) cout<<"Yes\n";
    else cout<<"No\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}