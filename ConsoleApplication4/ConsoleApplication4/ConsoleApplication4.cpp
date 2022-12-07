
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");

    int b[100];
    int a[100];
    int i, n, j, k, dobutok, suma;

    cout << "Введiть кiлькiсть елементiв для множення: ";
    cin >> n;

    cout << "Введення елементiв: \n";
    for (i = 0; i < n; i++)
        cin >> a[i];

    dobutok = 1;
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
            dobutok = dobutok * a[i];
    }

    cout << "Добуток = " << dobutok << '\n' << '\n';
    
    cout << "Введiть кiлькiсть елементiв для додавання: ";
    cin >> k;

    cout << "Введення елементiв: \n";
    for (j = 0; j < k; j++)
        cin >> b[j];

    suma = 0;
    for (j=0;j<k;j++)
    {
        if (b[j] < 0);
        suma = suma + b[j];
    }
    cout << "Доданок = " << suma << '\n' << '\n';

    if (dobutok == suma)
        cout << dobutok << "=" << suma << '\n';

    if (dobutok < suma)
        cout << dobutok << "<" << suma << '\n';

    if (dobutok > suma)
        cout << dobutok << ">" << suma << '\n';
   
}

