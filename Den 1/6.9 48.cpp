#include <iostream>

using namespace std;



int main(int argc, char*argv[])


{ setlocale(LC_ALL,"rus");
    char fraza[255]="";
    
    cout<<"������� ���� ����� ��� �����(�� 255 ��������)"<<endl;
    cin.getline(fraza,255);
    int l = strlen(fraza);
    cout<<"���-�� ��������: "<<l<<endl;
    int a=0,b=0;
    for(int i=0; i<l; i++)
    {

        if ((fraza[i]>='A')&&(fraza[i]<='Z'))a++;
        if ((fraza[i]>='a') && (fraza[i] <='z'))b++;
       
        
    }
    cout<<"Big "<<a<<"\nSmall "<<b<<endl;
    getwchar();
    return 0;
}
