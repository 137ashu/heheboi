#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int a, b, c, d;
        cin >> a>> b>> c >> d;
        double pd = a * c /100;
        double pdn = b * c / 100;
        if(pd>pdn){
            cout << "First"<< endl;
        }
        else if(pd < pdn){
            cout << "Second"<<endl;
        }
        else{
            cout << "Any" << endl;
        }
    }
    return 0;
}