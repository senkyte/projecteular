#include <iostream>
using namespace std;
int main()
{
    int temp = 2;
    long int number = 600851475143;
    while (true)
    {
        if (number == 1)
        {
            break;
        }
        if (number % temp == 0)
        {
            number = number / temp;
        }
        else
        {
            temp = temp + 1;
        }
    }
    cout << temp;
}
