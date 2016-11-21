#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
#include <clocale>
using namespace std;

int main(int argc, char*argv[])
{
setlocale(LC_ALL,"rus");


char buff[500];    


    cin.getline(buff,500); 
  
    cout<<"Кол-во символов: "<<strlen(buff)<<endl;

    int countw=0, max=0, min=0, temp=0, maxw=0, minw=0;
    while(buff[temp++]!=' ')  //проверка для мин
    {
        min++;
        max++;
    }
    for(int i=0; i<strlen(buff); i++)
    {
        if (buff[i]!=' ' && buff[i]!=',' && buff[i]!='.')
        {
            countw++;                   
        }
        else
        {
            if(buff[i+1]==' ')
                i++;
            cout<<" "<<countw;
            if(countw>max)
            {   
                max=countw;     //кол-во символов
                maxw=i;        //индекс последнего символа
            }
            else if(countw<min)
            {
                min=countw;  //кол-во 
                minw=i;     //индекс последнего символа 
            }
            countw=0;                       
        }               
    }
    cout<<endl; 
              cout<<"max :"<<max<<endl;
                 cout<<"min :"<<min<<endl;
    string s =buff;
    
  system ("pause");
}

