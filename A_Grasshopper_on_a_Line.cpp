#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k;
    cin>>n>>k;
     if(n%k==0) {
             cout<<"2\n"<<n-1<<' '<<'1'<<"\n";
        }

        else  cout<<"1\n"<<n<<"\n";
  
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}