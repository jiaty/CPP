#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
   char a(0);                                  // Store input in here

   cout << endl
        << "Enter a character: ";
   cin >> a;

   if(((a == 'A')||(a == 'E')||(a == 'I')||(a == 'O')||(a == 'U')||(a == 'a')||(a == 'e')||(a == 'i')||(a == 'o')||(a == 'u')))         // Test for alphabetic
      cout << endl
           << "You entered a vowel." << endl;
   else
      if((a >= '0') && (a <= '9'))
      {cout << endl
            << "You entered a number." << endl;
            }
      else
      {      
      cout << endl
           << "Else." << endl;}
   system("PAUSE");
   return EXIT_SUCCESS;
}
