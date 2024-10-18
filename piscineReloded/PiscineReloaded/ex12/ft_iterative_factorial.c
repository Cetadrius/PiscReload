/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:14:29 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/16 11:14:33 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb == 0)
	{
		return (1);
	}
	else if ((nb > 0) && (nb < 13))
	{
		i = nb - 1;
		while (i > 0)
		{
			nb = nb * i;
			i--;
		}
		return (nb);
	}
	return (0);
}
/*#include <stdio.h>

int	main(void)
{
	printf("The factorial number of");
	printf(" %d is %d.\n", -1, ft_iterative_factorial(-1));
	printf("The factorial number of");
	printf(" %d is %d.\n", 0, ft_iterative_factorial(0));*/
