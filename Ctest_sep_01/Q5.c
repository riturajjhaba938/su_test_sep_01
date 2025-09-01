#include <stdio.h>

int main()
{
    int num, reverseNum = 0, remainder, Num;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

   
    Num = num;

    
    while (num != 0) {
        remainder = num % 10;          
        reverseNum = reverseNum * 10 + remainder; 
        num /= 10;                     
    }

    
    printf("Reverse number: %d\n", reverseNum);

    
    if (Num == reverseNum) {
        printf("%d is a palindrome.\n", Num);
    } else {
        printf("%d is not a palindrome.\n",Num);
    }
    return 0;
}
