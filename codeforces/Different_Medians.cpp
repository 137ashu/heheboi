#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin >> n;
        int mid;
        double a = 1;
        double b = n;
        mid = ceil((a+b)/2);
        vector<int> v;
        v.push_back(mid);
        int l = mid-1;
        int r = mid+1;
        while(l>0){
            v.push_back(l);
            if(r<=n) v.push_back(r);
            l--;
            r++;
        }
        for(int in: v){
            cout << in << " ";
        }
        cout << endl;
        


    }
    return 0;
}