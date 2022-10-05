#include <iostream>

using namespace std;
int main()
{
    int n, i = 0;
    cout << "enter a decimal no:" << endl;
    cin >> n;
    int arr[10];
    do
    {

        arr[i] = n % 2;
        n /= 2;
        i++;
    } while (n > 0);

    for (int j = i - 1; j >= 0; j--)
    {
        cout << arr[j];
    }
}