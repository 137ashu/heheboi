#include <bits/stdc++.h>
using namespace std;

void solution(){
	int n;
        cin >> n;
        if(n == 1){
            cout << 2 <<endl;
            continue;
        }
        if(n%3==0){
            cout << n/3 <<endl;
            continue;
        }
        cout << n/3 + 1 << endl;
}
int main(){
    int T;
    cin>>T;
    while(T--){
		solution();
    }

    return 0;
}