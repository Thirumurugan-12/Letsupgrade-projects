#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Enter a number to check prime :" << endl ; 
    cin >> a;

    for (int i = 2 ; i < a ; i++) {
         
        if(a % i == 0){
            cout << a << " Its not a prime number" << endl ;
            break;
        }

        else{
            cout << a << " Its a Prime number " << endl ;
            break;
        }
    }

    return 0;
}