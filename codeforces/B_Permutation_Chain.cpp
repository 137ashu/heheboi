#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin >> n;
        if(n==1){
            cout << 1 << endl;
            cout << 1 << endl;
            continue;
        }
        cout << n<<endl;
        vector<int> v;
        for(int i = 1 ;i <= n; i++){
            v.push_back(i);
        }
        for(int i = n-1; i>=0; i--){
            for(int x : v){
                cout << x << " ";
            }
            cout << endl;
            if(i!=0)
                swap(v[i], v[i-1]);
        }
    }

    return 0;
}