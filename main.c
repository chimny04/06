#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    int res = 1;
    int i;
    
    for(i=1; i<=n; i++)
        res *= i;
    
    return res;
}

int combination(int n, int r)
{
    int div1, div2; // div1 = 분자, div2 = 분모
    
    div1 = factorial(n); // n!
    div2 = factorial(n-r) * factorial(r);
    
    return (div1/div2);
}

int main()
{
    int n, r;
    int div1, div2; // div1 = 분자, div2 = 분모
    int result;
    
    // 입력값 받음 
    printf("input n: ");
    scanf("%d", &n);
    printf("input r: ");
    scanf("%d", &r);
    
    // combination 계산 
    result = combination(n,r);
    
    // 결과 값 출력 
    printf("result is %i\n", result);
    
    system("PAUSE");	
    return 0;
}
