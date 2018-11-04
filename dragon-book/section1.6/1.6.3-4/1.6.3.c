
#include <stdio.h>

main()
{int w, x, y, z; //B1
    { int x, z; //B2
        {int w, x; /*B3*/  }
    }
    {int w, x; //B4
        {int y,z; /*B5*/} 
    }
}