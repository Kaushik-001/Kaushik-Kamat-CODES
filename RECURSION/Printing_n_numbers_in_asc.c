#include <stdio.h>
// displaying n number of natural numbers in ascendinf order using recursion
void function(int n)
{
    if (n == 0)
        return;
    else
    {
        function(n - 1);
        printf("%d", n);
    }
}
int main()
{
    int n;
    printf("Enter the value of n :");
    scanf("%d ",&n);
    function(n);
    return 0;
}
