#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &v:a) cin>>v;

    int s=0,m=0;
    for(int i=0;i<n;i++){
        s+=a[i];
     
    }
    


      for(int i=0;i<n;i++){
       
       if(a[i]==-1) m++;
    }
    int c=0;
   while(s<0){
    c++;
    s+=2;
    m--;
   }
   
   if(m%2==0) cout<<c<<'\n';
   else  cout<<c+1<<'\n';
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}