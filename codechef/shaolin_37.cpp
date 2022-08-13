#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x, a;
    for (int i = 0; i < n; i++){
        int count = 0;
        cin >> x ;
        for (int j = 0; j < x; j ++){
            cin >> a ;
            if (a<61 && a >9){
                count ++;
            }
        }
        cout << count << endl;
        
    }
    
    return 0;
}