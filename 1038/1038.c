#include <stdio.h>

int main() {


    int code, qtde;

    scanf("%d %d", &code, &qtde);

    float price, total;

    switch (code)
    {
    case 1:
        price = 4;
        break;
    case 2:
        price = 4.5;
        break;
    case 3:
        price = 5;
        break;
    case 4:
        price = 2;
        break;
    case 5:
        price = 1.5;
        break;
    
    default:
        break;
    }

    total = price * qtde;

    printf("Total: R$ %.2f\n", total);
 
    return 0;
}