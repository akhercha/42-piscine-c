/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhercha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 19:14:54 by akhercha          #+#    #+#             */
/*   Updated: 2017/07/20 16:19:02 by akhercha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		i;
	int		cpt;

	i = 0;
	cpt = 0;
	while (tab[i] != 0)
	{
		cpt = f(tab[i]) == 1 ? cpt + 1 : cpt;
		i = i + 1;
	}
	return (cpt);
}
