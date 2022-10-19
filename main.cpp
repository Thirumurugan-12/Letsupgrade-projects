#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    cout << "Enter number 1 :" <<  endl;

    cin >> a;
    
    cout << "Enter number 2 : " << endl ;

    cin >> b; 
    
    if(a==b) {
        cout << "Both numbers are equal" << endl ;
    }
    else{
        cout << "Numbers are not equal" << endl;
    }

    return 0;
}