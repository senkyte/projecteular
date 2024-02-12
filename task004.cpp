#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
bool rev(string p)
{
    string n = p;
    reverse(p.begin(), p.end());
    return n == p;
}

int main()
{
    int max = 0;

    for (int i = 100; i < 1000; i++)
    {
        for (int j = 100; j < 1000; j++)
        {
            int temp = i * j;
            if ((rev(to_string(temp)) == true) and (temp > max))
            {
                max = temp;
            }
        }
    }

    cout << max;
}
