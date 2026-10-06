#include <iostream>
#include <string>

using namespace std;

void Numer(int x) {
    cout << "****************************************" << endl <<
        "*                                      *" << endl <<
        "*                ZAD " << x << "                 *" << endl <<
        "*                                      *" << endl <<
        "**************************************** \n" << endl;
}

void Zad1() {
    cout << "    *        ****" << endl <<
            "   * *      *    " << endl <<
            "  *****    *     " << endl <<
            " *     *    *    " << endl <<
            "*       *    ****" << endl;
}

int main()
{
    int numeracja = 1;
    Numer(numeracja);
    Zad1();
    numeracja++;


}
