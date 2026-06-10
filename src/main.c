#include "philo.h"

// void	*test(void *n)
// {
// 	int nb = *(int *)n;
// 	printf("test : %d\n", nb);
// 	return (NULL);
// }

int	main(int argc, char *argv[])
{
	t_data *data;

	if (parsing(argc, argv))
	{
		write(1, "stop\n", 5);
		return (1);
	}
	data = NULL; // need ? But is good to do.
	data = malloc(sizeof(t_philo));
	if (!data)
		return (0);
	data->time_to_die = ft_atol(argv[2]);
	data->time_to_eat = ft_atol(argv[3]);
	data->time_to_sleep = ft_atol(argv[4]);
	philo_data(data, argc, argv);

	// usleep(200);
	// printf("main : %ld\n", sizeof(philo));

	// printf("main : %d\n", philo[1]->data.time_to_die);
	get_time(data);
	free(data);
	return (0);
}


// LIMIT : philos <= 200 !! 

/*
	t_data data;
	t_data *ptr = &data (0xf4564535)
	(*ptr = data);
	(*ptr).philos;
	ptr->philos = *ptr / ptr.philos
*/