#include<iostream>
using namespace std;

void bubblesort(int arr[], int n){
    
    for ( int i = 0; i < n - 1; i++ ){
        
        for ( int j = 0; j <n - i - 1 ; j++ ){

            if ( arr[j] > arr[j + 1])
            swap(arr[j], arr[j + 1]);

        }
        
    }
      
}
int main (){

   cout << "Enter the no. of element : ";
   int n;
   cin >> n;

   int arr[n];

   cout << "Enter "<< n << " elements : ";

   for ( int i = 0 ; i< n ; i++){

        cin >> arr[i];
   }

    bubblesort( arr, n);
    
    cout << "\n The sorted array is : ";
    for ( int i = 0 ; i < n ; i++ ){
        cout << arr[i] << " ";
    }

    return 0 ;

}