/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ipcal.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuhkim <kyuhkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 12:50:01 by kyuhkim           #+#    #+#             */
/*   Updated: 2021/01/20 22:28:43 by kyuhkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ipcal.h"

unsigned int		g_ip;
unsigned char		g_subnet_bit;
unsigned int		g_c_mask;

void				ft_show_prompt(void)
{
	int				ip_length;

	write(1, "input ip = [", 12);
	ft_show_default_ip_class();
	write(1, ":", 1);
	ip_length = ft_show_ip();
	while (ip_length++ < MAX_IP_V4_LENGTH + 3)
		write(1, " ", 1);
	write(1, "] > ", 4);
}

int					ft_process_calculater(char *buff)
{
	if (!buff)
		return (0);
	if (ft_check_form(buff) < 0)
		return (-1);
	return (0);
}

int					main(void)
{
	char			buff[BUFFER_SIZE];

	ft_show_whole_file("./f_help\0");
	ft_show_prompt();
	while (1)
	{
		read(0, buff, BUFFER_SIZE);
		if (ft_process_calculater(buff) < 0)
			break ;
	}
}
