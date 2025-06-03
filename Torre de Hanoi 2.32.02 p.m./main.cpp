#include <iostream>
using namespace std;

void towerOfHanoi(int n, char s_rod, char d_rod, char a_rod)
{
    if (n == 1) {
        cout << "Mover disco 1 del poste " << s_rod
             << " al poste " << d_rod << endl;
        return;
    }

    towerOfHanoi(n - 1, s_rod, a_rod, d_rod);

    cout << "Mover disco " << n << " del poste " << s_rod
         << " al poste " << d_rod << endl;

    towerOfHanoi(n - 1, a_rod, d_rod, s_rod);
}

int main()
{
    int n;
    cout << "Ingresa el número de discos: ";
    cin >> n;

    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
