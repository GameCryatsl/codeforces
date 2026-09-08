#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t, n;
    
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        cin >> n;
        
        if(n % 3) {
            cout << "First" << endl;
        }
        else cout << "Second" << endl;
    }
}
