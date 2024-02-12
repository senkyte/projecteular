#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    for (int i = 1; i < 101; i++)
    {
        sum += i * i;
    }
    int square = 0;
    int sum2 = 0;
    for (int j = 1; j < 101; j++)
    {
        sum2 += j;
    }
    square = sum2 * sum2;
    cout << square - sum;
}
