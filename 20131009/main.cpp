#include <cstdlib>
#include <iostream>

using namespace std;

class Ctime{
      public:
      int hour;
      int minute;
      int second;
      int duration()     //00:00:00開始的秒數 
      {
          return (hour*60*60)+(second*60)+(second);
          } 
      };

int main(int argc, char *argv[])
{
    Ctime time1;
    Ctime time2;
    int hour1;
    int minute1;
    int second1;
    int hour2;
    int minute2;
    int second2;
    int control0=0;
    int control1=0;
    int control2=0;
    

    while(control0!=1){
    cout << "Please enter two set of time, including hour, minute, and second. "<<endl
         << "Press 0 to start. "<<endl;
    cin >> control1;
    

    while(control1!=1){
    cout << "TIME1_HOUR: "<<endl;
    cin >> hour1;
    cout << "TIME1_MINUTE: "<<endl;
    cin >> minute1;
    cout << "TIME1_SECOND: "<<endl;
    cin >> second1;
    
    //檢查輸入 hour:0~23 minute, second:0~59, 超出範圍即重新輸入 
 
    if((hour1>23 || hour1<0)||(minute1>59 || minute1<0)||(second1>59 || second1<0))
    {
      cout << "You enter the wrong time!" <<endl
           << "Please try again: "<<endl;
      control1 = 0;
      }
    else{time1.hour = hour1;
         time1.minute = minute1;
         time1.second = second1;
         break;}
    }

      
      cout << "Press 0 to continue: ";
      cin >> control2;
      
    while(control2!=1){
        cout << "TIME2_HOUR: "<<endl;
        cin >> hour2;
        cout << "TIME2_MINUTE: "<<endl;
        cin >> minute2;
        cout << "TIME2_SECOND: "<<endl;
        cin >> second2;
    if(hour2>23 || hour2<0)
    {
      cout << "You enter the wrong hour!" <<endl
           << "Please try again: "<<endl;
      control2 = 1;
      break;
      }
    else{time2.hour = hour2;}
      
      
      
    if(minute2>59 || minute2<0)
    {
      cout << "You enter the wrong minute!" <<endl
           << "Please try again: "<<endl;
      control2 = 1;
      break;
      }
    else{time2.minute = minute2;}
      
      
      
    if(second2>59 || second2<0)
    {
      cout << "You enter the wrong second!" <<endl
           << "Please try again: "<<endl;
      control2 = 1;
      break;
      }
    else{time2.second = second2;}
    control0=1;
    break;
      }

}
      
    cout << "TIME1's duration: " <<endl   //輸出time1, time2的秒數
         << time1.duration() <<endl
         << "TIME2's duration: " <<endl
         << time2.duration() <<endl;
         
    system("PAUSE");
    return EXIT_SUCCESS;
}
