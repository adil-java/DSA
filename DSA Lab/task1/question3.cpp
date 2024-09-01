#include <iostream>
using namespace std;

class MedianFinder {
private:
    int* nums;
    int size;
    int capacity;
public:
    MedianFinder() {
        size = 0;
        capacity = 1;
        nums = new int[capacity];
    }
    ~MedianFinder() {
        delete[] nums;
    }
    void addNum(int num) {
        if (size == capacity) {
            int* temp = new int[capacity * 2];
            capacity *= 2;
            for (int i = 0; i < size; i++) {
                temp[i] = nums[i];
            }
            delete[] nums;
            nums = temp;
        }
        int i = size - 1;
        while (i >= 0 && nums[i] > num) {
            nums[i + 1] = nums[i];
            i--;
        }
        nums[i + 1] = num;
        size++;
    }
    double findMedian() {
        if (size % 2 == 0) {
            return (nums[size / 2 - 1] + nums[size / 2]) / 2.0;
        } else {
            return nums[size / 2];
        }
    }
};
int main() {
    MedianFinder medianFinder;
    medianFinder.addNum(1);
    medianFinder.addNum(2);
    cout << "Median after adding 1 and 2: " << medianFinder.findMedian() << endl;
    medianFinder.addNum(3);
    cout << "Median after adding 3: " << medianFinder.findMedian() << endl;
    return 0;
}
