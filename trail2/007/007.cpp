#include <iostream>
#include <string>

using namespace std;

struct SecretAgent {
    string code;
    char place;
    int time;
};

int main() {
    string secret_code;
    char meeting_point;
    int time;

    cin >> secret_code >> meeting_point >> time;

    // Please write your code here.
    SecretAgent s{secret_code, meeting_point, time};
    cout << "secret code : " << s.code << endl;
    cout << "meeting point : " << s.place << endl;
    cout << "time : " << s.time << endl;

    return 0;
}