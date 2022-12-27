/**================================================================================================
 * *                                           INFO
 *  Autore    : Francesco Pio Nocerino
 *  @email    : kekko.dev16@gmail.com
 *  File      : main.cpp
 *  Versione  : 1.0
 *  Data      : 23/12/2022
 *  Descr     :
 * ?
 *================================================================================================**/
#include <iostream>
using namespace std;

int main()
{
    int l;
    cout << "Inserisci Lato > ";
    cin >> l;
    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}