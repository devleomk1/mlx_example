/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 00:33:16 by jisokang          #+#    #+#             */
/*   Updated: 2021/07/07 23:18:07 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../mlx_mms/mlx.h"

int	main(void)
{
	void	*mlx;
	void	*win;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 640, 480, "[MMSbeta] mlx string put");
	mlx_string_put(mlx, win, 250, 220, 0xFFFFFF, "Hello World!");
	mlx_string_put(mlx, win, 265, 250, 0x450A06, "YOU DIED");
	mlx_loop(mlx);
}
