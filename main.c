// Amr Akmal Mohamed Mahmoud
// Ahmed Yasser Shehata Sultan
// Omar Tarek Ali
// Saher Ayman Monir Ali




#include <stdio.h>
#include <stdlib.h>
#include <conio.h>  // For _kbhit() and _getch() on Windows



// Function to convert decimal to binary
void decToBinary(int decimalNumber) {
    if (decimalNumber == 0) {
        printf("      Binary: 0\n");
        return;
    }
    printf("      Decimal: %d in Binary is :",decimalNumber);
    int binary[32];
    int index = 0;

    while (decimalNumber > 0) {
        binary[index++] = decimalNumber % 2;
        decimalNumber /= 2;
    }


    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);

    }

    printf("\n");
}

// Function to convert binary to decimal
int binaryToDecimal(int binaryNumber) {
   int decimalNumber = 0, i = 0, remainder;
    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }

}





int main() {
    int choice;
    int number;
    char key;

    printf("      Choose conversion:\n");
    printf("      1. Decimal to Binary\n");
    printf("      2. Decimal to Octal\n");
    printf("      3. Decimal to Hexadecimal\n");
    printf("      4. Binary to Decimal\n");
    printf("      5. Octal to Decimal\n");
    printf("      6. Hexadecimal to Decimal\n");
    printf("\n      ////////////////////////////////////////////////////\n\n");


do {

    printf("      Enter your choice (1-6): ");
    scanf("%d", &choice);





    switch (choice) {
        case 1:
            printf("      Enter a Decimal number: ");
            scanf("%d", &number);
            decToBinary(number);
            break;
        case 2:
            printf("      Enter a number: ");
            scanf("%d", &number);
            printf("      Decimal: %d in octal is %o\n", number, number);
            break;
        case 3:
            printf("      Enter a Decimal number: ");
            scanf("%d", &number);
            printf("      Decimal: %d in hexadecimal is %x\n", number, number);
            break;
        case 4: {
            int binary;
            printf("      Enter a binary number: ");
            scanf("%d", &binary);
            printf("      Binary %d in ", binary);
            printf("Decimal is: %d\n", binaryToDecimal(binary));
            break;
        }
        case 5: {
            int octalNumber;
            printf("      Enter an octal number: ");
            scanf("%o", &octalNumber);

            printf("      Octal: %o in Decimal is %d\n", octalNumber  , octalNumber);
            break;
        }
        case 6: {
            int hexNumber;
            printf("      Enter an Hexadecimal number: ");
            scanf("%x", &hexNumber);

            printf("      Octal: %x in Decimal is %d\n", hexNumber  , hexNumber);
            break;
        }
        default:
            printf("      Invalid choice\n");
            break;
    }
 printf("\n      ////////////////////////////////////////////////////\n\n");
    printf("      Press ESC to exit, or any other key to continue...\n");

        key = _getch();


     if (key == 27) {
            printf("      Escape key pressed. Exiting...\n");

            break;
        }

    } while (1);

    return 0;
}

