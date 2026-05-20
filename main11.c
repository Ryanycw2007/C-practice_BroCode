#include <stdio.h>
#include <string.h>

int main()
{
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';    //  '\0' = null terminator 字串終止符
    char name[30] = "";

    
    printf("Enter your age:");
    scanf("%d", &age);

    printf("Enter your gpa:");
    scanf("%f", &gpa);

    printf("Enter your grade:");
    scanf(" %c", &grade);
    //     ↑ Space before %c to consume any leftover whitespace characters in the input buffer
    // scanf will stop reafing input after it encounters the first whitespace character (space, tab, newline) when
    // reading a string.

    getchar();    // Consume the newline character left in the input buffer by the previous scanf
                  //getchar() reads the next character from the input buffer, which is the newline character left by the previous scanf. This prevents fgets from reading an empty line when it is called next.
    printf("Enter your full name:");
    fgets(name, sizeof(name), stdin);// (fget string)Read a line of input (including spaces) and store it in the name array
    //     ↑variable    ↑ size of the input   , stdin(standard input)
    //sizeof(name) ensures that we do not read more characters than the size of the name array, preventing buffer overflow.
    // fgets will read the newline character when the user presses Enter, so we need to remove it from the name string if it exists.
    name[strlen(name)-1] = '\0'; //replace the newline character with a null terminator to properly terminate the string



    printf("%d\n",age);
    printf("%.2f\n",gpa);
    printf("%c\n",grade);
    printf("%s\n",name);


    return 0;
}