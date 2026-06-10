#include "philo.h"

void	*test(void *n)
{
	int nb = *(int *)n;
	printf("test : %d\n", nb);
	return (NULL);
}

// int	main(int argc, char *argv[])
// {
// 	t_philo philo;
// 	int	arg = 12;
// 	// if (parsing(argc, argv))
// 	// 	return (1);

// 	// pthread_mutex_init(&philo.mutex, NULL); // initialise le mutex
// 	pthread_create(&philo.thread, NULL, test, &arg); //cree la thread
// 	pthread_join(philo.thread, NULL);  // attend que le thread fini // sans ca le programme fini et la thread (le temps de se creer) n;a pas encore fait son travail
	
// 	// data->fork = philo.number_of_philosophers;

// 	if (parsing(argc, argv))
// 	{
// 		write(1, "stop\n", 5);
// 		return (1);
// 	}
// 	init_philo(&philo);
// 	return (0);
// }

int	main(int argc, char *argv[])
{
	printf("t_data : %ld, t_data * : %ld\n", sizeof(t_data), sizeof(t_data *));
	return (0);
}


// LIMIT : philos <= 200 !!