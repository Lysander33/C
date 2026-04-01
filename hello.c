#include <stdio.h>

// 冒泡排序函数，优化版：如果一轮遍历中没有发生交换，则提前结束
void bubbleSort(int arr[], int n) {
    // 外层循环控制排序轮数，最多 n-1 轮
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0; // 标志这一轮是否发生了交换
        // 内层循环进行相邻元素比较和交换
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换元素，将较大的元素往后移
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // 标记发生了交换
            }
        }
        // 如果这一轮没有发生交换，说明数组已经有序，提前结束
        if (swapped == 0) {
            break;
        }
    }
}

int main() {
    // 初始化数组
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    // 计算数组长度
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // 输出排序前的数组
    printf("排序前: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // 调用冒泡排序函数
    bubbleSort(arr, n);
    
    // 输出排序后的数组
    printf("排序后: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}