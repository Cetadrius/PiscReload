/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 08:52:29 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/21 08:52:33 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*new;

	i = 0;
	size = ft_strlen(src);
	new = malloc(sizeof(char) * size + 1);
	if (!new)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("This is the duplicated text: %s\n", ft_strdup(av[1]));
	return (0);
}
*/
