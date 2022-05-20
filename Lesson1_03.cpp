#include <iostream>

int main()
{
    // #2
    int x, y;
    std::cin >> x;
    y = (x > 21) ? abs(x - 21) * 2 : abs(x - 21);
    std::cout << y << std::endl;

    // #3
    int iCube[3][3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int* p = &iCube[0][0][0];
    std::cout << *(p+4) << std::endl;

    //#4
    extern int a;
    extern int b;
    extern int c;
    extern int d;
    float res;
    res = a * (b + ((float) c  / d));
    std::cout << res << std::endl;
}

