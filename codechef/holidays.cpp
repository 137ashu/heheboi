#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x, a;
    int arr = [6, 13, 20, 27, 7, 14, 21, 28]
    for (int i = 0; i < n; i++){
        cin >> x;
        for (int j = 0; j < x; j++){
            int count = 0;
            cin >> a;
            for (int k = 0; k < 8; k++){
                if(arr[k] == a){
                    break;
                }
                else{
                    k++;
                }
            }
            count ++;
        }
        cout << count;
        
    }
    
    return 0;
}