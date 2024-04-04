#include "header.h"
using namespace std;

void printarr(double a[], int size) { //Функция вывода массива на экран
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
}
void Creater()
{
    cout << "\nВсе работы выполнил: Гапеев Егор Евгеньевич 1бИТС1\n\n";
    system("pause");
}
void lab2_1()
{
    int BR1 = 7;
    int BR2 = 10;
    double p, t, w, L;
    double y1, y2, Ymin, Ymax;
    double q;
    cout << "Введите значение L: ";
    cin >> L;
    cout << "Введите переменную p: ";
    cin >> p;
    cout << "Введите переменную t: ";
    cin >> t;
    cout << "Введите переменную w: ";
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
    cout << "У1 = " << y1 << endl;
    cout << "У2 = " << y2 << endl;
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
}; //задание 2.1
void lab2_2() {
    int ret = 0, test = 0;
    do {

        int h, a, v, TrueNum = 0;
        int nMin = 15;
        int nMax = 27;
        test++;
        cout << "Тест № " << test << endl;
        cout << "Введите переменную h: ";
        cin >> h;
        cout << "Введите переменную a: ";
        cin >> a;
        cout << "Введите переменную v: ";
        cin >> v;
        cout << "Принято решение" << endl;
        if (h > nMin && h < nMax) {
            cout << "Переменная h = " << h << " входит в диапазон[" << nMin << " ; " << nMax << "]" << endl;
            TrueNum++;
        }
        if (a > nMin && a < nMax) {
            cout << "Переменная a = " << a << " входит в диапазон[" << nMin << " ; " << nMax << "]" << endl;
            TrueNum++;
        }
        if (v > nMin && v < nMax) {
            cout << "Переменная v = " << v << " входит в диапазон[" << nMin << " ; " << nMax << "]" << endl;
            TrueNum++;
        }
        if (TrueNum == 0) {
            cout << "ни одна переменная не вошла в диапазон" << endl;
        }
        else
        {
            cout << "Количество переменных вошедших в диапазон: " << TrueNum << endl;
        }
        cout << "Желаете продолжить?" << endl;
        cout << "1 - Да" << endl;
        cout << "0 - Нет" << endl;
        cout << "Ответ : ";
        cin >> ret;
    } while (ret == 1);
    cout << "Количество проведенных тестов: " << test << endl;
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
    const int N = 3; // Размер матрицы
    int matrix[N][N] = { {2, 1, 3}, {5, 6, 4}, {8, 7, 9} }; // Пример матрицы
    int max = matrix[0][0];
    int maxCount = 0;
    int L;

    // Ввод значения L
    cout << "Введите значение L: ";
    cin >> L;

    // Находим максимум и его количество
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

    // Проверяем условия и выполняем соответствующие действия
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
        cout << "Максимум находится на главной диагонали, но не в начале" << endl;
    }
    else if (maxCount == 1 && max < L) {
        cout << "Максимум меньше L" << endl;
    }
    else {
        cout << "Максимум не уникален" << endl;
    }
    cout << "Количество найденных повторений максимума: " << maxCount << endl;
    system("pause");
}
void FirstMenu() {
    Uchar ch1 = 0;
    do {
        system("cls");
        cout << "   Меню первого семестра:\n";
        cout << "1) задание 2.1" << endl;
        cout << "2) задание 2.2" << endl;
        /*cout << "3) задание 3.1" << endl;
        cout << "4) задание 3.2" << endl;*/
        cout << "5) задание 4" << endl;
        cout << "Esc для того чтобы вернуться" << endl;
        cout << "Выберите пункт меню" << endl;

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
