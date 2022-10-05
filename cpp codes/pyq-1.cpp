#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 25;
    a = b++ + a++;
    b = ++b + ++a;
    cout << a << " " << b << endl;
}