#include <iostream>
using namespace std;
class Drib {
private:
    int chiselnik;
    int znamennik;

public:
    // ����������� �� �������������
    Drib() {
        chiselnik = 0;
        znamennik = 1;
    }

    // ����������� � ����������� 
    Drib(int chis, int znam)
    {
        chiselnik = chis;
        znamennik = znam;
    }
    // ����� ������� �� ���������� �� ����������
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
            cout << "�������: ��������� �� ���� ���� ����� ����" << endl;
        }
    }

    // ������� ��� ������ �����
    void Print() {
        cout << chiselnik << "/" << znamennik;
    }
};



int main() {
    
    return 0;
}
