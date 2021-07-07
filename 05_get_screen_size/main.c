/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 23:33:35 by jisokang          #+#    #+#             */
/*   Updated: 2021/07/08 02:13:03 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../mlx_mms/mlx.h"

int	main(void)
{
	void	*mlx;
	void	*win;

	int	res_x;
	int	res_y;

	mlx = mlx_init();
	mlx_get_screen_size(mlx, &res_x, &res_y);
	printf("-------------------------------------\n");
	printf("your display resolution : %d x %d\n", res_x, res_y);
	printf("-------------------------------------\n");
	win = mlx_new_window(mlx, res_x, res_y, "[MMS] mlx get screen size");
	mlx_loop(mlx);
}
