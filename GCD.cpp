#include <iostream>
using namespace std;

class hcf{
    public:
    int n1,n2;
    int gcd(int n1,int n2);
}t;

int main()
{

   cout << "Enter two positive integers: ";
   cin >>t.n1>>t.n2;

   cout << "gcd of " << t.n1 << " & " <<  t.n2 << " is: " << t.gcd(t.n1, t.n2);

}
    int hcf :: gcd(int a, int b)
{
    if (b != 0)
       return gcd(b, a % b);
    else
       return a;
}
