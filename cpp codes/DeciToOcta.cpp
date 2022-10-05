#include <iostream>

using namespace std;
int main()
{
    int n, i;
    cout << "enter a decimal no:" << endl;
    cin >> n;
    int arr[n];
    while (n > 0)
    {

        arr[i] = n % 8;
        n /= 8;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << arr[j];
    }
}