#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    char v[10][10];

      for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            std::cin >> v[i][j];
        }
    }
    int left=0,top=0;
    int right=9,bottom=9;
    int c=0;
    int x=1;

    while(left<=right){

        for(int i=left;i<=right;i++){
            if(v[top][i]=='X') c+=x;
        }
        top++;

        
        for(int i=top;i<=bottom;i++){
            if(v[i][right]=='X') c+=x;
        }
        right--;

        
        for(int i=right;i>=left;i--){
            if(v[bottom][i]=='X') c+=x;
        }
        bottom--;

        
        for(int i=bottom;i>=top;i--){
            if(v[i][left]=='X') c+=x;
        }
        left++;
        x++;

        
    }
    cout<<c<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}