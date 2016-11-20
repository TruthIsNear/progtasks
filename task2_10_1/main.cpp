#include <stdio.h>
#define pi 3.14
using namespace std;

int main()
{
    float L, R, S;
    printf("L=");
    scanf("%f",&L);
    R=L/(2*pi);
    S=pi*R*R;
    printf("R=%.2f \t S=%.2f \n", R, S);
    return 0;
}
