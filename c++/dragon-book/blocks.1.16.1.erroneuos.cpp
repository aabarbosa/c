#include <iostream>
using namespace std; // io text
 

/*
There's no guarantee about a declered non-defined 
variable returns. It addresses anywhere in memory.
*/ 
main(){//B1
    int b = 1;
    int d;
    int e;
    int f;
    {//B2
        int d;
        int e;
        int f;
        int a;
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

    int a; //0
    cout << a << b;
    cout << " a, b at end of B1 \n";

    cout << " d " << d << " e " << e << "  f " << f;

}

/*
OUTPUT
32 a, b from B3
04 a, b from B4
02 a, b from B2
10613838561 a, b at end of B1
 d 32765 e 0  f 0
*/