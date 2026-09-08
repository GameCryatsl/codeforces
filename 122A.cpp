#include <iostream>
 
using namespace std;
 
int main()
{
    int n, dataCase[11] = {4, 7, 44, 47, 74, 77, 444, 447, 477, 777};
    
    cin >> n;
    
    for(int i = 0; i < 10; i++) {
        if(n >= dataCase[i]) {
            if(!(n%dataCase[i])) {
                cout << "YES";
                return 0;
            }
        }
        else break;
    }   
    
    cout << "NO";
    
    return 0;
}
