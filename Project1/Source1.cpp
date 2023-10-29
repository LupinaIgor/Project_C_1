#include <iostream>
using namespace std;
class Drib {
private:
    int chiselnik;
    int znamennik;

public:
    // Конструктор за замовчуванням
    Drib() {
        chiselnik = 0;
        znamennik = 1;
    }

    // Конструктор з параметрами 
    Drib(int chis, int znam)
    {
        chiselnik = chis;
        znamennik = znam;
    }
    // Метод доступу до чисельника та знаменника
    int GetChiselnik() {
        return chiselnik;
    }

    int GetZnamennik() {
        return znamennik;
    }

    void SetChiselnik(int chis) {
        chiselnik = chis;
    }

    void SetZnamennik(int znam) {
        if (znam != 0) {
            znamennik = znam;
        }
        else {
            cout << "Помилка: Знаменник не може бути рівним нулю" << endl;
        }
    }

    // Функція для виводу дробу
    void Print() {
        cout << chiselnik << "/" << znamennik;
    }
};



int main() {
    
    return 0;
}
