#include <cstdlib>
#include <iostream>

using namespace std;

class Ctime{
      public:
      int hour1;
      int minute1;
      int second1;
      int hour2;
      int minute2;
      int second2;
      
      Ctime(int h1 = 15, int m1 = 15, int s1 = 15, int h2 = 15, int m2 = 15, int s2 = 15){
              cout << "Constructor called." << endl;
              hour1 = h1;
              minute1 = m1;
              second1 = s1;
              hour2 = h2;
              minute2 = m2;
              second2 = s2;
              }
      
      
      int duration1()     //00:00:00開始的秒數 
      {
          return (hour1*60*60)+(second1*60)+(second1);
          } 
      int duration2()     //00:00:00開始的秒數 
      {
          return (hour2*60*60)+(second2*60)+(second2);
          } 
      };

int main(int argc, char *argv[])
{
    Ctime time0;
    Ctime time3;
    int hour = 15;
    int minute = 15;
    int second = 15;
    
    int control0=0;
    int control1=0;
    int control2=0;
    
    
    while(control0!=1){
    cout << "Please enter two set of time, including hour, minute, and second. "<<endl
         << "Press any number to start, except 1. "<<endl;
    cin >> control1;
    
    
    while(control1!=1){
    cout << "TIME1: "<<endl;
    cin >> hour >> minute >> second;
    
    //檢查輸入 hour:0~23 minute, second:0~59, 超出範圍即重新輸入 
 
    if((hour>23 || hour<0)||(minute>59 || minute<0)||(second>59 || second<0))
    {
      cout << "You enter the wrong time!" <<endl
           << "Please try again: "<<endl;
      control1 = 0;
      }
    else{time0.hour1 = hour;
         time0.minute1 = minute;
         time0.second1 = second;
         break;}
    }
    
    cout << "Press any number to continue, except 1. "<<endl;
    cin >> control2;
    
    while(control2!=1){
    cout << "TIME2: "<<endl;
    cin >> hour >> minute >> second;
    
    if((hour>23 || hour<0)||(minute>59 || minute<0)||(second>59 || second<0))
    {
      cout << "You enter the wrong time!" <<endl
           << "Please try again: "<<endl;
      control1 = 0;
      }
    else{time0.hour2 = hour;
         time0.minute2 = minute;
         time0.second2 = second;
         break;}
    }
    break;
}

      
    cout << "TIME1's duration: " <<endl   //輸出time1, time2的秒數
         << time0.duration1() <<endl
         << "TIME2's duration: " <<endl
         << time0.duration2() <<endl
         << "Initialize duration: " <<endl
         << time3.duration1() <<endl;
         
    system("PAUSE");
    return EXIT_SUCCESS;
}
