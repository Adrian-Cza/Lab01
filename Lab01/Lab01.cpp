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
            "*       *    ****" << endl << endl;
}

void Zad2() {
    cout << "        *      " << endl <<
            "       ***     " << endl <<
            "  * ********* *" << endl <<
            "    *********  " << endl <<
            "     *******   " << endl <<
            "    ***   ***  " << endl <<
            "   **       ** " << endl << endl;

}

void Zad3() {
    cout << "-----------LISTA OBECNOSCI------------" << endl <<
            "______________________________________" << endl <<
            " NR |     IMIE     |     NAZWISKO     |" << endl <<
            "--------------------------------------" << endl <<
            "  1 |    ALICJA    |       BAK        |" << endl <<
            "--------------------------------------" << endl <<
            "  2 |    FRANEK    |       DOM        |" << endl <<
            "--------------------------------------" << endl <<
            "  3 |    WOJTEK    |      KRZAK       |" << endl <<
            "--------------------------------------" << endl << endl;
}

int main()
{
    int numeracja = 1;
    Numer(numeracja);
    Zad1();
    numeracja++;

    Numer(numeracja);
    Zad2();
    numeracja++;

    Numer(numeracja);
    Zad3();
    numeracja++;
}
