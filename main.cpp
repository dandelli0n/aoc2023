#include <iostream>
#include <fstream>
#include <string>

int main()
{
    using namespace std;
    int floor = 0;
    int n = 0;
    ifstream f;
    f.open("source.txt");
    if(f.fail())
        cout << "no file opened\n";

    char c;
    while(f.get(c))
    {
        switch (c)
        {
            case '(':
                floor++;
                break;
            case ')':
                floor--;
                break;
            default:
                break;
        }
        n++;
        if(floor == -1)
            break;
    }
    cout << n;
    return 0;
}
