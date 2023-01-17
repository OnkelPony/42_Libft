/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:12:58 by jimartin          #+#    #+#             */
/*   Updated: 2023/01/17 14:19:46 by jimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

#include "libft.h"
//#include "ex01/ft_range.c"
//#include "ex02/ft_ultimate_range.c"
//#include "ex03/ft_strjoin.c"
//#include "ex04/ft_convert_base.c"

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
	//05 Error 404 not found
	return 0;
}


