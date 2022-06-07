#include <iostream>
using namespace std;
void main()
{
    setlocale(LC_ALL, "Turkish");
    float delta, a, b, c, kok1, kok2;
    system("cls");
    cout << "x'in katsayısını girin: "; cin >> a;
    cout << "y'nin katsayısını girin: "; cin >> b;
    cout << "Sabit değeri girin: "; cin >> c;
    //delta formulu için pow= üs değeri*
    delta = pow(b, 2) - 4 * a * c;
    //deltanın 0'dan küçük olduğu zaman
    if (delta < 0)cout << "Reel kök yok";
    //deltanın 0'a eşit olduğu zaman
    else if (delta == 0)
    {
        kok1 = (-1 * b) / (2 * a);
        cout << "Sadece bir kök var: " << kok1;
    }
    //deltanın 0'dan büyük olduğu zaman
    else if (delta > 0)
    {
        kok1 = (-1 * b + sqrt(delta)) / (2 * a);
        kok2 = (-1 * b - sqrt(delta)) / (2 * a);
        cout << " 1.Kök: " << kok1;
        cout << " 2.Kök: " << kok2;
    }
}


