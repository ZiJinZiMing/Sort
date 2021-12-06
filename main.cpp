#include <iostream>
#include <vector>
#include <spdlog/spdlog.h>
#include <sstream>
#include <MyMath.h>

using namespace std;

void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}


void BubbleSort(vector<int> &arr) {
    int len = arr.size();
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void SelectSort(vector<int> &arr) {
    int len = arr.size();
    int index = 0;
    for (int i = 0; i < len - 1; ++i) {
        index = i;
        for (int j = i + 1; j < len; ++j) {
            if (arr[j] > arr[index]) {
                index = j;
            }
        }
        if (index != i) {
            swap(arr[i], arr[index]);
        }
    }
}


void InsertSort(vector<int> &arr) {
    int len = arr.size();
    int n = 0;
    for (int i = 1; i < len; ++i) {
        n = arr[i];
        int j;
        for (j = i - 1; j >= 0; --j) {
            if (arr[j] > n) {
                arr[j + 1] = arr[j];
            } else {
                break;
            }
        }
        arr[j + 1] = n;
    }
}


void ShellSort(vector<int> &arr) {
    int gap, i, j;
    auto len = arr.size();
    for (gap = len >> 1; gap > 0; gap >>= 1) {
        for (i = gap; i < len; ++i) {
            auto t = arr[i];
            for (j = i - gap; j >= 0 && arr[j] < t; j -= gap) {
                swap(arr[j], arr[j + gap]);
            }
            arr[j + gap] = t;
        }
    }
}

void MergeSort(vector<int> &arr) {
    auto *a = &arr;
    auto *b = new vector<int>(arr.size());



    delete b;
}


void showArr(const vector<int> &arr) {
    stringstream ss;
    for (auto i: arr) {
        ss << i << ",";
    }
    SPDLOG_INFO(ss.str());
}

int main() {

    SayHello();

    vector<int> arr;
    srand((unsigned int) time(nullptr));
    for (int i = 0; i < 10; ++i) {
        arr.push_back(rand() % 100);
    }
    showArr(arr);
    SPDLOG_INFO("-------------------");
    BubbleSort(arr);
    showArr(arr);

    SelectSort(arr);
    showArr(arr);

    InsertSort(arr);
    showArr(arr);

    ShellSort(arr);
    showArr(arr);



    return 0;
}
