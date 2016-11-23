#include <iostream>
#include <algorithm>
using namespace std;
 
  
int main()
{ 
    setlocale(LC_ALL,"Russian");

int a [1000];
int n;
cout<<"¬ведите количество пар чисел от 1 до 1000"<<endl;;
cin>>n;


sort (a, a+n) ;
bool res=true;
long p=a[0]*a[n-1];

for (int i=1; i<n/2 && res; ++i)
res=(a[i]*a[n-i-1]==p);

cout<<(p?"true":"false");
system ("pause");
}
