#include <stdio.h>
#include <string.h>

int lengthOfLastWord(const char *s) {
    int length = 0;
    int n = strlen(s);

    for (int i = n - 1; i >= 0; i--) {
        if (s[i] != ' ') {
            length++;
        } else if (length > 0) {
            break;
        }
    }

    return length;
}

int main() {
    printf("%d\n", lengthOfLastWord("Hello World")); // prints 5
    return 0;
}
