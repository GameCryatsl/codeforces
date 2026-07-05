#include <iostream>
#include <string.h>
 
using namespace std;
 
int main()
{
    int n;
    char str[101];
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> str;
        if (strlen(str) > 10) {
            cout << str[0] << strlen(str) - 2 << str[strlen(str)-1];
        }
        else cout << str;
        
        cout << "\n";
    }
    
    return 0;
}
