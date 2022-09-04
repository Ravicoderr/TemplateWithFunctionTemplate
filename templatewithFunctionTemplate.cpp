#include <iostream>
using namespace std;
template <class t>
void swapp(t &p, t &q)
{
    t temp = p;
    p = q;
    q = temp;
}
template <class t1, class t2>
void average(t1 a, t2 b)
{
    cout << "the average is " << (a + b) / 2 << endl;
}
int main()
{
    float m, n;
    cout << "enter the 2 values to get the average " << endl;
    cin >> m >> n;
    average(m, n);
    int y = 4, z = 5;
    swapp(y, z);
    cout << y << endl << z;
    return 0;
}