#include<iostream>
using namespace std;

void printarray(int arr[], int size)
{
for (int i=0;i<size;i++)
{
cout<<arr[i]<<" ";

}

}
void findunique(int arr[],int size)
     {int ans=0;
for (int i=0 ; i<size;i++)
{

ans =ans^arr[i];
}
cout<<ans;
     }


int main()
{
    int size;
 cout<<"size of array is";
 cin>> size;

 int arr[1000];
     for (int i=0 ; i<size;i++)
     {
     cin>>arr[i];

     }
findunique(arr,size);

     }


