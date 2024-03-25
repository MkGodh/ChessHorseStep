#include <iostream>
#include <string>
#include <Windows.h>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;
int main() {

    setlocale(LC_ALL, "RUS");
    float width;
    float height;

    std::cout << "Введите местоположение коня: \n";
    cin >> width;
    cin >> height;
    float widStep;
    float heiStep;
    cout << "Введите местоположение точки на доске: \n";
    cin >> widStep;
    cin >> heiStep;

    float wid = int(width * 10);
    float hei = int(height * 10);
    float wStep = int(widStep * 10);
    float hStep = int(heiStep * 10);

    if (wid > 7 || wid < 0 && hei > 7 || hei < 0) {
        std::cout << "Клетки с такой координатой не существует!";
    }
    std::cout << "Конь находится в клетке (" << wid << ", " << hei << ")" << " Точка в клетке (" << wStep << ", " << hStep << ")\n";

    while (wid != wStep && hei != hStep) {
        if (wid > 7 || wid < 0 && hei > 7 || hei < 0) {
            std::cout << "Клетки с такой координатой не существует!";
        } if (wid + 2 == wStep && hei + 1 == hStep || wid + 2 == wStep && hei - 1 == hStep || wid - 2 == wStep && hei + 1 == hStep || wid - 2 == wStep && hei - 1 == hStep) {
            cout << "Да, конь может ходить в эту точку!";
            break;
        }
        if (wid + 1 == wStep && hei + 2 == hStep || wid + 1 == wStep && hei - 2 == hStep || wid - 1 == wStep && hei - 2 == hStep || wid - 1 == wStep && hei + 2 == hStep) {
            cout << "Да, конь может ходить в эту точку!";
            break;
        }
        else {
            cout << "Конь не может ходить в эту клетку!";
            break;
        }

    }
    return 0;
}