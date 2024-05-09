/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aorynbay <aorynbay@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:32:15 by aorynbay          #+#    #+#             */
/*   Updated: 2024/05/05 17:32:16 by aorynbay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (i < nb && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char str1[] = "hello";
// 	char str2[] = " world";
// 	ft_strncat(str1, str2, 3);
// 	printf("%s", str1);
// 	// printf("%s", "\n");
// 	// char str3[] = "hello";
// 	// char str4[] = " world";
// 	// strncat(str3, str4, 3);
// 	// printf("%s", str3);
// }