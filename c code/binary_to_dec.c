#include <stdio.h>
#include <math.h>

int bin_to_dec(int binnum, int decnum, int bit)
{
    int bitwt;
    //used while instead of if
    if (binnum > 0)
    {

        //forgot to make binum as bitwt below
        bitwt = binnum % 10;
        decnum = decnum + (bitwt)*pow(2, bit);
        bit++;
        binnum = binnum / 10;
        // printf("%d\n", binnum);
        // printf("%d ", decnum);
        decnum = bin_to_dec(binnum, decnum, bit);
    }
    return decnum;
}

int main()
{
    int binnum, decnum, bit;
    printf("Enter the binary number:\n");
    scanf("%d", &binnum);
    decnum = bin_to_dec(binnum, 0, 0);
    printf("Decimal number is %d", decnum);
}