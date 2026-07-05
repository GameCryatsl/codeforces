#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n, k;
    
    cin >> n >> k;
    
    vector<int> v;
    
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        v.push_back(t);
    }
    
    sort(v.begin(), v.end());
    
    if (k == 0) {
        if (v[0] == 1)
            cout << -1;
        else
            cout << 1;
    }
    else if (k == n) {
        cout << v[n - 1];
    }
    else {
        if (v[k - 1] == v[k])
            cout << -1;
        else
            cout << v[k - 1];
    }
        
    return 0;
}
