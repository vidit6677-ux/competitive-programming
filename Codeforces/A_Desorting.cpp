#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &v:a) cin>>v;
    int mini=INT_MAX;


    if(is_sorted(all(a))==false) cout<<"0\n";
    else{
        for(int i=1;i<n;i++){
            mini=min(mini,a[i]-a[i-1]);
        }
        if(mini==0) cout<<"1\n";
        else {
           
            cout<<(mini/2)+1<<'\n';
          
        }
    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}