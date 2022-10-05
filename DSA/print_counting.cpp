#include <iostream>
using namespace std;
void print(int n)
{
    // tail recursion

    if (n == 0)
        return;
    cout << n << " ";
    print(n - 1);
}
void print1(int n)
{
    // head recursion

    if (n == 0)
        return;

    print1(n - 1);
    cout << n << " ";
}

int main()
{
    print(5);
    cout << endl;
    print1(5);

    return 0;
}
