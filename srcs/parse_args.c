/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaveria <lgaveria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 16:01:36 by lgaveria          #+#    #+#             */
/*   Updated: 2021/04/30 16:58:11 by lgaveria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ping.h"

static int	spot_help(char *arg)
{
	if (!ft_strcmp(arg, "-h"))
		return (TRUE);
	return (FALSE);
}

static int	spot_verbose(char *arg)
{
	if (!ft_strcmp(arg, "-v"))
		return (TRUE);
	return (FALSE);
}

static void	print_usage(void)
{
	ft_putstr("Usage: ft_ping [-h] [-v] destination\n");
}

static int	parse_arg(char *arg, char **destination, int *verbose, int *help)
{
	if (spot_help(arg))
		*help = TRUE;
	else if (spot_verbose(arg))
		*verbose = TRUE;
	else if (*destination)
	{
		print_error("unexpected argument", arg);
		print_usage();
		return (FAIL);
	}
	else
	{
		*destination = ft_strdup(arg);
		if (!*destination)
		{
			print_error("malloc failed in ", "parse_args");
			return (FAIL);
		}
	}
	return (SUCCESS);
}

int	parse_args(int argc, char **argv, char **destination, int *verbose)
{
	int	i;
	int	help;

	i = 1;
	help = FALSE;
	while (i < argc)
	{
		if (parse_arg(argv[i], destination, verbose, &help) == FAIL)
			return (FAIL);
		i++;
	}
	if (!*destination)
		help = TRUE;
	if (help)
		print_usage();
	return (SUCCESS);
}
