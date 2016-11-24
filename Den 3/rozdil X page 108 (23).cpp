#include <iostream>
using namespace std;
 
struct Event{                  
    int year;    
    int month;  
    int day;
};  

void compare(Event,Event);               
 
int main() {
    int year = 1930;
    int a, b;
    Event date[20];
    srand(time(NULL));
    for ( int i = 0; i < 21; i++) {
        date[i].year = year;
        date[i+1].year = year;
        date[i].month = rand()%11+1;
        date[i+1].month = rand()%11+1;
        date[i].day = rand()%31;
        date[i+1].day = rand()%31;
        year++;
        i++;
    }   
    for ( int i = 1; i < 21; i++) {
        cout<<i<<".  "<<date[i].year<<"."<<date[i].month<<"."<<date[i].day<<endl;
       
    }  
    cout<<"Choose first and second date to compare: ";
    cin>>a>>b;
    compare(date[a-1], date[b] );
 system("pause");
return 0;
}

void compare(Event event1, Event event2){
     if (event1.year == event2.year) {
         if (event1.month == event2.month) {
            if (event1.day == event2.day) {
               cout<<"The date are similuar"<<endl;
            } else if (event1.day < event2.day) {
                   cout<<event2.year<<"."<<event2.month<<"."<<event2.day<<endl;
            } else {
                   cout<<event1.year<<"."<<event1.month<<"."<<event1.day<<endl;
            }             
         } else if (event1.month < event2.month) {
                cout<<event2.year<<"."<<event2.month<<"."<<event2.day<<endl;
         } else {
                cout<<event1.year<<"."<<event1.month<<"."<<event1.day<<endl;
         }          
                     } else if (event1.year < event2.year) {
                      cout<<event2.year<<"."<<event2.month<<"."<<event2.day<<endl;
                     } else {
                     cout<<event1.year<<"."<<event1.month<<"."<<event1.day<<endl;
                     }
     
     }
