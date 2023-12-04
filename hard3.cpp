#include <iostream>
#include <string>

class GFG {
public:
    static int countDigitOne(int n) {
        int countr = 0;
        for (int i = 1; i <= n; i++) {
            std::string str = std::to_string(i);
            countr += countOccurrences(str, '1');
        }
        return countr;
    }

    static int countOccurrences(const std::string& str, char target) {
        int count = 0;
        for (char c : str) {
            if (c == target) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    int n = 13;
    std::cout << GFG::countDigitOne(n) << std::endl;
    n = 131;
    std::cout << GFG::countDigitOne(n) << std::endl;
    n = 159;
    std::cout << GFG::countDigitOne(n) << std::endl;

    return 0;
}
