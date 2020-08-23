#include <iostream>


void foo(int v, int & r)
{
    static int s = 0; // global variable (kinda) if s already exists, new
    s++;              // declaration doesnt over ride. it uses old value.
    v += s;
    r += s;
}
int main()
{
    int v = 0;
    int r = 0;
    for (int i = 0; i < 2; i++)
    {
        foo(v, r);
        std::cout << v << " " << r << std::endl;
        // first iteration: v, r = 0. s = 1, v isnt changed but r is (bc &)
        // so r = 1.
        // second iteration: v = 0, r = 1, s = 2. v isnt changed, r += s so
        // r = 3. s is iterated every function call bc it is static.
    }
    return 0;
}
