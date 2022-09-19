#include <iostream>
#include <math.h>
#include <Windows.h>
#include <algorithm>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    bool x[6];

    cout << "Введіть випадкові числа:\n";
    for (int i = 0; i < 6; i++)
    {
        cin >> x[i];
    }

    bool Ad[12];
    bool Ak[12];

    cout << "Перша частина:\n";

    Ad[0] = x[0] || x[1];
    Ak[0] = x[0] && x[1];

    Ad[1] = x[2] || x[3];
    Ak[1] = x[2] && x[3];

    Ad[2] = x[4] || x[5];
    Ak[2] = x[4] && x[5];

    Ad[3] = Ad[0] || Ad[1];
    Ak[3] = Ad[0] && Ad[1];

    Ad[4] = Ak[0] || Ad[2];
    Ak[4] = Ak[0] && Ad[2];

    Ad[5] = Ak[1] || Ak[2];
    Ak[5] = Ak[1] && Ak[2];

    Ad[6] = Ad[3] || Ad[4];
    Ak[6] = Ad[3] && Ad[4];

    Ad[7] = Ak[3] || Ad[5];
    Ak[7] = Ak[3] && Ad[5];

    Ad[8] = Ak[4] || Ak[5];
    Ak[8] = Ak[4] && Ak[5];

    Ad[9] = Ak[6] || Ad[7];
    Ak[9] = Ak[6] && Ad[7];

    Ad[10] = Ak[7] || Ad[8];
    Ak[10] = Ak[7] && Ad[8];

    Ad[11] = Ak[9] || Ad[10];
    Ak[11] = Ak[9] && Ad[10];

    x[0] = Ad[6];
    x[1] = Ad[9];
    x[2] = Ad[11];
    x[3] = Ak[11];
    x[4] = Ak[10];
    x[5] = Ak[8];

    for (int i = 0; i < 6; i++) {
        cout << x[i]<< " ";
    }
    cout << endl;

    bool k[6];

    cout << "Друга частина:\n";

    int n = sizeof(x) / sizeof(x[0]);
    reverse(x,x + n);

    k[0] = 0 ^ x[0];
    k[1] = x[0] ^ x[1];
    k[2] = x[1] ^ x[2];
    k[3] = x[2] ^ x[3];
    k[4] = x[3] ^ x[4];
    k[5] = x[4] ^ x[5];

    for (int i = 0; i < 6; i++) {
        cout << k[i] << " ";
    }
    cout << endl;

    int y[3];

    cout << "Третя частина:\n";

    y[0] = k[0] || k[1] || k[2];
    y[1] = k[0] || k[4] || k[3];
    y[2] = k[3] || k[1] || k[5];

    for (int i = 0; i < 3; i++) {
        cout << y[i] << " ";
    }
    cout << endl;

    cout << "FHfsdjfdsif";
}