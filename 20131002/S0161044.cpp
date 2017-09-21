#include <cstdlib>
#include <iostream>

using namespace std;

struct student{             //定義struct 
       int number;
       char name[10];
       int score;
       };

int main(int argc, char *argv[])     //輸入編號,名字,分數 輸入0就結束輸入 
{
    student classs[15];        //用陣列儲存輸入的資料 
    int count=0;
    int choose1=1;
    int choose2=1;
    
    cout<< "Enter 15 students' number, name, and score."<<endl
        << "Enter any number to continue or 0 to stop"<<endl;
    cin>> choose1;
    
    if(choose1!=0){
    
    while(choose2!=0 && count<15)     //結束輸入的條件1.輸入0 2.輸入超過15筆資料     
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
            
            
    int max = 0;     //找最大的score值,輸入其number 
    
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
