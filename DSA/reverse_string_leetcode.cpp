#include <iostream>
using namespace std;
void getReverse(char name[], int n)
{
    int l = 0, r = 0;
    while (l < n)
    {
        while (r < n)
        {
            if (name[r] != ' ' || name[r] != '\0')
            {
                r++;
            }
            if (name[r] == ' ')
            {
                break;
            }
        }
        int p = r;
        r--;
        while (l < r)
        {
            swap(name[l++], name[r--]);
        }
        l = p + 1;
        r = l;
    }
    cout << "Your reversed name is ";
    puts(name);
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
    char name[200];
    cout << "Enter your name:\n";
    gets(name);
    cout << "Your name is ";
    puts(name);
    int len = getLength(name);
    getReverse(name, len);

    return 0;
}