#include "main.h"

int pr_int(int num)
{
        int count = 0;
        int digits[10];
        int j = 0;

        if (num < 0)
        {
                _putchar('-');
                count++;
                num = -num;
        }
        if (num == 0)
        {
                _putchar('0');
                count++;
        }
        else
        {
                while (num > 0)
                {
                        digits[j] = num % 10;
                        num /= 10;
                        j++;
                }
                while (j > 0)
                {
                        j--;
                        _putchar (digits[j] + '0');
                        count++;
                }
        }
        return (num);
}
