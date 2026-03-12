#include <iostream>
using namespace std;
int choice = -1;
double total = 0;
int main() {
    while(choice != 0) {
        cout << "\nМеню:\n";
        cout << "1 - Піца (120 грн)\n";
        cout << "2 - Бургер (80 грн)\n";
        cout << "3 - Кола (30 грн)\n";
        cout << "4 - Картопля фрі (50 грн)\n";
        cout << "0 - Завершити замовлення\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        switch(choice) {
            case 1:
                total += 120;
                break;
            case 2:
                total += 80;
                break;
            case 3:
                total += 30;
                break;
            case 4:
                total += 50;
                break;
            case 0:
                break;
            default:
                cout << "Невірний вибір\n";
        }
    }
    cout << "Загальна сума: " << total << " грн";
    return 0;
}