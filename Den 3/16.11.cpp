//3 den funkzii = 16(11) zavdanie 
#include <iostream>
#include <math.h>

using namespace std;
float y(float x);
int main()
{
    float i, x, f, a, b, h;
    const double PI = 3.14;
     
    for (x = -2*PI; x <=2*PI; x += 0.5 )
   { 
        cout << " y = "<<y(x)<<endl;
   }
        system("pause");
        return 0;}
   
float y(float x){
return ((log(sin(x))/(tan(x)-2))) ;
}  
