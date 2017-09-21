#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char *argv[])
{
    const int NUMBER(20);
    long n[ NUMBER ];
    int c(0);
    char d('y');
    int x;
    int i(0);

    
    cout << endl << "Please enter the first number:" << endl;
    cin >> n[0];

    
    while(('y' == d || 'Y' == d) && (c < NUMBER))
    {
           bool t(true);

           cout << endl << "Please enter another number:" << endl;
           cin >> x;
           for(i=0;i<=c;i++)
           {
               if(n[i] == x)
               {
                t = false;
                cout << "This had been entered!"<< endl
                << "Please enter \"y\" to try again!"
                << endl;
                cin >> d;
               }
              
               }
               if(t != false)
               {
                c++;
                n[c]=x;   
                            }
                            
           cout << "If you want to enter another number"
                << endl <<"Please enter \"y\" to continue"
                << endl <<"If not, please enter\"n\""
                << endl;
           cin >> d;
           
           }
     for(int a=0;a<=c;a++)
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
