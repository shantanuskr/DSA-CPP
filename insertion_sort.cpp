#include<iostream>
using namespace std;

void ins_sort( int arr[], int n){

    for( int i = 1 ; i < n; i++ ){
        int temp = arr[i] ;
        int j = i -1;
        
        while ( j >= 0 && temp  < arr[j]){

            arr[j + 1] = arr[ j ];
             j--;

        }
        arr[j + 1] = temp;
    }
}


int main(){

    int n;
    cout << " Enter the no. of elements : ";
    cin >> n;
    int arr[n];
    cout << "\n Enter " << n << "elements : ";
    for ( int i = 0 ; i < n; i++ ){

        cin >> arr[i];
    }
    // int arr[ 5 ] = { 3, 1, 5, 2, 0};
    ins_sort( arr, );


    for ( int i = 0 ; i < 5 ; i++ ){
        cout << arr[i] << " " ;
    }
    return 0;
}