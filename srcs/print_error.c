/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaveria <lgaveria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 16:00:43 by lgaveria          #+#    #+#             */
/*   Updated: 2021/04/30 16:58:21 by lgaveria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ping.h"

void	print_error(char *error, char *arg)
{
	ft_putstr_fd("\033[91mft_ping: error: \033[0m", 2);
	ft_putstr_fd(error, 2);
	if (arg)
	{
		ft_putstr_fd(" '", 2);
		ft_putstr_fd(arg, 2);
		ft_putstr_fd("'", 2);
	}
	ft_putchar_fd('\n', 2);
}
