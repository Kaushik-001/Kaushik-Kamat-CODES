
#include <stdio.h>
// displaying n number of natural numbers in descending order using recursion
void function(int n)
{
    if (n == 0)
        return;
    else
    {
        printf("%d", n);
        function(n - 1);
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