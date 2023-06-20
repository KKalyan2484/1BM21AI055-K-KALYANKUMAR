#include<iostream>
#include<conio.h>
#include<ctime>
#include<cmath>
using namespace std;
class binsearch
{
  public:
  int a[10],n,key,first,last,middle;
  void getdata();
  void display();
};
void binsearch :: getdata()
{

    int temp=0;
  cout<<"\nEnter the length of the array:";
  cin>>n;
  cout<<"\nEnter the elements of the array:";

  for(int i=0;i<n;i++)
   {
     a[i]=rand()%100;
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
            if(a[j]>a[j+1])
        {
           temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
        }
       }
   }

  cout<<"\nEnter the key to find the element in the array:";
  cin>>key;
}
void binsearch :: display()
{
  clock_t time_req;
  first=0;
  last=n-1;
  middle=(first+last)/2;
  time_req = clock();
  while(last>=first)
  {
    middle=(first+last)/2;
    if(key>a[middle])
      first=middle+1;
    else if(key<a[middle])
      last=middle-1;
    else
    {
      cout<<"\nKey "<<key<<" found in the given array";
      break;
    }
  }
  time_req = clock()-time_req;
  cout << "time taken is" << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl;
}
int main()
{

 binsearch ob2;
 ob2.getdata();
 ob2.display();
 getch();
}
