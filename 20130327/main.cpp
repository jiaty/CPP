#include <cstdlib>
#include <iostream>

using namespace std;
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    
    char a(0);
    
    cout << endl
         << "Enter a character:";
    cin  >> a;
    
    if((a == 'A')||(a == 'E')||(a == 'I')||(a == 'O')||(a == 'U')
       ||(a == 'a')||(a == 'e')||(a == 'i')||(a == 'o')||(a == 'u'))
       { cout << endl
             << "You enter a vowel." << endl;
             }
    else
    cout << endl
         << "Else." << endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
