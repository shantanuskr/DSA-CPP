#include<iostream>
using namespace std;

bool linearSearch(int arr[][4], int n, int m, int element){
    
     for ( int i= 0; i< n; i++){
        for ( int j = 0; j < m ; j++){
             if (arr[i][j] == element )
             return 1;
        }
    }

    return 0;
}

int main (){

    // int n, m;
    // cout << "Enter the no. of rows : ";
    // cin >> m;

    // cout << "\nEnter the no. of columns : ";
    // cin >> n;

    int arr[3][4];
    int key;

    cout << "Enter the elements of the array : "<< endl;


    for ( int i= 0; i< 3; i++){
        for ( int j = 0; j < 4 ; j++){
            cin >> arr[i][j];
        }
    }

    cout <<"\n Enter the element to be searched : ";
    cin >> key ;

    if (linearSearch(arr, 3, 4, key )){

        cout << "Element Found "<< endl;

    }
    else{
        cout << "Element Not Found "<< endl;

    }

    return 0;
}