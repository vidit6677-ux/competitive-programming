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
    for(int i=0;i<n;i++){
        if(a[i]==2) c++;
    }


   

    int g=0;
    int m=c;

    for(int i=0;i<n;i++){
        if(a[i]==2) c--;
        if(c==m/2) { 
            g=i;
            break;
    }}

     if(m%2!=0) cout<<"-1\n";
     else if(c==0) cout<<"1\n";
    else cout<<g+1<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}