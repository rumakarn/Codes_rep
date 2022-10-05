#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int t1 = 0, t2 = 0;
        t1 = a - 1;
        t2 = abs(c - b) + c;
        if (t1 < t2)
        {
            cout << "1" << endl;
        }
        else if (t2 < t1)
        {
            cout << "2" << endl;
        }
        else
            cout << "3" << endl;
    }
    return 0;
}
