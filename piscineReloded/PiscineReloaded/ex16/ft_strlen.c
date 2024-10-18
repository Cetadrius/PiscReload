/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 10:13:07 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/15 10:13:10 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	printf("%i", ft_strlen("Abdrehj"));
}*/
/*int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		("%d", ft_strlen(argv[1]));
	}
}*/
