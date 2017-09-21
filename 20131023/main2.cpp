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
    Ctime time0(20,,59,,25,40);          //Dev寫空著會錯 
    
    string n1, n2, n3, n4, n5, n6;
    
    cout << "Please enter 0~6 sets of number, including two set of hour, minute, and second.: " << endl;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
    cout << "You just enter: " << endl
    << "( " << n1 << " , " << n2 << " , " << n3 << " , " << n4 << " , " << n5 << " , " << n6 << " )" << endl;
    
    
    cout << "TIME1's duration: " <<endl   //輸出time1, time2的秒數
         << time0.duration1() <<endl
         << "TIME2's duration: " <<endl
         << time0.duration2() <<endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
