 #include<iostream>
 using namespace std;

              int main()
            {
            int n;
            cout<< "enter the no-";
            cin>>n;
            int  rev;
            while (n!=0)
            {
            int dig = n%10;
            rev = (rev * 10)+ dig;
             n/=10;
             }

cout<< "reverse - "<< rev;
}
