#include <iostream>
#include <string>

using namespace std;

class SecretAgent {
    public: 
        string code; 
        char place; 
        int time;

        SecretAgent(string code, char place, int time) {
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
    SecretAgent secretAgent = SecretAgent(secret_code, meeting_point, time);
    cout << "secret code : " << secretAgent.code << endl;
    cout << "meeting point : " << secretAgent.place << endl;
    cout << "time : " << secretAgent.time << endl;

    return 0;
}