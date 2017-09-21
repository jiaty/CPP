#include <cstdlib>
#include <iostream>

using namespace std;

class Ctime{
      
      public:
      int duration()
      {
          return (hour*60*60)+(second*60)+(second);
          }
      
      private:
      int hour;
      int minute;
      int second;
      
      friend int SetHour(Ctime ctime, int chour);
      friend int SetMinute(Ctime ctime, int cminut);
      friend int SetSecond(Ctime ctime, int csecond);
      };
      
      int SetHour(Ctime ctime, int chour){
          ctime.hour = chour;
          return ctime.hour;
          }
      int SetMinute(Ctime ctime, int cminute){
          ctime.minute = cminute;
          return ctime.minute;
          }
      int SetSecond(Ctime ctime, int csecond){
          ctime.second = csecond;
          return ctime.second;
          }
      

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
    
    //�ˬd��J hour:0~23 minute, second:0~59, �W�X�d��Y���s��J 
 
    if((hour>23 || hour<0)||(minute>59 || minute<0)||(second>59 || second<0))
    {
      cout << "You enter the wrong time!" <<endl
           << "Please try again: "<<endl;
      control1 = 0;
      }
    else{cout << SetHour(time0, hour) <<endl
              << SetMinute(time0, minute) <<endl
              << SetSecond(time0, second) <<endl
              << time0.duration() <<endl;
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
    else{cout << SetHour(time1, hour) <<endl
              << SetMinute(time1, minute) <<endl
              << SetSecond(time1, second) <<endl
              << time1.duration() <<endl;
         break;}
    }
    break;
}

      
    cout << "TIME1's duration: " <<endl   //��Xtime1, time2�����
         << time0.duration() <<endl
         << "TIME2's duration: " <<endl
         << time1.duration() <<endl;
         
    system("PAUSE");
    return EXIT_SUCCESS;
}
