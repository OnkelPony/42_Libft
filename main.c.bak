/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:12:58 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/23 17:30:31 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

#include "libft.h"

void    ft_print_result(char const *s)
{
		int             len;

		len = 0;
		while (s[len])
				len++;
		write(1, s, len);
}

int main()
{
	//ft_isprint
	printf("*** ft_isprint ***\n");
	printf("ft_isprint('c') should be %d and is %d\n", 1, ft_isprint('c'));
	printf("os_isprint('c') should be %d and is %d\n", 1, isprint('c'));
	printf("ft_isprint('q') should be %d and is %d\n", 1, ft_isprint('q'));
	printf("os_isprint('q') should be %d and is %d\n", 1, isprint('0'));
	printf("ft_isprint('\\n') should be %d and is %d\n", 0, ft_isprint('\n'));
	printf("os_isprint('\\n') should be %d and is %d\n", 0, isprint('\n'));
	printf("\n");

	//ft_strlen
	printf("*** ft_strlen ***\n");
	printf("ft_strlen(\"\") should be %ld and is %ld\n", 0ul, ft_strlen(""));
	printf("os_strlen(\"\") should be %ld and is %ld\n", 0ul, strlen(""));
	printf("ft_strlen(\"Lorem ipsum dolor sit amet, consectetuer adipiscing elit.\") should be %ld and is %ld\n", 57ul, ft_strlen("Lorem ipsum dolor sit amet, consectetuer adipiscing elit."));
	printf("os_strlen(\"Lorem ipsum dolor sit amet, consectetuer adipiscing elit.\") should be %ld and is %ld\n", 57ul, strlen("Lorem ipsum dolor sit amet, consectetuer adipiscing elit."));
	printf("\n");

	//ft_strchr
	printf("*** ft_strchr ***\n");
	printf("ft_strchr(\"nesnese\", 'n') shoud be %s and is %s\n", "nesnese", ft_strchr("nesnese", 'n'));
	printf("os_strchr(\"nesnese\", 'n') shoud be %s and is %s\n", "nesnese", strchr("nesnese", 'n'));
	printf("os_strchr(\"bonjour\", 'j') shoud be %s and is %s\n", "jour", strchr("bonjour", 'j'));
	printf("ft_strchr(\"bonjour\", 'j') shoud be %s and is %s\n", "jour", ft_strchr("bonjour", 'j'));
	printf("\n");

	//ft_strrchr
	printf("*** ft_strrchr ***\n");
	printf("os_strrchr(\"nesnese\", 'n') shoud be %s and is %s\n", "nese", strrchr("nesnese", 'n'));
	printf("ft_strrchr(\"nesnese\", 'n') shoud be %s and is %s\n", "nese", ft_strrchr("nesnese", 'n'));
	printf("os_strrchr(\"bonjour\", 'b') shoud be %s and is %s\n", "bonjour", strrchr("bonjour", 'b'));
	printf("ft_strrchr(\"bonjour\", 'b') shoud be %s and is %s\n", "bonjour", ft_strrchr("bonjour", 'b'));
	printf("os_strrchr(\"bonjour\", 's') shoud be %s and is %p\n", "bonjour", strrchr("bonjour", 's'));
	printf("ft_strrchr(\"bonjour\", 's') shoud be %s and is %s\n", "bonjour", ft_strrchr("bonjour", 's'));
	printf("\n");

	//ft_strncmp
	printf("*** ft_strncmp ***\n");
	printf("os_strncmp(\"abcdefgh\", \"abcdwxyz\", 4) shoud be %d and is %d\n", 0, strncmp("abcdefgh", "abcdwxyz", 4));
	printf("ft_strncmp(\"abcdefgh\", \"abcdwxyz\", 4) shoud be %d and is %d\n", 0, ft_strncmp("abcdefgh", "abcdwxyz", 4));
	printf("os_strncmp(\"test\\201\", \"test\\0\", 6) shoud be %d and is %d\n", 1, strncmp("test\201", "test\0", 6));
	printf("ft_strncmp(\"test\\201\", \"test\\0\", 6) shoud be %d and is %d\n", 1, ft_strncmp("test\201", "test\0", 6));
	printf("\n");

	//ft_strnstr
	printf("*** ft_strnstr ***\n");
	printf("ft_strnstr(\"lorem ipsum dolor sit amet\", \"ipsumm\", 30) should be %p and is %p\n", NULL, ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
	printf("\n");

	//ft_substr
	printf("*** ft_substr ***\n");
	printf("ft_substr(\"lorem ipsum dolor sit amet\", \"ipsumm\", 30) should be %s and is %s\n", "lorem ipsu", ft_substr("lorem ipsum dolor sit amet", 0, 10));
	printf("\n");

	//ft_split
	printf("*** ft_split ***\n");
	char **tabstr;
	int i;
	i = 0;
	tabstr = ft_split("_", '_');
	while (tabstr[i] != NULL)
	{
		ft_print_result(tabstr[i]);
		write(1, "\n", 1);
	i++;
	}
	printf("\n");

	//ft_strlcpy
	printf("*** ft_strlcpy ***\n");
	char    *dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
			return (0);
	memset(dest, 0, 15);
	// memset(dest, 'r', 6);
	printf("%ld\n", ft_strlcpy(dest, "lorem ipsum dolor sit amet", 3));
	write(1, "\n", 1);
	write(1, dest, 15);
	printf("\n");

	//ft_strlcat
	printf("*** ft_strlcat ***\n");
	//char    *dest;
	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
			return (0);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	printf("ft_strlen(dest) = %ld\n", ft_strlen(dest));
	printf("%ld\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 19));
	write(1, dest, 15);
	write(1, "\n", 1);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	dest[14] = 'a';
	printf("ft_strlen(dest) = %ld\n", ft_strlen(dest));
	printf("%ld\n",ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));
	write(1, "\n", 1);
	write(1, dest, 15);
	printf("\n");

	//ft_calloc
	printf("*** ft_calloc ***\n");
	char *str;
	str = (char *)ft_calloc(30, 1);
	write(1, str, 30);

	//ft_itoa
	printf("*** ft_itoa ***\n");
	char *res = ft_itoa(10);
	// char *res = ft_itoa(-2147483648LL);
	printf("res = %s\n", res);
	free(res);
	
	return 0;

}


