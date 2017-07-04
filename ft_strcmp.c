#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	
	i = 0;
	printf("\n");
	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		printf("s1: %c s2: %c\n", s1[i], s2[i]);
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	printf("s1: %c s2: %c\n\n", s1[i], s2[i]);
	
	return (s1[i]- s2[i]);
}

int	main(void)
{
	printf("%d\n\n",ft_strcmp("abcd", "Abcd"));
	printf("%d\n\n",ft_strcmp("abce", "abcd"));
	printf("%d\n\n",ft_strcmp("bcd", "abc"));
	printf("%d\n\n\n",ft_strcmp("Leo", "leo"));
	printf("Below uses the library\n");
	printf("%d\n\n",strcmp("abcd", "Abcd"));
	printf("%d\n\n",strcmp("abce", "abcd"));
	printf("%d\n\n",strcmp("bcd", "abc"));
	printf("%d\n\n",strcmp("Leo", "Leo"));
	return (0);

}
