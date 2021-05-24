#include<unistd.h>

void ft_putchar(char c)
{ 
	write (1, &c, 1);
}

void ft_print(int a, int b, int c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	ft_putchar (',');
	ft_putchar (' ');
}

void ft_print_comb(void)
{
	int a = '0';
	int b = '1';
	int c = '2';

	while (a <= ('6'+ 1))
	{ 
		while (b <= ('7' +1))
				{
					while (c <= ('8' +1))
					{
						ft_print (a, b, c);
					c++;
					}
				c = ++b +1;
				}
	b = ++a;
	}
}


int main (void)
{
	ft_print_comb();
		return (0);
}


