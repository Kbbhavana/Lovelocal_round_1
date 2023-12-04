#include <iostream>
#include <vector>
#include <queue>

class Pair {
public:
    int value;
    int index;
    Pair(int val, int idx) : value(val), index(idx) {}
};

class ComparePairs {
public:
    bool operator()(const Pair& a, const Pair& b) {
        return b.value < a.value;
    }
};

std::vector<int> maxSlidingWindow(int arr[], int n, int k) {
    std::vector<int> ans;
    std::priority_queue<Pair, std::vector<Pair>, ComparePairs> heap;

    for (int i = 0; i < k; i++) {
        heap.push(Pair(arr[i], i));
    }

    ans.push_back(heap.top().value);

    
    for (int i = k; i < n; i++) {
        heap.push(Pair(arr[i], i));

        while (heap.top().index <= i - k) {
            heap.pop();
        }

        ans.push_back(heap.top().value);
    }

    return ans;
}

int main() {
    int arr[] = {2, 3, 7, 9, 5, 1, 6, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    std::vector<int> result = maxSlidingWindow(arr, n, k);

    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}
