#include <stdio.h>
#include <conio.h>
#include <windows.h>

double fact(int n) {
if (n<=1) return 1;
return (fact(n-1)*n); }

double fact_1(int f1, int f2)
{
int f3 = f1-f2;
double a1=fact(f1);
double a2=fact(f2);
double a3=fact(f3);
double a4 = a1/(a2*a3);
return a4;
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
printf("Існує %.0f способів вийняти 8 карт із колоди в якій 52 карти так,\nщоб серед цих карт був принаймні один туз.\n", ((fact_1(52,8)-fact_1(48,8))));


// Вертаєм chcp
    SetConsoleCP(chcp);                
    SetConsoleOutputCP(chcpOut);
//
    getch();
    return 0;
}