/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:01:15 by afilipe-          #+#    #+#             */
/*   Updated: 2024/10/16 13:01:18 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_display(char *string)
{
	int		fl_ptr;
	char	c;

	fl_ptr = open(string, O_RDONLY, 0);
	if (fl_ptr == -1)
		ft_putstr("Cannot read file.\n");
	while (read(fl_ptr, &c, 1) == 1)
		write(1, &c, 1);
	close(fl_ptr);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n");
	if (argc == 2)
		ft_display(argv[1]);
	if (argc > 2)
		ft_putstr("Too many arguments.\n");
	return (0);
}
