#include <iostream>

using namespace std;

int Add2Values(int, int);

int main()
{
    int x, y;
    cout
        << "-- Add 2 Values --\n"
        << "Enter x Values: ";
    cin >> x;
    cout << "Enter y Value: ";
    cin >> y;

    cout << "__________________";

    cout << Add2Values(x, y)

    return x,y;
}

int Add2Values(int x, int y)
{
    int sum;

    sum = x + y;

    return sum;
}
