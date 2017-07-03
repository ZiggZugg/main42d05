#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char 	*ft_strstr(char *str, char *to_find);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
char	*ft_strcat(char *dest, char *src);
char 	*ft_strncat(char *dest, char *src, int nb);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int 	ft_strlcpy(char *dest, char *src, unsigned int size);
void	ft_putnbr_base(int nbr, char *base);
int		ft_atoi_base(char *str, char *base);
void	ft_putstr_non_printable(char *str);
void	*ft_print_memory(void *addr, unsigned int size);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}


void	testn(int i, char c)
{
	char *str;
	switch (c)
	{
		case 'a' :
			str = "ft_pustr";
			break;
		case 'b' :
			str = "ft_putnbr";
			break;
		case 'c' :
			str = "ft_atoi";
			break;
		case 'd' :
			str = "ft_strcpy";
			break;
		case 'e' :
			str = "ft_strncpy";
			break;
		case 'f' :
			str = "ft_strstr";
			break;
		case 'g' :
			str = "ft_strcmp";
			break;
		case 'h' :
			str = "ft_strncmp";
			break;
		case 'i' :
			str = "ft_strupcase";
			break;
		case 'j' :
			str = "ft_strlowcase";
			break;
		case 'k' :
			str = "ft_strcapitalize";
			break;
		case 'l' :
			str = "ft_str_is_alpha";
			break;
		case 'm' :
			str = "ft_str_is_numeric";
			break;
		case 'n' :
			str = "ft_str_is_lowercase";
			break;
		case 'o' :
			str = "ft_str_is_uppercase";
			break;
		case 'p' :
			str = "ft_str_is_printable";
			break;
		case 'q' :
			str = "ft_strcat";
			break;
		case 'r' :
			str = "ft_strncat";
			break;
		case 's' :
			str = "ft_strlcat";
			break;
		case 't' :
			str = "ft_strlcpy";
			break;
		case 'u' :
			str = "ft_putnbr_base";
			break;
		case 'v' :
			str = "ft_atoi_base";
			break;
		case 'w' :
			str = "ft_putstr_non_printable";
			break;
		case 'y' :
			str = "ft_print_memory";
			break;
		default :
			str = "invalid selection";
	}
	printf("------------------\n");
	printf("TEST NUMBER: %d => %s\n", i, str);
	printf("------------------\n");
	
}
int		main(void)
{
	testn(0, 'a');
	ft_putstr("This is a test of putstr\n");

	testn(1, 'b');
	ft_putstr("0 => ");
   	ft_putnbr(0);
	ft_putstr("\n1 => ");
  	ft_putnbr(1);
	ft_putstr("\n-1 => ");
	ft_putnbr(-1);
	ft_putstr("\n10 => ");
	ft_putnbr(10);
	ft_putstr("\n-10 => ");
	ft_putnbr(-10);
	ft_putstr("\n3333 => ");
	ft_putnbr(3333);
	ft_putstr("\n-3333 => ");
	ft_putnbr(-3333);
	ft_putstr("\n42 => ");
   	ft_putnbr(42);
	ft_putstr("\n-42 => ");
	ft_putnbr(-42);
	ft_putstr("\n2147483647 => ");
	ft_putnbr(2147483647);
	ft_putstr("\n-2147483648 => ");
	ft_putnbr(-2147483648);
	ft_putstr("\n");

	testn(1, 'c');
	printf("input: 333 expected 333 => %d\n",ft_atoi("333"));
	printf("input: 123456789 expected 123456789 => %d\n",ft_atoi("123456789"));
	printf("input: 42 expected: 42 => %d\n",ft_atoi("42"));
	printf("input: -333 expected: -333 => %d\n",ft_atoi("-333"));
	printf("input: -123456789 expected: -123456789 => %d\n",ft_atoi("-123456789"));
	printf("input: -42 expected: -42 => %d\n",ft_atoi("-42"));
	printf("input: \\f\\r\\t\\v\\' \'42 expected: 42 => %d\n",ft_atoi("\f\r\t\v 42"));
	printf("input: ?!@#$*() 3245 expected: 0 => %d\n",ft_atoi("?!@#$*() 3245"));
	printf("input: 42- 42 4242 expected: 42 => %d\n", ft_atoi("42- 42 4242"));
	printf("input: -+42 expected: 0 => %d\n", ft_atoi("-+42"));
	printf("input: +-42 expected: 0 => %d\n", ft_atoi("+-42"));
	printf("input: --42 expected: 0 => %d\n", ft_atoi("--42"));	
	printf("input: 2147483647 expected: 2147483647 => %d\n", ft_atoi("2147483647"));
	printf("input: -2147483648 expected: -2147483648 => %d\n", ft_atoi("-2147483648"));
	return (0);
}

