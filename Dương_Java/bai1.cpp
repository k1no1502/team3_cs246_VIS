#include<fstream> 
#include<iostream> 
using namespace std;
int main ()
{
long long a,b,x; 
cin>>a>>b;
x = (a%101 * b%101) %101;
cout<<x;
}
