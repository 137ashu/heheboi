#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin >> n;
        int count = 0;
        string str = std::bitset<32>(n).to_string();
        for(char c : str){
            if(c=='1'){
                count++;
            }
        }
        cout << count - 1<<endl;
    }
    return 0;
}