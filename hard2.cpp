#include <iostream>
#include <string>

bool isPalindrome(const std::string& s) {
    int l = s.length();
    for (int i = 0, j = l - 1; i <= j; i++, j--) {
        if (s[i] != s[j]) {
            return false;
        }
    }
    return true;
}


int main() {
    std::string s = "BABABAA";
    int cnt = 0;
    int flag = 0;
    while (s.length() > 0) {
        if (isPalindrome(s)) {
            flag = 1;
            break;
        } else {
            cnt++;
       
            s = s.substr(0, s.length() - 1);
            
        }
    }
    
    if (flag == 1) {
        std::cout << cnt << std::endl;
    }

    return 0;
}
