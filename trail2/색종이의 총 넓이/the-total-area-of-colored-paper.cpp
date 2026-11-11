#include <iostream>
#define MAX 201

using namespace std;

int N;
int x[100], y[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
        x[i] += 100;
        y[i] += 100;
    }

    // Please write your code here.
    int plane[MAX][MAX] = {};
    for (int i = 0; i < N; i++) {
        for (int r = x[i]; r < x[i] + 8; r++) {
            for (int c = y[i]; c < y[i] + 8; c++) {
                plane[r][c] = 1;
            }
        }
    }

    int size = 0;
    for (int r = 0; r < MAX; r++) {
        for (int c = 0; c < MAX; c++) {
            if (plane[r][c])
                size++;
        }
    }
    cout << size << '\n';

    return 0;
}