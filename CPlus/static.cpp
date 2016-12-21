#include <iostream>
using namespace std; 
void func(void);
 
static int count = 10; /* global variable */
 
int main()
{
    while(count--)
    {
       func();
    }
    return 0;
}
// define func
void func( void )
{
    static int i = 5; // local variable
    i++;
    cout << "parameter i is " << i ;
    cout << "parameter count is " << count << std::endl;
}
