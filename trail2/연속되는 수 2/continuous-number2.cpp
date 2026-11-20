#include <iostream>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;

    // Please write your code here.
    int cnt = 0;
    int max = 0;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if (i == 0 || arr[i] != arr[i - 1]) {
            if (max < cnt)
                max = cnt;
            cnt = 1;
        } else{
            cnt++;
        }
    }
    if (max < cnt)
        max = cnt;

    cout << max << '\n';

    return 0;
}