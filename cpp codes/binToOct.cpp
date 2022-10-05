#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, i = 0, sum = 0;
    cout << "enter a binary no:" << endl;
    cin >> n;
    int a;
    while (n > 0)
    {

        a = (n % 10) * pow(8, i);
        sum = sum + a;
        n /= 10;
        i++;
    }

    cout << sum;
}