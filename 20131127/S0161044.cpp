#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string sentence, reverse;   /* ���ͨ��string���O�Ψ��x�s�ϥΪ̿�J��string�M����᪺string */
    int count;                  /* �Ψ��x�sstring������ */ 
    int n = 0;                  /* �p����઺���� */ 
    
    cout << "Enter a sentence: (press ENTER to finish)" <<endl; 
    getline(cin, sentence, '\n');                            /* sting�i�H�]�t�ťժ���J */ 
    cout << "The sentence is:" << endl << sentence <<endl;
    count = sentence.length();                               /* �Dsentence������ */ 
    reverse = sentence;                                      /* ���T�wreverse������ */ 
    for(int i = count-1; i >= 0; i--){
            reverse.at(n) = sentence.at(i); /* ��reverse�Ĥ@�Ӧ�m���r������sentence�̫�@�Ӧ�m���r�� */ 
            n++;                            /* ���U�Ӱ�reverse�U�@�Ӧr�� */  
            if(n == count) break;           /* ��reverse�̭�count�ӼƳ��������ɭԸ��X�j�� */ 
    }
    cout << "The reversed sentence is:" << endl << reverse << endl;  /* ��X����᪺�y�l */ 
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
