#include <stdio.h>
int main()
{
/* a = Pr(W1)=0.6;
 b = Pr(R2/W1)=0.5;
 c = Pr(W1R2);
Pr(W1R2)=Pr(R2/W1)*Pr(W1) */

float a = 0.6;
float b = 0.5;
float c;

c = a*b;

printf("Pr(W1R2)=%0.1f\n",c);

return 0;
}