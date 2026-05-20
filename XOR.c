#include <stdio.h>
#include <stdbool.h>

int main()
{
    int Plaintext[] = {0, 1, 1, 0, 1, 0};
    int Key[] =       {1, 0, 0, 1, 1, 1};
    int Ciphertext[6];
    
    for(int i = 0; i < 6; i++)
    {
        Ciphertext[i] = (Plaintext[i] ^ Key[i]);
        printf("%d", Ciphertext[i]);
    }
    
    printf("\n");

    char Plaintext2[12] = "secret0000i";
    char Key2[12] = "MJKINGoFPOP";
    char Ciphertext2[12] = "\0";

    for(int i = 0; i < 11; i++)
    {
        Ciphertext2[i] = (Plaintext2[i] ^ Key2[i]);
        printf("%02x ", Ciphertext2[i]);
    }


    return 0;

}