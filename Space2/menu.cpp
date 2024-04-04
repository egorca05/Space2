#include "header.h"
using namespace std;

void printarr(double a[], int size) { //������� ������ ������� �� �����
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
}
void Creater()
{
    cout << "\n��� ������ ��������: ������ ���� ���������� 1����1\n\n";
    system("pause");
}
void lab2_1()
{
    int BR1 = 7;
    int BR2 = 10;
    double p, t, w, L;
    double y1, y2, Ymin, Ymax;
    double q;
    cout << "������� �������� L: ";
    cin >> L;
    cout << "������� ���������� p: ";
    cin >> p;
    cout << "������� ���������� t: ";
    cin >> t;
    cout << "������� ���������� w: ";
    cin >> w;
    if (BR1 < L and L < BR2)
    {
        y1 = p + 5 * t;
        y2 = 2 * t + 3 * p;
    }
    else
    {
        y1 = w + 0.5 * t;
        y2 = t + 0.7 * w;
    }
    cout << "�1 = " << y1 << endl;
    cout << "�2 = " << y2 << endl;
    if (y1 < y2)
    {
        Ymin = y1;
        Ymax = y2;
    }
    else
    {
        Ymin = y2;
        Ymax = y1;
    }
    q = pow(Ymin, 2) - sqrt(abs(Ymax));
    cout << "q = " << q << endl;
    system("pause");
}; //������� 2.1
void lab2_2() {
    int ret = 0, test = 0;
    do {

        int h, a, v, TrueNum = 0;
        int nMin = 15;
        int nMax = 27;
        test++;
        cout << "���� � " << test << endl;
        cout << "������� ���������� h: ";
        cin >> h;
        cout << "������� ���������� a: ";
        cin >> a;
        cout << "������� ���������� v: ";
        cin >> v;
        cout << "������� �������" << endl;
        if (h > nMin && h < nMax) {
            cout << "���������� h = " << h << " ������ � ��������[" << nMin << " ; " << nMax << "]" << endl;
            TrueNum++;
        }
        if (a > nMin && a < nMax) {
            cout << "���������� a = " << a << " ������ � ��������[" << nMin << " ; " << nMax << "]" << endl;
            TrueNum++;
        }
        if (v > nMin && v < nMax) {
            cout << "���������� v = " << v << " ������ � ��������[" << nMin << " ; " << nMax << "]" << endl;
            TrueNum++;
        }
        if (TrueNum == 0) {
            cout << "�� ���� ���������� �� ����� � ��������" << endl;
        }
        else
        {
            cout << "���������� ���������� �������� � ��������: " << TrueNum << endl;
        }
        cout << "������� ����������?" << endl;
        cout << "1 - ��" << endl;
        cout << "0 - ���" << endl;
        cout << "����� : ";
        cin >> ret;
    } while (ret == 1);
    cout << "���������� ����������� ������: " << test << endl;
    system("pause");
}
//void lab3_1() {
//    
//    system("pause");
//}
//void lab3_2() {
//    
//}
void lab4() {
    const int N = 3; // ������ �������
    int matrix[N][N] = { {2, 1, 3}, {5, 6, 4}, {8, 7, 9} }; // ������ �������
    int max = matrix[0][0];
    int maxCount = 0;
    int L;

    // ���� �������� L
    cout << "������� �������� L: ";
    cin >> L;

    // ������� �������� � ��� ����������
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                maxCount = 1;
            }
            else if (matrix[i][j] == max) {
                maxCount++;
            }
        }
    }

    // ��������� ������� � ��������� ��������������� ��������
    if (maxCount == 1 && max > L && matrix[0][0] == max) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (matrix[i][j] != max) {
                    matrix[i][j] /= max;
                }
            }
        }
    }
    else if (maxCount == 1 && max > L && matrix[0][0] != max) {
        cout << "�������� ��������� �� ������� ���������, �� �� � ������" << endl;
    }
    else if (maxCount == 1 && max < L) {
        cout << "�������� ������ L" << endl;
    }
    else {
        cout << "�������� �� ��������" << endl;
    }
    cout << "���������� ��������� ���������� ���������: " << maxCount << endl;
    system("pause");
}
void FirstMenu() {
    Uchar ch1 = 0;
    do {
        system("cls");
        cout << "   ���� ������� ��������:\n";
        cout << "1) ������� 2.1" << endl;
        cout << "2) ������� 2.2" << endl;
        /*cout << "3) ������� 3.1" << endl;
        cout << "4) ������� 3.2" << endl;*/
        cout << "5) ������� 4" << endl;
        cout << "Esc ��� ���� ����� ���������" << endl;
        cout << "�������� ����� ����" << endl;

        ch1 = _getch();
        switch (ch1) {
        case '1':
            system("cls");
            lab2_1();
            cout << endl; break;
        case '2':
            system("cls");
            lab2_2();
            cout << endl; break;
            /*case '3':
                system("cls");
                lab3_1();
                cout << endl; break;
            case '4':
                system("cls");
                lab3_2();
                cout << endl; break;*/
        case '5':
            system("cls");
            lab4();
            cout << endl; break;
        case '0':
            break;
        }
    } while (ch1 != 27);
    //system("pause");
}
