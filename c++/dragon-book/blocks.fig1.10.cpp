#include <iostream>
using namespace std; // io text
 
main(){//B1
    int a = 1;
    int b = 1;
    {//B2
        int b = 2;
        {//B3
            int a = 3;
            cout << a << b;
            cout << " a, b from B3 \n";
        }  
        {//B4
            int b = 4;
            cout << a << b;
            cout << " a, b from B4 \n";
        }
        cout << a << b;
        cout << " a, b from B2 \n";
    }
    cout << " a, b before B1 \n";
    cout << a << b;
}