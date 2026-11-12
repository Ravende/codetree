#include <iostream>
#include <string>
#include <tuple>

using namespace std;

class SecretAgent {
    public:
        string code;
        char place;
        int time;

        SecretAgent(string code,char place, int time) {
            this->code = code;
            this->place = place;
            this->time = time;
        }
};

int main() {
    string secret_code;
    char meeting_point;
    int time;

    cin >> secret_code >> meeting_point >> time;

    // Please write your code here.
    SecretAgent s = SecretAgent(secret_code, meeting_point, time);

    cout << "secret code : " << s.code << endl;
    cout << "meeting point : " << s.place << endl;
    cout << "time : " << s.time << endl;

    return 0;
}