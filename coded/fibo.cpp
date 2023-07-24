#include<iostream>
using namespace std;

int main()
{
int n,a=0, fib, b=1;
cout<< "enter the place";
cin>>n;
cout<<" fibonaccibseries till given place";
for(int i=0;i<n;i++)
 {
 fib=a+b;
 a=b;
 b=fib;
cout<<fib<<" ";
 }


}
