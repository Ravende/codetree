#include <iostream>
#include <string>
#include <tuple>

using namespace std;

int main() {
    string secret_code;
    char meeting_point;
    int time;

    cin >> secret_code >> meeting_point >> time;

    // Please write your code here.
    tuple<string, char, int> secretAgent = make_tuple(secret_code, meeting_point, time);
    string code;
    char place;
    int hour;
    tie(code, place, hour) = secretAgent;

    cout << "secret code : " << code << endl;
    cout << "meeting point : " << place << endl;
    cout << "time : " << hour << endl;

    return 0;
}