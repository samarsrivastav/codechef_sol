#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int a, b, count = 0;
        cin >> a >> b;
        if (a % 3 == 0 || b % 3 == 0)
        {
            count = 0;
        }
        else
        {
            while (a % 3 != 0 || b % 3 != 0)
            {
                int temp1 = a, temp2 = b;
                a = fabs(a - temp2);
                b = fabs(b - temp1);
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}