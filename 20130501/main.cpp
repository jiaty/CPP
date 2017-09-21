#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
   const int MAX(80);                 // Maximum array dimension
   char buffer[MAX];                  // Input buffer
   int count(0);        
   int i(0);              // Character count

   cout << "Enter a string of less than "
        << MAX << " characters:\n";
   cin.getline(buffer, MAX, '\n');    // Read a string until \n

   while(buffer[count] != '\0')       // Increment count as long as
      count++;      
    
   cout << endl
        << "The original string is "
        <<buffer;                  // the current character is not null

   cout << endl
        << "The opposite string \"";
   for(i=count ; i>=0 ; i--)
        {
        cout << buffer[i]; 
        }
   
   cout << "\" has " << count << " characters.";
   cout << endl;
   system("PAUSE");
   
   
}
