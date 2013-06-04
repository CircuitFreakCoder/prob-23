#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double solve_23()
{
    double a, total = 0;
    for(int i=1; i<=100; i++)
    {
        a = pow(double(i),6.0);
        total += a;
    }
    return total;
}

int main()
{
    cout << fixed<<solve_23() << endl;
    return 0;
}

// 14790714119050
