
//
#include <iostream>     
#include <math.h> 
using namespace std;

float name (float a,float b,float c,float d)
{
    return (pow((a+b),3)+pow((c+d),3)/(pow((c+a),3)*pow((b+d),3)));
}

int main()
{
   float a,b,c,d,y;
    cout<<"Vvedit a"<<endl;
    cin>>a;
    cout<<"Vvedit b"<<endl;
    cin>>b;
    cout<<"Vvedit c"<<endl;
    cin>>c;
    cout<<"Vvedit d"<<endl;
    cin>>d;
    cout<<name(a,b,c,d);
     
    system ("pause");
    return 0;
}
