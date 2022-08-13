
#include <iostream>

using namespace std;

int main()
{   
    int n;
    cin >> n;

    for (int i = 0; i< n; i++){

        int l1, r1, l2, r2;
        cin >> l1  >> r1 >> l2>> r2;

        if((l1 <= l2 && l2 <= r1) || (l2 <= l1 && l1 <= r2)) cout << max(l1, l2) << endl;
        else cout << (l1 + l2) << endl;

    
    }
    return 0;
}
