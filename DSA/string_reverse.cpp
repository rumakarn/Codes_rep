
#include <iostream>
using namespace std;
void getReverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout << "Enter your name:\n";
    cin >> name;
    cout << "Your name is ";
    cout << name << endl;
    int len = getLength(name);
    getReverse(name, len);
    cout << "Your reversed name is ";
    cout << name << endl;
    return 0;
}