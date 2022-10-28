/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_C07.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymorozov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:08:50 by ymorozov          #+#    #+#             */
/*   Updated: 2022/10/28 11:19:39 by gio              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

//#include "ex00/ft_strdup.c"
#include "ex01/ft_range.c"
//#include "ex02/ft_ultimate_range.c"
//#include "ex03/ft_strjoin.c"

int	main(void)
{
	//ex00
	/*
	char *str = "what a beautiful world\n";
	printf("Original string: %s\n", str);
	char *ptr = ft_strdup(str);
	if (ptr == NULL)
		printf("Error\n");
	else
		printf("new string: %s", ptr);
	free (ptr);
*/
	//ex01

	int	min1 = -1;
	int max1 = 5;
	int *ptr1 = ft_range(min1, max1);
	int *buf1;
	if (ptr1 == NULL)
		printf("Error\n");
	else {
		buf1 = ptr1;
		for (int i = 0; i < (max1 - min1); i++)
		{
			printf("%d ", *buf1);
			buf1++;
		}
		printf("\n");
	}
	free (ptr1);

	int	min2 = 2147483640;
	int max2 = 2147483647;
	int *ptr2 = ft_range(min2, max2);
	if (ptr2 == NULL)
		printf("Error\n");
	else {
		for (int i = 0; i < (max2 - min2); i++)
			printf("%d ", ptr2[i]);
		printf("\n");
	}
	free (ptr2);

	int	min3 = 2147483640;
	int max3 = 2147483637;
	int *ptr3 = ft_range(min3, max3);
	if (ptr3 == NULL)
		printf("Error\n");
	else {
		for (int i = 0; i < (max3 - min3); i++)
			printf("%d ", ptr3[i]);
		printf("\n");
	}
	free (ptr3);

	//ex02
	/*
	int	min4 = 2;
	int	max4 = 7;
	int	**ptr4 = (int **)malloc(sizeof(int*));
	if (ptr4 == NULL)
		return (-1);
	int	res4 = ft_ultimate_range (ptr4, min4, max4);
	if (*ptr4 == NULL || res4 == 0 || res4 == -1)
		printf("Error, return value = %d\n", res4);
	else {
		int *arr = *ptr4;
		printf("min = %d, max = %d, res = %d\n", min4, max4, res4);
		for (int i = 0; i < (max4 - min4); i++)
			printf("%d ", arr[i]);
		printf("\n");
	}
	free (*ptr4);
	free (ptr4);

	int	min5 = 2158;
	int	max5 = 7;
	int	**ptr5 = (int **)malloc(sizeof(int*));
	if (ptr5 == NULL)
		return (-1);
	int	res5 = ft_ultimate_range (ptr5, min5, max5);
	if (*ptr5 == NULL || res5 == 0 || res5 == -1)
		printf("Error, return value = %d\n", res5);
	else {
		int *arr1 = *ptr5;
		printf("min = %d, max = %d, res = %d\n", min5, max5, res5);
		for (int i = 0; i < (max5 - min5); i++)
			printf("%d ", arr1[i]);
		printf("\n");
	}
	free (*ptr5);
	free (ptr5);

	int	min6 = -7;
	int	max6 = -2;
	int	**ptr6 = (int **)malloc(sizeof(int*));
	if (ptr6 == NULL)
		return (-1);
	int	res6 = ft_ultimate_range (ptr6, min6, max6);
	if (*ptr6 == NULL || res6 == 0 || res6 == -1)
		printf("Error, return value = %d\n", res6);
	else {
		int *arr2 = *ptr6;
		printf("min = %d, max = %d, res = %d\n", min6, max6, res6);
		for (int i = 0; i < (max6 - min6); i++)
			printf("%d ", arr2[i]);
		printf("\n");
	}
	free (*ptr6);
	free (ptr6);
*/
	//ex03
/*
	int	size1 = 3;
	char	*str1 = "Hello";
	char	*str2 = "my";
	char	*str3 = "friend!";
	char	*sep = "./.tgjh      ";
	char	*array[size1];
	array[0] = str1;
	array[1] = str2;
	array[2] = str3;
	char *result = ft_strjoin(size1, array, sep);
	if (result == NULL)
		printf("Error\n");
	else
		printf("result: %s\n", result);
	free(result);

	int	size2 = 0;
	char	*str12 = "Hello";
	char	*str22 = "my";
	char	*str32 = "friend!";
	char	*sep2 = " ";
	char	*array2[size2];
	array2[0] = str12;
	array2[1] = str22;
	array2[2] = str32;
	char *result2 = ft_strjoin(size2, array2, sep2);
	if (result2 == NULL)
		printf("Error\n");
	else
		printf("result: %s\n", result2);
	free(result2);
*/
	return (0);
}
