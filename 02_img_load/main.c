/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokang <jisokang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 00:33:16 by jisokang          #+#    #+#             */
/*   Updated: 2021/07/04 21:12:52 by jisokang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../minilibx_mms_20210621/mlx.h"

typedef struct	s_img
{
	void		*ptr;
	int			w;
	int			h;
	int			x;
	int			y;
}				t_img;

void	*ft_xpm_to_img(void *mlx, char *str, t_img img)
{
	return(mlx_png_file_to_image(mlx, str, &img.w, &img.h));
}

void	ft_put_img_to_win(void *mlx, void *win, t_img img)
{
	mlx_put_image_to_window(mlx, win, img.ptr, img.x, img.y);
}

int	main(void)
{
	void	*mlx;
	void	*win;

	void	*img1;
	int		img1_width;
	int		img1_height;


	t_img img_png;
	img_png.x = 0;
	img_png.y = 0;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 640, 480, "[MMSbeta] mlx load img");
	img_png.ptr = mlx_png_file_to_image(mlx, "hero.png", &img_png.w, &img_png.h);
	mlx_put_image_to_window(mlx, win, img_png.ptr, 140, 100);
	mlx_loop(mlx);
}
