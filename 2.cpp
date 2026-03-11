#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout << "Введи оцінку: ";
    cin >> a;
    b = a/20;
    switch(b){
        case 1:
         cout << "Погано";
         break;
        case 2:
         cout << "Незадовільно";
         break;
        case 3:
         cout << "Задовільно";
         break;
        case 4:
         cout << "Добре";
         break;
        case 5:
         cout << "Відмінно";
         break;
    }
    return 0;
}