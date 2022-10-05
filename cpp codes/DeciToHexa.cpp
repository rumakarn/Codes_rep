#include <iostream>

using namespace std;
int main()
{
    int n, i;
    cout << "enter a decimal no:" << endl;
    cin >> n;
    char arr[n];
    while (n > 0)
    {

        // storing remainder in temp variable.
        int temp = 0;
        temp = n % 16;

        // check if temp < 10
        if (temp < 10)
        {
            arr[i] = temp + 48;
            i++;
        }
        else
        {
            arr[i] = temp + 55;
            i++;
        }
        n /= 16;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << arr[j];
    }
    return 0;
}