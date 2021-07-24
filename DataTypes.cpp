#include<iostream>
#include <iomanip>
using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output

int n1;
long n2;
char n3;
float n4; double n5;
cin>>n1>>n2>>n3>>n4>>n5;
cout<<n1<<endl;
cout<<n2<<endl;
cout<<n3<<endl;
cout<<fixed;
cout << setprecision(3)<<n4<<endl;
cout<<fixed;
cout << setprecision(9)<<n5<<endl;
return 0;
}
