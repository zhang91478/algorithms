//
// Created by bsz on 2018/11/15.
//

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

/**
 * --------插入排序--------
 * -----------------------
 * 时间复杂度：o(n²)
 * 空间复杂度：o(1)
 * 伪代码：
 * for j = 2 to A.length
 *     key = A[j]
 *     //Insert A[j] into the sorted sequence A[1..j-1]
 *     i = j - 1;
 *     while i > 0 and A[i] > key
 *         A[i+1] = A[i]
 *         i = i - 1
 *     A[i+1] = key
 */
void sort(int [],int);
int main(){
    int A[6] = {5,2,4,6,1,3};
    sort(A,6);
    for (int i : A) {
        cout<< i <<" ";
    }
    cout << endl;
    return 0;
}
void sort(int A[],int length){
    //j是待排序列最小标号
    for (int j = 1; j < length; ++j) {
        int key = A[j]; // 获得将要插入的值
        int i = j -1; //从已排序序列最后一位开始比较
        while ( i>=0 && A[i] > key){
            int temp = A[i+1];
            A[i+1] = A[i];
            A[i] = temp;
            i = i - 1;
        }
    }
}


