#include <iostream>

using namespace std;

int main()
{
    int t;
    double sum = 0;
    
    cout << fixed;
    
    cout.precision(12);
    
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        int a;
        cin >> a;
        
        sum += a;
    }
    
    cout << sum / t;
    
    return 0;
}
