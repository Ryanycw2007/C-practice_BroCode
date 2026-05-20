#include <stdio.h>




int main()
{
    //varible -- intager
    int price = 32900;
    int version = 13;
    int quantity = 1;

    printf("You have ordered %d Framework %d Laptop for %d TWD. \n ", quantity, version, price);

    unsigned int unsignedint = -12;
    printf("%d\n", unsignedint);  // %d 有符號十進位 (Signed)
    printf("%u\n", unsignedint);  // %u 無符號十進位 (Unsigned)

    int diffformat = -1002;        //using diffformat to print intager
    printf("\n\n%d\n",diffformat);  // %d 有符號十進位 (Signed)
    printf("%o\n",diffformat);  // %o 八進位 (Octal)
    printf("%x\n",diffformat);  // %x 十六進位 (Hexadecimal)
    printf("%X\n",diffformat);  // %X 大寫十六進位 (Uppercase Hexadecimal)
    printf("%u\n",diffformat);  // %u 無符號十進位 (Unsigned)

    
    


    return 0;
}