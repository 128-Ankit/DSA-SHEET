#include<iostream>
using namespace std;
void reverseArray(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "After reverse: [ " ;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Before reverse: [ " ;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
    reverseArray(arr,size);
}