/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:00:21 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/16 14:00:24 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	h;

	h = nb;
	if (h <= 0)
	{
		return (0);
	}
	if (h == 1)
	{
		return (1);
	}
	i = 2;
	if (h >= 2)
	{
		while (i * i <= h)
		{
			if (i * i == h)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}
/*#include <stdio.h>

int	main(void)
{
	printf("The square root of %d is %d\n", -2000, ft_sqrt(-2000));
	printf("The square root of %d is %d\n", 0, ft_sqrt(0));
	printf("The square root of %d is %d\n", 217897, ft_sqrt(217897));
	printf("The square root of %d is %d\n", 5, ft_sqrt(5));
	printf("The square root of %d is %d\n", 85, ft_sqrt(85));
	printf("The square root of %d is %d\n", 169, ft_sqrt(169));
}*/
