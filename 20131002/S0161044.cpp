#include <cstdlib>
#include <iostream>

using namespace std;

struct student{             //�w�qstruct 
       int number;
       char name[10];
       int score;
       };

int main(int argc, char *argv[])     //��J�s��,�W�r,���� ��J0�N������J 
{
    student classs[15];        //�ΰ}�C�x�s��J����� 
    int count=0;
    int choose1=1;
    int choose2=1;
    
    cout<< "Enter 15 students' number, name, and score."<<endl
        << "Enter any number to continue or 0 to stop"<<endl;
    cin>> choose1;
    
    if(choose1!=0){
    
    while(choose2!=0 && count<15)     //������J������1.��J0 2.��J�W�L15�����     
    {
    cout<<"NUMBER "<<count+1<<": ";
    cin>> classs[count].number;
    
    if(classs[count].number == 0){count--; break;}
    
    cout<<"NAME "<<count+1<<": ";
    cin>> classs[count].name;
    cout<<"SCORE "<<count+1<<": ";
    cin>> classs[count].score;
    count++;
    
    cout<<"Enter any key to continue or 0 to stop"<<endl;
    cin>>choose2;
            }
            
            
    int max = 0;     //��̤j��score��,��J��number 
    
    for(int i =1; i<=count; i++)
    {
         if(classs[i].score < max)
         {
         max = i;
         }
    }
         
    cout<<"The max :"<<endl
        <<"NUMBER : "
        <<classs[max].number<<endl
        <<"NAME : "
        <<classs[max].name<<endl
        <<"SCORE : "
        <<classs[max].score<<endl;

}
    system("PAUSE");             
    return EXIT_SUCCESS;
}
