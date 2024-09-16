/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_length.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastpoy <bastpoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 23:32:34 by bastpoy           #+#    #+#             */
/*   Updated: 2024/07/09 16:58:43 by bastpoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube3d.h"

static void	get_maxsize_x(t_pcub *cub)
{
	int	i;

	i = 0;
	while (cub->map[i])
	{
		if (ft_strlen1(cub->map[i], cub) > cub->x_max_size)
			cub->x_max_size = ft_strlen1(cub->map[i], cub);
		i++;
	}
}

static void	get_maxsize_y(t_pcub *cub)
{
	int	i;

	i = 0;
	while (cub->map[i])
	{
		i++;
	}
	cub->y_max_size = i;
}

void	get_xy_maxsize(t_pcub *cub)
{
	get_maxsize_x(cub);
	get_maxsize_y(cub);
}
