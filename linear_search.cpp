#include<iostream>
#include<conio.h>
#include<ctime>
#include<cmath>
using namespace std;

class lsearch
{
  public:
  int a[10],n,key;
  void getdata();
  void display();
};

void lsearch :: getdata()
{
  cout<<"\nEnter the length of the array:";
  cin>>n;

     cout<<"\nEnter the element at position the array:";
  for(int i=0;i<n;i++)
   {
     a[i]=rand()%100;
   }
  cout<<"\nEnter the key to find the element in the array:";
  cin>>key;
}

void lsearch :: display()
{
    int i;
    clock_t time_req;
    time_req = clock();
     for(i=0;i<n;i++)
    {
        if(a[i]==key)
          cout<<"element found at"<<i<<endl;
    }
time_req = clock()-time_req;
cout << "time taken is" << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl;
}
int main()
{

 lsearch ob1;
 ob1.getdata();
 ob1.display();
 getch();
}
