#include <stdio.h>


void findMajority(int arr[], int n) {
    int flag = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = i; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
     
        if (count > n / 3) {
            printf("%d ", arr[i]);
            flag = 1;
        }
    }
   
    if (flag == 0)
        printf("No Majority Element\n");
}

int main() {
    int arr[] = {2, 2, 3, 1, 3, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
   
    findMajority(arr, n);

    return 0;
}
