
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
   char* number0("zero");
   char* number1("one");
   char* number2("two");
   char* number3("three");
   char* number4("four");
   char* number5("five");
   char* number6("six");
   char* number7("seven");
   char* number8("eight");
   char* number9("nine");
   char* number("Your number is ");
   
   int a,b,c,d;
   int count(0);
   int help;

   cout << endl
        << "Translation!" <<endl
        << "Enter a number below 10000: " << endl;
   cin >> count;
   
   help = count;
   a = help/1000;
   help -= a*1000;
   b = help/100;
   help -= b*100;
   c = help/10;
   help -= c*10;
   d = help;
    
   cout << endl;
   cout << number;
   cout << endl;
   switch(a)
   {
      case 0: cout << number0;
              break;
      case 1: cout << number1;
              break;
      case 2: cout << number2;
              break;
      case 3: cout << number3;
              break;
      case 4: cout << number4;
              break;
      case 5: cout << number5;
              break;
      case 6: cout << number6;
              break;
      case 7: cout << number7;
              break;
      case 8: cout << number8;
              break;
      case 9: cout << number9;
              break;
  
      default: cout << "Sorry, you enter the wrong number.";
   }
   cout << " ";
   switch(b)
   {
      case 0: cout << number0;
              break;
      case 1: cout << number1;
              break;
      case 2: cout << number2;
              break;
      case 3: cout << number3;
              break;
      case 4: cout << number4;
              break;
      case 5: cout << number5;
              break;
      case 6: cout << number6;
              break;
      case 7: cout << number7;
              break;
      case 8: cout << number8;
              break;
      case 9: cout << number9;
              break;

      
      default: cout << "Sorry, you enter the wrong number.";
   }
   cout << " ";
   switch(c)
   {
      case 0: cout << number0;
              break;
      case 1: cout << number1;
              break;
      case 2: cout << number2;
              break;
      case 3: cout << number3;
              break;
      case 4: cout << number4;
              break;
      case 5: cout << number5;
              break;
      case 6: cout << number6;
              break;
      case 7: cout << number7;
              break;
      case 8: cout << number8;
              break;
      case 9: cout << number9;
              break;

      
      default: cout << "Sorry, you enter the wrong number.";
   }
   cout << " ";
   switch(d)
   {
      case 0: cout << number0;
              break;
      case 1: cout << number1;
              break;
      case 2: cout << number2;
              break;
      case 3: cout << number3;
              break;
      case 4: cout << number4;
              break;
      case 5: cout << number5;
              break;
      case 6: cout << number6;
              break;
      case 7: cout << number7;
              break;
      case 8: cout << number8;
              break;
      case 9: cout << number9;
              break;

      
      default: cout << "Sorry, you enter the wrong number.";
   }
   
   
   cout << endl;
   system("PAUSE");
}
