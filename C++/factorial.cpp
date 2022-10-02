#include <iostream>
using namespace std;
 

unsigned int factorial(unsigned int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
 

int main()
{
    int num = 12;
    cout << "Factorial of "
         << num << " is " << factorial(num) << endl;
    return 0;
}

Time Complexity: O(n)
Auxiliary Space: O(1)
// This code is contributed by SHAHNAWAZ KHAN
