#include<iostream>
#include<vector>
using namespace std;


char getMaxOccurCharacter( string s){

    int arr[26] = {0};
    for( int i = 0 ; i< s.length(); i++){

        char ch = s[i];

        int number = 0;
        number = ch - 'a';
        arr[number]++;
    
    }

    int maxi = -1, ans = 0;
    for ( int i = 0; i < 26 ; i++){
        if (   arr[i]>maxi ){
            ans = i;
            maxi = arr[i];
        }
    }

    
    return  ans + 'a';
}
int main (){

    string s;
    cin >> s;

    cout << getMaxOccurCharacter(s);

    return 0;
}