/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaveria <lgaveria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 14:48:52 by lgaveria          #+#    #+#             */
/*   Updated: 2021/04/30 17:01:53 by lgaveria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ping.h"

int	main(int argc, char **argv)
{
	int		verbose;
	char	*destination;

	destination = NULL;
	verbose = FALSE;
	if (parse_args(argc, argv, &destination, &verbose) == FAIL)
		return (EXIT_FAILURE);
	if (destination)
		ft_putstr("executing ft_ping...\n");
	return (EXIT_SUCCESS);
}
