#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &v:a) cin>>v;
    vector<int> b,c;
    int cnt=1;

    sort(all(a));
    b.push_back(a[0]);
    for(int i=1;i<n;i++){
        if(a[i]==b[0]) b.push_back(a[i]);
        cnt++;
    }

    for(int i=0;i<n;i++){
        if(a[i]!=b[0]) c.push_back(a[i]);
    }


    if(c.size()==0){
        cout<<-1<<'\n';
    }
    else{

        cout << b.size() << " " << c.size() << '\n';
    for (auto x : b) cout << x << " ";
cout << endl;



for (auto x : c) cout << x << " ";
cout << endl;
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