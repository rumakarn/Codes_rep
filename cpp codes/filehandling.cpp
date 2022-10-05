#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    ofstream out("My.Txt");
    out << "Hello" << endl;
    out << 25 << endl;
    out.close();
}