#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int a, b, c, d;
        cin >> a>> b>> c >> d;
        int pd = a-c;
        int pdn = b - d;
        // cout << "pd and pdn are "<< pd <<' '<<pdn<<endl;
        if(pd<pdn){
            cout << "First"<< endl;
        }
        else if(pd > pdn){
            cout << "Second"<<endl;
        }
        else{
            cout << "Any" << endl;
        }
    }
    return 0;
}