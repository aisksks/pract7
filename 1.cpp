#include <iostream>
using namespace std;

int main(){
    int a; 
    cout << "Введи номер дня тижня: ";
    cin >> a;
    switch(a)
    {
        case 1:
         cout << "Понеділок";
         break;
        case 2:
         cout << "Вівторок";
         break;
        case 3:
         cout << "Середа";
         break;
        case 4:
         cout << "Четвер";
         break;
        case 5:
         cout << "Пятниця";
         break;
        case 6:
         cout << "Субота";
         break;
        case 7:
         cout << "Неділя";
         break;
        default:
         cout << "Помилка";
         break;
        }
    return 0;
}
