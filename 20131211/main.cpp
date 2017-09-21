#include <cstdlib>
#include <iostream>

using namespace std;

class CTime{
      
      public:
      CTime(int h = 15, int m = 15, int s = 15){
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
      
      CTime operator+(CTime& aTime) //overloaded function
      {
           //new Time has longer hours, mintes, and seconds
           int newhour;
           int newminute;
           int newsecond;
           
           newhour = (hour > aTime.hour ? hour : aTime.hour);
           newminute = (minute > aTime.minute ? minute : aTime.minute);
           
           if(second+aTime.second >= 60)
           {
               newsecond = second+aTime.second-60;
               newminute+=1;
               if(newminute>=60)
               {
                   newminute = newminute-60;
                   newhour+=1;
               }
           }
           else {newsecond = second+aTime.second;}
           
           return CTime(newhour,newminute,newsecond);
      }
      
      void ShowTime()
      {
           cout << hour << " : " << minute << " : " << second <<endl;
      }
      
      ~CTime()
      {
      cout << "Destructor called." << endl;
      }
          
      private:
      int hour;
      int minute;
      int second;
      
      };

int main(int argc, char *argv[])
{
    CTime time0; //for user to set
    CTime time1; //for user to set
    CTime time2; //New time
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

    time2 = time0 + time1;
    
    cout << "TIME1: " <<endl;   //輸出time1, time2
         time0.ShowTime();
    cout << "TIME2: " <<endl;
         time1.ShowTime();
    cout << "New Time: " << endl;
         time2.ShowTime();
    
         
    system("PAUSE");
    return EXIT_SUCCESS;
}
