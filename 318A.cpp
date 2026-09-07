#include <iostream>
#include <cstdint>

using namespace std;

int main()
{
    int64_t n, k;
    
    cin >> n >> k;

    int64_t odd = (n + 1) / 2;

    if (k <= odd)
        cout << 2 * k - 1;
    else
        cout << 2 * (k - odd);

    return 0;
}
