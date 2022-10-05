#include <iostream>
using namespace std;
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
    cout << "Length of your names is: ";
    cout << getLength(name);
    return 0;
}