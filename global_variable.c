/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   globalr_variable.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <mfagri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:57:26 by mfagri            #+#    #+#             */
/*   Updated: 2022/06/04 19:07:22 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	get_glo(int i)
{
	static int	j;

	if (i == 0)
		j = 0;
	else if (i == 1)
		j = 1;
	else
		return (j);
	return (j);
}