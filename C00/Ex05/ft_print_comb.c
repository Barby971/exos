#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_comb(void)
{

	char first = 0;
	char second = 1;
	char third = 2;

	first ='0';
	while (first <= '7');
	{
		second = first +1;
			while (second <= '8');
			{
				third > '2';
				while (third <='9');
					{
				
					ft_putchar(first);
					ft_putchar(second);
					ft_putchar(third);
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
				third ++;
				}
			second++;	
			}
		first++;	
	}

}

int main(void)
{
	ft_print_comb();
	return 0;
}



