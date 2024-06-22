#include <iostream>
using namespace std;
int main()
{
    int p2mark, kmrk, m1, m2, ptage;
    cout << "enter the plus two mark:";
    // out of 300
    cin >> p2mark;
    cout << "enter keam mark:";
    cin >> kmrk;
    m2 = p2mark - 20;
    m1 = m2 + 0.5 * kmrk;
    cout << "final mark:" << m1;
    ptage = m1 / 6;
    cout << "\n percentage:" << ptage;
}
