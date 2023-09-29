#include<iostream> 
using namespace std;




int   binarysearch( int a[], int s, int e, int key){
     int start = s;
    int  end   = e;
    

    while ( start <= end ){

        int mid   = (start + end )/ 2;
        
        if ( key == a[mid]){
            cout << "Element found at index : " << mid << endl;
            return mid;
        }
         if ( key > a[mid] ){
            start = mid + 1;
            // cout << "Hii" << endl;
        }
        else {
            end = mid - 1; 
            // cout << "Bye"<< endl;
        }
       
        
    }

    cout << "Element not found"<< endl;
    return 1;
}


 int getPivot( int arr[], int n){
    int s = 0;
    int e = n-1;
   

    while ( s < e){

         int mid = s + ( e - s)/2;

        if ( arr[mid ] >= arr[0]){

            s = mid + 1;

        }
        else {
            
             e = mid;
            
        }

        

    }

    return s;
}

int main (){

    int  arr[8] = {3, 8, 10,11, 1, 12, 15, 18 };

    cout << "Pivot of the array is : " << getPivot(arr, 8);
    

    return 0;
}