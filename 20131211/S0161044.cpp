#include <cstdlib>
#include <iostream>

using namespace std;

class CTime{
      
      public:
      
      int hour;
      int minute;
      int second;
      
      CTime(int h = 0, int m = 0, int s = 0){    //Constructor
      hour = h;
      minute = m;
      second = s;
      }
      
};

class CWeek : public CTime{
      
      public:
             
      int temp;
      int dayNumber;
      string day;
      
      CWeek(int totalS){         //Constructor caculate the date from Sunday 00:00:00
          temp = totalS;
          dayNumber = temp/(60*60*24);
          temp -= (dayNumber*(60*60*24));
          hour = temp/(60*60);
          temp -= (hour*(60*60));
          minute = temp/(60);
          temp -= (minute*60);
          second = temp;
      }

      
      string getDay(){
             
        switch(dayNumber){
          case 0 :
               day = "Sunday";
               break;
          case 1 :
               day = "Monday";
               break;
          case 2 :
               day = "Tuesday";
               break;
          case 3 :
               day = "Wednesday";
               break;
          case 4 :
               day = "Thursday";
               break;
          case 5 :
               day = "Friday";
               break;
          case 6 :
               day = "Saturday";
               break;
          default :                  // if the input more than a week
               dayNumber %= 7;
               getDay();
      }
           return day;
      }
      
      void getTime(){
          cout << "hour = " << hour << endl << "minute = " << minute << endl << "second = " << second << endl;
      }
      
};




int main(int argc, char *argv[])
{
    int enterNumber = 0;
    
    cout << "Enter an Integer(second): " << endl;
    cin >> enterNumber;
    CWeek day1(enterNumber);
    cout << "The date is: " << endl;    //from Sunday 00:00:00
    cout << day1.getDay() << endl;
    day1.getTime();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
