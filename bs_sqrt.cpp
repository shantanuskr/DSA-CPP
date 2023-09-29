#include<iostream> 
using namespace std;

long long int sqrtinteger(int n){

    int s = 0;
    int e = n;

    long long int   ans = -1;
    while ( s <= e){
        
       long long  int mid = s + ( e - s )/2;

       long long int square =  mid*mid;

        if ( square == n )
        {
            return mid;
        }
        
        if ( square < n  )
        {
            ans = mid ;
            s = mid + 1;
        }
        else 
        {
            e = mid - 1;
        }
    }

    return ans;
}


double decimal(int n, int precision , int temp){
    
    double factor = 1.0;
    double ans = temp;

    for ( int i = 1 ; i < precision ; i++){

        factor = factor/10;

        for (double j = ans  ; j*j < n ; j= j+ factor ){

            ans = j;

        }

    }

    return ans;

}

int main(){

    int n;
    cout << "Number : ";
    cin >> n;
    int temp = sqrtinteger(n);
     cout  <<decimal(n, 3, temp) ;
    cout << temp;
    return 0;
}