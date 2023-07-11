#include<iostream>
using namespace std;

class sort{
    public : int n,a[10000],i,j,temp,count=0;


    void bubble_sort(){
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++)
        {
            count++;
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
     }
    }
}t;

int main(){
    int i;
    cout<<"\nEnter the number of elements: ";
    cin>>t.n;
    cout<<"\nEnter "<<t.n<<" elements: ";
    srand(time(0));
    for(i=0;i<t.n;i++){
     t.a[i]=rand()%10000;
    }
    t.bubble_sort();
    cout<<"\nSorted array is: ";
    for(i=0;i<t.n;i++){
     cout<<t.a[i]<<" ";
    }
     cout<<"the number of basic op is "<<t.count<<endl;

}
