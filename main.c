/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomswb <tomswb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 23:17:55 by tomswb            #+#    #+#             */
/*   Updated: 2026/10/01 23:43:55 by tomswb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "./libft/ft_printf.h"
#include "./libft/get_next_line.h"
#include <fcntl.h>

int	main(int ac, char **av)
{
	int		fd;
	char	*s;

	(void) ac;
	fd = open(av[1], O_RDONLY);
	s = get_next_line(fd);
	ft_printf("Test this: %s = %d len\n", s, ft_strlen(s));
	close(fd);
}