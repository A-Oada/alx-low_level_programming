# include <stdio.h>

/**
  * main - Entry point - Prints first 50 fibonacci sequence numbers
  *
  * Return: Always 0
  */
 int main(void)
{
        unsigned long int fib[50] = {1, 2};
        int i = 2, j = 0;
        
        /* Store the values of the sequence in an array*/
        while (i <= 49)
        {
                fib[i] = fib[i - 1] + fib[i - 2];
                i++;
        }
        j = 0;
         /* Print the elements of the loop*/
         while (j <= 49)
        {
                printf("%lu", fib[j]);
                if (j != 49)
                {
                        printf(", ");
                }
                j++;
        }
        printf("\n");

        return (0);
}
