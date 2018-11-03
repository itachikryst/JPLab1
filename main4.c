#include <stdlib.h> 
#include <math.h>
int main(){
    double a,b;
    scanf("%lf%lf",&a,&b);
    if(a<b)
    printf("Liczba %.2lf jest mniejsza od %.2lf",a,b);
    if(b<a)
    printf("Liczba %.2lf jest wieksza od %.2lf",a,b);
    
    return 0;
}