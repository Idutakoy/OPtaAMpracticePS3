
#include <iostream>
#include <Windows.h>
using namespace std;

 

int main(int argc, char*argv[])

{ 
 
   SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   
   setlocale(LC_ALL,"rus");
   char fraza[255];
 
cout<<"ZMINIT SHRIFT CONOSOLI NA (Lucida Console)"<<endl;
system ("pause");
    cout<<"������� ���� ����� ��� �����(�� 255 ��������)"<<endl;
    cin.getline(fraza,255);
    int l = strlen(fraza);
    cout<<"���-�� ��������: "<<l<<endl;
    int a=0;
    for(int i=0; i<l; i++)
    {

        if ((fraza[i]>='�')&&(fraza[i]<='�'))a++;
        if ((fraza[i]>='�') && (fraza[i] <='�'))a++;
       
        
    }
    cout<<"��������: "<<a<<endl;
    getwchar();
    return 0;
}
