
#include <iostream>
#include <cctype>
using namespace std;
void count(const char s[], int counts[]) {
    // 初始化 counts 数组
    for (int i = 0; i < 26; i++) {
        counts[i] = 0;
    }

    for (int i = 0; s[i] != '\0'; i++) { 
        char c = tolower(s[i]);  // 将字符转换为小写，小写函数tolower（又学一个新知识）
        if (isalpha(c)) {  // 判断是否为字母，严谨一点
            counts[c - 'a']++;
        }
    }
}

int main() {
    const int size = 1000; 
    char str[size];

    cout << "Enter a string: ";
    cin >> str;


    int counts[26];
    count(str, counts);  

    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            char c = 'a' + i;  
            cout << static_cast<char>(c) << ": " << counts[i] << " times " << endl;
        }
    }

    return 0;
}