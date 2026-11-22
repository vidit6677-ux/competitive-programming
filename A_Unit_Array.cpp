#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &v:a) cin>>v;

    int s=0,m=1;
    for(int i=0;i<n;i++){
        s+=a[i];
     
    }
    


      for(int i=0;i<n;i++){
       
        m*=a[i];
    }

    if(s<0 && m<0) cout<<s+1<<"\n";
    else if(s<0 && m>0) cout<<s<<"\n";
    else if(s>0 && m<0) cout<<"1\n";
    else cout<<0<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}