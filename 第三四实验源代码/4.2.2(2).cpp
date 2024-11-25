#include <iostream>
#include <cctype>
using namespace std;
int parseHex(const char* const hexString) {
    int a = 0;
    int length = strlen(hexString);
    for (int i = 0; i < length; ++i) {
        char b = hexString[i];
        if (isdigit(b)) {
            a = a * 16 + (b - '0');
        }
        else if (isalpha(b)) {
            b = tolower(b);
            a = a * 16 + (a - 'a' + 10);
        }
    }
    return a;
}

int main() {
    const char* hexString = "A5";
    int c = parseHex(hexString);
    cout << "ʮ�������� " << hexString << " ת��Ϊʮ�������ǣ� " << c << endl;

    return 0;
}
