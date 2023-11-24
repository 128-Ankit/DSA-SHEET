#include<iostream>
#include<limits.h>
using namespace std;
int maxMinSum(int arr[], int size){
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << "Max_Element is: " << max << endl;
    cout << "Min_Element is: " << min << endl;
    int sum = max + min;
    return sum;
}

int main(){
    int arr [] = {1,5,6,9,11,2,3,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = maxMinSum(arr, size);
    cout << "Sum of max_Element and min_Element is: " << sum ;
}