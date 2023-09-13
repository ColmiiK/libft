/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:24:34 by alvega-g          #+#    #+#             */
/*   Updated: 2023/09/12 17:16:42 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*src;

	i = 0;
	src = s;
	while (i < n)
	{
		if ((unsigned char)c == src[i])
			return ((void *)&src[i]);
		else
			i++;
	}
	if (c == '\0')
		return ((void *)&src[i++]);
	return (0);
}

// int main()
// {
//    int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
//     printf("%s", (char *)ft_memchr(tab, -1, 7));
// }
