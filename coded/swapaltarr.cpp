#include<iostream>
using namespace std;
void swapalt(int arr[], int size)
{
for ( int i=0 ; i<size; i+=2)
{if(i+1<size)
swap(arr[i],arr[i+1]);
}
}
void printarray(int arr[], int size)
{
for (int i=0;i<size;i++)
{
cout<<arr[i]<<" ";

}

}

int main()
{
int arr[7]={2,45,34,434,67,78,45};

swapalt(arr,7);
printarray(arr,7);



}
