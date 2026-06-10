/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kislamov <kislamov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 14:21:01 by kislamov          #+#    #+#             */
/*   Updated: 2026/05/29 13:49:25 by kislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <pthread.h>
# include <sys/time.h>
# include <string.h>

// typedef struct s_philo	t_philo;

typedef struct s_data
{
	// t_philo			*philos;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	int				number_of_philosophers;
	// t_philo			*philos;
}					t_data;


typedef struct s_philo
{
	pthread_t		thread;
	int				id;
	int				meals_eaten;
	pthread_mutex_t	fork_left;
	pthread_mutex_t	fork_right;
	t_data			data;
}					t_philo;


// utils
int					parsing(int argc, char *argv[]);
long				ft_atol(const char *str);

// init
// t_philo				*init_philo(t_philo *philo);
int					philo_data(t_data *data, int argc, char *argv[]);
void				get_time(t_data *data);

// action
void				eating(t_philo *philo);
void				sleeping(t_philo *philo);
void				dead(t_philo *philo);

#endif