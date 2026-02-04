#include <iostream>
using namespace std;

void findleaders(int arr[], int n) {
    int maxright = arr[n-1];

    cout << "leaders are : " << maxright << " ";

    for(int i = n - 2 ; i >= 0 ; i--)
    {
        if(arr[i] > maxright) {
            cout << arr[i] << " ";
            maxright = arr[i];
        }   
    }
}

int main() {
    int arr[] = { 16 , 17 , 4 , 3 , 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);


    findleaders(arr, n);  
    
    return 0;
}