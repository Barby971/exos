#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_comb(void)
{

	char first = '0';
	char second = '1';
	char third = '2';

	for (first = '0' ; first <='7' ; first++)

	{
		for (second = '1'; second <='8' ; second++)
		
		{
			for (third = '2'; third <= '9' ; third++)
			{

						ft_putchar(first);
						ft_putchar(second);
						ft_putchar(third);
					       ft_putchar(',');
					       ft_putchar(' ');
						third++;
					
				
			}
						
				

						
		}

				
	}

}

int main(void)
{
	ft_print_comb();
	return 0;
}



