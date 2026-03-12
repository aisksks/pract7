#include <iostream>
using namespace std;
int choice;
double rad; 
double st;
double heigh;
int main(){
        cout << "\nВибери фігуру:\n";
        cout << "1 - Квадрат\n";
        cout << "2 - Коло\n";
        cout << "3 - Трикутник\n";
        cout << "Ввебери число: ";
        cin >> choice;

        switch(choice){
        case 1:
         cout << "Введи сторони квадрату: ";
         cin >> st;
         cout << "Площа: " << st * st;
         break;
        case 2:
         cout << "Введи радіус кола: ";
         cin >> rad;
         cout << "Площа: " << rad*rad * 3,14;
         break;
        case 3:
         cout << "Введи основу та висоту трикутника: ";
         cin >> st >> heigh;
         cout << "Площа: " << st * heigh * 0.5;
         break;
        }
    return 0;
}