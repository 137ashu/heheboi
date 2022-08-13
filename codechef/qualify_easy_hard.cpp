#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x, a, b;
    for (int i = 0; i < n; i++){
        cin >> x >> a >> b;
        if(x <= a + 2*b){
            cout <<"Qualify"<<endl;
        }
        else{
            cout << "NotQualify"<<endl;
        }
    }
    
    return 0;
}