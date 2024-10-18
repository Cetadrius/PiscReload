/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:50:55 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/16 11:50:56 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if ((nb > 0) && (nb < 13))
	{
		return (nb = nb * ft_recursive_factorial(nb - 1));
	}
	else if (nb == 0)
	{
		return (1);
	}
	return (0);
}
/*#include <stdio.h>

int	main(void)
{
	printf("The factorial number of");
	printf(" %d is %d.\n", -1, ft_recursive_factorial(-1));
	printf("The factorial number of");
	printf(" %d is %d.\n", 0, ft_recursive_factorial(0));
	printf("The factorial number of");*/
