/*************************************************
# dec2bin - Decimal-to-Binary converter #
Prompts user for a decimal number. Prints
the binary equivalent.

*Known bugs:
    a. Stop printing preceeding zeroes.

Authored by brianc2788@gmail.com
*************************************************/
#include <stdio.h>
#include <stdbool.h>

int nBitArray[50];
void PrintBitArray(int nDecimal);

int main(int argc,char* argv[]){
    printf("Enter a decimal number to see it's binary equivalent.\n");
    printf("Enter '0' to exit.\n\n");
    int nUsrInput = 1;
    bool bRun = 1;
    while(bRun){
        if (nUsrInput != 0){
            printf("Enter: ");
            scanf("%d",&nUsrInput);
            PrintBitArray(nUsrInput);
        }
        else if (nUsrInput == 0){
            bRun = 0;
        }
    }

    return 0;
}

void PrintBitArray(int nDecimal){
    //Create an array of bits.
    int nIndex = 0;
    while(nDecimal != 0){
        nBitArray[nIndex] = (nDecimal % 2);
        nIndex++;
        nDecimal = nDecimal/2;
    }

    //Print the array of bits in reverse.
    for(int n = nIndex; n >= 0; n--){
        printf("%d",nBitArray[n]);
    }
    printf("\n");
}