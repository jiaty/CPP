#include <cstdlib>
#include <iostream>

using namespace std;

class Ctime{
      
      public:
      Ctime(int h = 15, int m = 15, int s = 15){
      hour = h;
      minute = m;
      second = s;
      }
      int SetHour(int chour){
          hour = chour;
          return hour;
          }
      int SetMinute(int cminute){
          minute = cminute;
          return minute;
          }
      int SetSecond(int csecond){
          second = csecond;
          return second;
          }
      int duration()
      {
          return (hour*60*60)+(second*60)+(second);
          }
          
      private:
      int hour;
      int minute;
      int second;
      
      };

int main(int argc, char *argv[])
{
    Ctime time0;
    Ctime time1;
    int hour;
    int minute;
    int second;
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
    else{time0.SetHour(hour);
         time0.SetMinute(minute);
         time0.SetSecond(second);
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
    else{time1.SetHour(hour);
         time1.SetMinute(minute);
         time1.SetSecond(second);
         break;}
    }
    break;
}

      
    cout << "TIME1's duration: " <<endl   //輸出time1, time2的秒數
         << time0.duration() <<endl
         << "TIME2's duration: " <<endl
         << time1.duration() <<endl;
         
    system("PAUSE");
    return EXIT_SUCCESS;
}
