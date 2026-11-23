#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    int w=0;
    for(int i=0;i<=n;i++){
        int c=i;
         int q=0;
        while(c>0){
           
           int x=c%10;
            if(x!=0) q++;
            c=c/10;
        }
        if(q==1) w++;
        
    }
    cout<<w<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}