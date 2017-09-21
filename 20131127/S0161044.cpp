#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string sentence, reverse;   /* 產生兩個string分別用來儲存使用者輸入的string和反轉後的string */
    int count;                  /* 用來儲存string的長度 */ 
    int n = 0;                  /* 計算反轉的順序 */ 
    
    cout << "Enter a sentence: (press ENTER to finish)" <<endl; 
    getline(cin, sentence, '\n');                            /* sting可以包含空白的輸入 */ 
    cout << "The sentence is:" << endl << sentence <<endl;
    count = sentence.length();                               /* 求sentence的長度 */ 
    reverse = sentence;                                      /* 先固定reverse的長度 */ 
    for(int i = count-1; i >= 0; i--){
            reverse.at(n) = sentence.at(i); /* 使reverse第一個位置的字元等於sentence最後一個位置的字元 */ 
            n++;                            /* 接下來做reverse下一個字元 */  
            if(n == count) break;           /* 當reverse裡面count個數都做完的時候跳出迴圈 */ 
    }
    cout << "The reversed sentence is:" << endl << reverse << endl;  /* 輸出反轉後的句子 */ 
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
