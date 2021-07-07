/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 16:47:45 by jisokang          #+#    #+#             */
/*   Updated: 2021/07/07 23:17:31 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../mlx_mms/mlx.h"

int		main(void)
{
	void	*mlx;
	void	*win;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 640, 480, "my mlx window");
	mlx_loop(mlx);
}
