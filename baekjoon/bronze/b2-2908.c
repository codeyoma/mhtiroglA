/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b2908.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yongmkim <codeyoma@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:25:05 by yongmkim          #+#    #+#             */
/*   Updated: 2021/07/29 18:53:24 by yongmkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int nb1, nb2, idx, beak = 100, max;
	char b_nb1[4], b_nb2[4];

	scanf("%d %d", &nb1, &nb2);
	for(idx = 2; idx >= 0; idx--)
	{
		b_nb1[idx] = (nb1 / beak) + '0';
		b_nb2[idx] = (nb2 / beak) + '0';
		nb1 %= beak;
		nb2 %= beak;
		beak /= 10;
	}
	b_nb1[idx] = '\0';
	b_nb2[idx] = '\0';


	idx = 0;
	nb1 = 0;
	while (b_nb1[idx])
	{
		nb1 = (nb1 * 10) + (b_nb1[idx] - '0');
		idx++;
	}
	idx = 0;
	nb2 = 0;
	while (b_nb2[idx])
	{
		nb2 = (nb2 * 10) + (b_nb2[idx] - '0');
		idx++;
	}
	if (nb1 > nb2)
		printf("%d\n", nb1);
	else
		printf("%d\n", nb2);
	return (0);
}
