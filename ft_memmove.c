/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:18:04 by alvega-g          #+#    #+#             */
/*   Updated: 2023/09/11 18:10:20 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	char			*temp_dst;
	const char		*temp_src;

	i = 0;
	temp_dst = dst;
	temp_src = src;
	if (!src && !dst)
		return (dst);
	if (temp_src > temp_dst)
	{
		i = len;
		while (i > 0)
		{
			temp_dst[i] = temp_src[i];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			temp_dst[i] = temp_src[i];
			i++;
		}
	}
	return (dst);
}

//  #include <string.h>

// int main() {
//     char str[50] = "Hola 12312312344123123123";
//     char str2[5] = "Mundo";

//     ft_memmove(str, str2, 15);

//     printf("%s\n", str);

//     return (0);
// }
