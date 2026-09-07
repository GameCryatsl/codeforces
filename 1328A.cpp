#include <iostream>

using namespace std;

int main()
{
    int t;
    
    int64_t a , b;
    
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        cin >> a >> b;
        
        if(a % b) {
            cout << b - (a % b);
        }
        else cout << "0";
        
        cout << "\n";
    }
}
