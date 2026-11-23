#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int n;
int nums[100];

void Print(const int numbers[]) {
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << ' ';
    }
    cout << '\n';
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Please write your code here.
    // 오름차순 정렬
    sort(nums, nums + n);
    Print(nums);

    // 내림차순 정렬
    sort(nums, nums + n, greater<int>());
    Print(nums);

    return 0;
}
