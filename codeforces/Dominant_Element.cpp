#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin >> n;
        unordered_map <int, int> mp;
        for(int i = 0; i< n; i++){
            int ele;
            cin >> ele;
            mp[ele]++;
        }
        priority_queue<int> pq;
        for(auto it : mp){
            int x =  it.second;
            pq.push(x);
        }
        if(pq.size()==1){
            cout  << "YES" <<endl;
            continue;
        }
        int el1 = pq.top();
        pq.pop();
        if(pq.top()==el1){
            cout << "NO"<<endl;
            continue;
        }
        cout << "YES" <<endl;

    }
    return 0;
}