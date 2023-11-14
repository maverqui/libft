#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long new_n;
    int res;

    new_n = n;
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }
    if (n >= 10)
        ft_putnbr_fd(n / 10, fd);
    ft_putchar_fd((n % 10) + '0', fd);
}

int main() {
    int number = 42;
    int fileDescriptor = 2;

    ft_putnbr_fd(number, fileDescriptor);

    return 0;
}