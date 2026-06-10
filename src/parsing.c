#include "philo.h"

long	ft_atol(const char *str)
{
	int	i;
	long	sign;
	long	res;

	// if (!str)
	// 	return (0);
	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

static int	is_number(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

// int	check_params(char *argv[])
// {
// 	int	i;
// 	int	n;

// 	i = 1;
// 	n = 0;
// 	while (argv[i])
// 	{
// 		if (!is_number(argv[i]))
// 			return (1);
// 		n = ft_atoi(argv[i]);
// 		if (n <= 0)
// 			return (1);
// 		i++;
// 	}
// }

int	parsing(int argc, char *argv[])
{
	// t_data *data;
	int	i;
	long	n;

	// data = malloc(sizeof(t_data));
	if (argc != 5 && argc != 6)
		return (1);
	if (argc == 5 || argc == 6)
	{
		i = 1;
		n = 0;
		while (argv[i])
		{
			if (!is_number(argv[i]))
				return (1);
			n = ft_atol(argv[i]);
			if (n <= -2147483648 && n >= 2147483647)
				return (1);
			if (n <= 0)
				return (1);
			i++;
		}
		// data->philos = ft_atol(argv[1]);
		// if (data->philos >= 200)
		// 	return (1);
		// philo->time_to_die = ft_atoi(argv[2]);
		// philo->time_to_eat = ft_atoi(argv[3]);
		// philo->time_to_sleep = ft_atoi(argv[4]);
	}
	// printf("%s", argv[4]);
	return (0);
}
