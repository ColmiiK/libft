/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:35:46 by alvega-g          #+#    #+#             */
/*   Updated: 2023/09/15 16:02:57 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*reverse(char *s)
{
	int		i;
	int		j;
	int		size;
	char	caja;

	size = ft_strlen(s);
	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		caja = s[i];
		s[i] = s[j];
		s[j] = caja;
		i++;
		j--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*number;
	int		is_negative;

	i = 0;
	is_negative = 0;
	if (n < 0)
	{
		n *= -1;
		is_negative = -1;
	}
	if (!number)
		return (0);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (is_negative)
		number = (char *)malloc(sizeof(char) * count(n) + 1);
	if (!is_negative)
		number = (char *)malloc(sizeof(char) * count(n));
	while (n != 0)
	{
		number[i++] = (n % 10) + '0';
		n /= 10;
	}
	if (is_negative)
		number[i] = '-';
	return (ft_strdup(reverse(number)));
}
// int	main(void)
// {
// 	int n = -12345;
// 	char *s = ft_itoa(n);

// 	printf("%s\n", s);
// 	free(s);
// }
