#include<iostream>
using namespace std;
// this program has been made with the intent to find the first and last occurance of any number in any
// array , the problem I am facing is calc of the value of mid for index 1 ( if key < arr[mid])i.e. it becomes 0, 
// but it should become 1;

// solve ho gya end me // happy
int firstocc( int arr[], int n , int key){
    int s = 0, end = n-1;
    int mid = (s + end )/2;
    int ans = -1;

    while( end >= s){
        if ( arr[mid] == key ) {
            ans = mid;
            end = mid - 1;
        }
        else if ( key < arr[mid]){
            end = mid - 1;

        }
         else if ( key > arr[mid]){
            s = mid + 1;

        }

        mid = s + (end - s)/2;
    }

    return ans;
}

int lastocc( int arr[], int n , int key){
    int s = 0, end = n-1;
    int mid = (s + end )/2;
    int ans = -1;

    while( end >= s){
        if ( arr[mid] == key ) {
            ans = mid;
            s = mid + 1;
        }
        else if ( key < arr[mid]){
            end = mid - 1;

        }
         else if ( key > arr[mid]){
            s = mid + 1;

        }

        mid = s + (end - s)/2;
    }

    return ans;
}
int main (){

    int even[5] = { 1, 2, 5, 4, 5};
     cout << "First occurance of 5 is @ index : " << firstocc(even, 5, 5);
    cout << "\nLast occurance of 5 is @ index : " << lastocc(even, 5, 5);

    return 0; 

    }