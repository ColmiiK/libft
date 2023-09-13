/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:54:00 by alvega-g          #+#    #+#             */
/*   Updated: 2023/09/12 14:21:25 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int		i;
	char	*temp;

	i = 0;
	temp = NULL;
	if (!s)
		return (0);
	while (c > 255)
		c -= 256;
	while (s[i])
	{
		if (c == s[i])
		{
			temp = &s[i];
			i++;
		}
		else
			i++;
	}
	return (temp);
}

// int main()
// {
// 	char s[10] = "";

// 	printf("%s\n", ft_strrchr(s, 'a' + 256));
// }
