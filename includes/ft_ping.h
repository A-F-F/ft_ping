/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ping.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaveria <lgaveria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 15:03:49 by lgaveria          #+#    #+#             */
/*   Updated: 2021/04/30 16:47:41 by lgaveria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PING_H
# define FT_PING_H

# include "libft.h"
# include <stdlib.h>

# define TRUE 		1
# define SUCCESS	1
# define FALSE 		0
# define FAIL		0

int		parse_args(int argc, char **argv, char **destination, int *verbose);
void	print_error(char *error, char *arg);

#endif