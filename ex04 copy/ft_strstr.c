/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:51:54 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/05 17:51:55 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	char_comp(char *x, char *y)
{
	int	j;

	j = 0;
	while (x[j] == y[j])
	{
		if (y[j + 1] == '\0')
		{
			return (1);
		}
		j++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (char_comp(str + i, to_find) == 1)
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>
// #include <unistd.h>
// int	main(void)
// {
// 	char *ret;
// 	char *ptr;
// 	char str1[] = "hello worlders";
// 	char str2[] = "world";
// 	// ret = strstr(str1, str2);
// 	// puts(ret);
// 	ptr = ft_strstr(str1, str2);
// 	puts(ptr);
// }