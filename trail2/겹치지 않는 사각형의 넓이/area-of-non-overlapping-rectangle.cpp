#include <iostream>
#include <algorithm>
#define MAX 2001

using namespace std;

int x1[3], y1[3];
int x2[3], y2[3];
int plane[MAX][MAX];

void writeSquare(int xStart, int xEnd, int yStart, int yEnd, int num) {
    for (int x = xStart; x < xEnd; x++) {
        for (int y = yStart; y < yEnd; y++) {
            plane[x][y] = num;
        }
    }
}

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];

    // Please write your code here.
    for (int i = 0; i < 3; i++) {
        x1[i] += 1000;
        y1[i] += 1000;
        x2[i] += 1000;
        y2[i] += 1000;
    }

    for (int i = 0; i < 2; i++) {
        writeSquare(x1[i], x2[i], y1[i], y2[i], i + 1);
    }

    writeSquare(x1[2], x2[2], y1[2], y2[2], 0);

    int area = 0;
    for (int x = 0; x < MAX; x++) {
        for (int y = 0; y < MAX; y++) {
            if (plane[x][y] > 0) {
                area++;
            }
        }
    }
    cout << area << '\n';

    return 0;
}