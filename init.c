#include "philo.h"

static void	*routine(void *arg) // t_philo *philo
{
	// (void)arg;
	t_philo	*philo;

	philo = (t_philo *)arg;
	printf("philo routine: %d\n", philo->id);
	pthread_mutex_lock(&philo->fork_left);
	pthread_mutex_lock(&philo->fork_right);
	// usleep(20000);

	// EAT OR SLEEP OR DIE
	// if eat => philo->meals_eaten++;
	// mutex unlock

	return (NULL);
}

// t_philo	*init_philo(t_philo *philo)
// {
// 	// memset(philo, 1, sizleof(t_philo));

// 	pthread_create(&philo->thread, NULL, routine, philo); // philo
// 	pthread_join(philo->thread, NULL);
// 	// printf("ok\n");
// 	return (philo); 
// }

int	philo_data(t_data *data, int argc, char *argv[])
{
	int		i;
	t_philo	*philo;
	(void)argc;

	printf("===philo_data===\n");
	i = 0;
	// memset(philo, 0, sizeof(t_philo)); //??
	data->number_of_philosophers = ft_atol(argv[1]);
	philo = malloc(sizeof(t_philo) * data->number_of_philosophers);
	if (!philo)
		return (1);

	
	while (i < data->number_of_philosophers)
	{
		printf("++++\n");
		philo[i].id = i + 1;
		// number of forks = number of philosophers

		//Tester MALLOC si echoue pour pthread
		pthread_create(&philo[i].thread, NULL, routine, &philo[i]); // philo adresse, donc &philo[i] pour le philo courant
		pthread_join(philo[i].thread, NULL);

		// if (philo->data.number_of_philosophers == 1)  // si 1 seul philo, 1 seule fork !
		// 	pthread_mutex_init(&philo->fork_left, NULL);


		// printf("philo init: %d\n", philo[i].id);
		// pthread_mutex_destroy(&philo[i].fork_left); //malloc libere?
		// pthread_mutex_destroy(&philo[i].fork_right); // malloc libere
		// free(&philo[i]); HERE????0 
		i++;
	}

	i = 0;
	while (i < data->number_of_philosophers)
	{
		// pthread_mutex_init(&phimlo[i].fork_left, NULL);
		pthread_mutex_init(&philo[i + 1].fork_right, NULL); // so 2 forks ?
		i++;
	}
	// 3 eme boucle pour mettre le fork left pour le philo d'avant ?

	
	// printf("philo init: %d, %d\n", philo[1].id, philo->data.time_to_die);
	// printf("philo init: %ld\n", sizeof(philo[1]));
	free(philo); // 1 seul malloc donc 1 seul free du philo (meme si j'ai malloc 4 ou 5.. c'est 1 seul malloc)
	return (0);
}


void	get_time(t_data *data)
{
	struct timeval	tv;
	
	data->time_to_die *= 1000;
	data->time_to_eat *= 1000;
	data->time_to_sleep *= 1000;

	gettimeofday(&tv, NULL);
	printf("main : %ld\n", tv.tv_sec);
	printf("main : %d\n", data->time_to_eat);

	// si attend le temps, arreter
}
