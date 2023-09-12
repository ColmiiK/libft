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

// #include "libft.h"

// void	*ft_memchr(void *s, int c, size_t n)
// {
// 	unsigned int	i;

// 	i = 0;
// 	while (i < n)
// 	{
// 		if (c == s[i])
// 			return ((void *)&s[i]);
// 		else
// 			i++;
// 	}
// 	if (c == '\0')
// 		return ((void *)s[i++]);
// 	return (0);
// }

// int main()
// {
//    int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
//     printf("%s", (char *)ft_memchr(tab, -1, 7));
// }