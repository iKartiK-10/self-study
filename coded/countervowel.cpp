#include<iostream>
using namespace std;

int main()

{
    int n;
    cout << "size="<<endl;
   cin>>n;
cout<< "enter the word"<<endl;

 char arr[1000];
     for (int i=0 ; i<n;i++)
     {
     cin>>arr[i];

     }
int count=0 , countal=0 ;
char vowel[5]={'a','e','i','o','u'} ;
  for(int j=0 ; j<n ; j++)
  {
for (int k=0; k<5;k++){
  if(arr[j]==vowel[k])
  {
    count++;
}
  else
    countal=n-count;

  }
  }


  cout<<"vowels count="<<count<<"and alphabet count="<<countal;

return 0;
     }
