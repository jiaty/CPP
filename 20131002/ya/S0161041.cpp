#include <iostream>
using std::cout;
using std::cin;
using std::endl;

struct STUDENT{
  int number;   
  char name[10];
  int score;   
};

int main(void){
    STUDENT classes[15];
    int counts=0;
    int maximan = 0;
    while(counts<15){
     cout << "��" <<counts+1 <<"��number: " ;
     cin >> classes[counts].number;
     if(classes[counts].number==0){
      counts--;
      break;
      }
     cout << "��" <<counts+1 <<"��name:";
     cin>>classes[counts].name;    
     cout << "��" <<counts+1 <<"��score: ";
     cin>>classes[counts].score;
     counts++;
    }
    
    for(int i=1;i<=counts;i++){
       if(classes[i].score > maximan){
       maximan = i;
     }
  }
  cout<<"The biggest data is followed"<<endl
      <<"number: " <<classes[maximan].number<<endl
      <<"name: "<<classes[maximan].name<<endl
      <<"score: "<<classes[maximan].score<<endl;
      
    system("pause");
    return 0;   
    
}
