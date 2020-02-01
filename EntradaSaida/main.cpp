#include <iostream>

using namespace std;

int main()
{
    system("cls");
    
    cout << "Entrada e saida de dados" << endl << endl;

    int i;
    float f;
    char c, s[10];

    cout << "I = ";
    cin >> i;

    cout << "\n(C, F , S) = ";
    cin >> c >> f >> s;
    
    cout << "\nI = " << i << endl;
    cout << "(C, F, S) = (" << c << ", " << f << ", " << s << ")" << endl;

    return 0;
}