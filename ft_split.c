/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 13:11:01 by alvega-g          #+#    #+#             */
/*   Updated: 2023/09/15 14:34:33 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != && j == 0)
		{
			j = 1;
			i++;
		}
		else if (s[i] == c)
			j = 0;
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	
}

int	main(void)
{
	char *s = "A B C";
	char c = 32;

	printf("%s\n", )
}