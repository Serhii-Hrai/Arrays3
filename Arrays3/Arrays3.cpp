#include <iostream>
#include <string>
using namespace std;

struct XY {
    int x;
    char y;
};

int main()
{
    const int xMax = 8;
    const char yMax = 'I';
    XY Feld[xMax][yMax];

    for (int x = xMax - 1; x >= 0; x--) {
        for (char y = 'A'; y < yMax; y++) {
            Feld[x][y].x = x + 1;
            Feld[x][y].y = y;
            cout << Feld[x][y].y << Feld[x][y].x << " ";
        }
        cout << "\n";
    }
}