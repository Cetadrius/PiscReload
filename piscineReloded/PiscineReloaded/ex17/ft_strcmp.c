/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:37:34 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/10 14:29:40 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	if (s1 == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}

/*int	main(void)
{
    char    src[] = "Orca";
    char    dest[] = "Whalle";
    char    dest2[] = "Hippo";
    char    dest3[] = "Arclight";
    char    dest4[]= "gunner";
    
    printf("%d", ft_strcmp(src, dest));
    printf("\n");
    printf("%d", ft_strcmp(src, dest2));
    printf("\n");
    printf("%d", ft_strcmp(src, dest3));
    printf("\n");
    printf("%d", ft_strcmp(src, dest4));
    printf("\n");
}*/
