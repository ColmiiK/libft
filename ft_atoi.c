/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:37:00 by alvega-g          #+#    #+#             */
/*   Updated: 2023/09/12 17:48:04 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	x;
	int	is_negative;
	int	value;

	i = 0;
	x = 0;
	is_negative = 1;
	value = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		is_negative *= -1;
	i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		x = (x * 10) + (str[i] - '0');
		i++;
	}
	return (x * is_negative);
}

// int main ()
// {
// 	char str[] = "1 50";
// 	printf("ATOI CUSTOM:%d\n", ft_atoi(str));
// 	//printf("ATOI OFICIAL:%d\n", atoi(str));
	
// }