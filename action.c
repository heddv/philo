/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kislamov <kislamov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 13:39:44 by kislamov          #+#    #+#             */
/*   Updated: 2026/05/29 13:46:51 by kislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	eating(t_philo *philo)
{
	printf("%d is eating", philo->id);
	usleep(philo->data.time_to_eat);
}

void	sleeping(t_philo *philo)
{
	printf("%d is thinking", philo->id);
	usleep(philo->data.time_to_sleep);
}

void	dead(t_philo *philo)
{
	printf("%d is dead", philo->id);
	usleep(philo->data.time_to_die);
}