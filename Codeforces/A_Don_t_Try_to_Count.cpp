#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,m;
    cin>>n>>m;
    string x,s;
    cin>>x>>s;

  
    
    int c=0;
    int j=0;
    int r=6;

    while(r--){
        if(x.find(s)!=-1) {
            j=1;
            break;
         
        }
        else {
            c++;
            x+=x;
        }
    }
    if(c>=0 && j==1) cout<<c<<"\n";
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