#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

long long Solve(long long n)
{
    long long Max = 1;
    long long a;
    while (n>0)
    {
      a = n%10;
      if ((a%2==0) && (a>Max)) Max = a;
      n = n/10;

    }
    return Max;
}

int main()
{
    long long n;
    cin>>n;
    if (Solve(n)%2==0) cout<<Solve(n);
    else cout<< -1;
    return 0;
}
