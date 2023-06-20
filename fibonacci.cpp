#include <iostream>
using namespace std;

class fibo{
    public:
        int n;
        int fib(int n);
}t;

int main(){
   fibo t;
   cout << "Enter the number of terms of series : ";
   cin >> t.n;
   cout << "\nFibonnaci Series : "<<endl;
   for(int i=0;i<t.n;i++) {
      cout << " " << t.fib(i)<<endl;
   }
   return 0;
}
int fibo :: fib(int n) {
   if((n==1)||(n==0)) {
      return n;

   }else {
      return (fib(n-1)+fib(n-2));
   }
}
