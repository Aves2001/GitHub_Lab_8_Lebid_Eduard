#include <stdio.h>
#include <conio.h>
#include <windows.h>
int n = 0;

int sum(int n)
{
  if (n < 10) return n;
  return n % 10 + sum(n / 10);
}

int chcp, chcpOut = 0;
int main(void)
{
// память chcp
    chcp = GetConsoleCP();
    chcpOut = GetConsoleOutputCP();

// UTF-8
    SetConsoleCP(65001);                
    SetConsoleOutputCP(65001);
//

    printf("\r\nВведіть натуральне число:\r\nn = ");
        scanf("%d", &n);

    if (n < 0) n = -n;
        printf("\r\nСума цифр цього числа: %d\r\n", sum(n));

// Вертаєм chcp
    SetConsoleCP(chcp);                
    SetConsoleOutputCP(chcpOut);
//
    getch();
    return 0;
}