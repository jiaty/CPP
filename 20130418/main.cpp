#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char *argv[])
{
    const int NUMBER(20);
    long n[ NUMBER ];
    int c(2);
    char d('y');
    int x;
    char k('n');
    
    cout << endl << "Please enter the first number:" << endl;
    cin >> n[1];

    
    while(('y' == d || 'Y' == d) && (c < NUMBER))
    {

           cout << endl << "Please enter another number:" << endl;
           cin >> x;
           for(int i=1;i<=c;i++)
           {
               if(n[i] == x)
               {
                cout << "This had been entered!"<< endl
                << "Please enter \"y\" to try again!"
                << endl;
                cin >> d;
               }
               else
               {
                n[c]=x;
                c++;  
               }
                            }
                            
           cout << "If you want to enter another number"
                << endl <<"Please enter \"y\" to continue"
                << endl <<"If not, please enter\"n\""
                << endl;
           cin >> d;
           
           }
     for(int a=1;a<=c;a++)
     {
      cout << endl
           << "The number you entered are:"
           << endl
           << setw(4) << "(" << a << ")"
           << n[ a ]
           <<endl;
             }      
           
      
    
    
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
