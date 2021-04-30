/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaveria <lgaveria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 15:14:24 by lgaveria          #+#    #+#             */
/*   Updated: 2021/04/30 15:33:55 by lgaveria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *left, const char *right)
{
	int	i;

	i = 0;
	if (!left || !right)
		return (left - right);
	while (left[i] && right[i] && left[i] == right[i])
		i++;
	return (left[i] - right[i]);
}
