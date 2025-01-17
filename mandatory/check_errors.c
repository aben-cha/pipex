/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 10:13:41 by aben-cha          #+#    #+#             */
/*   Updated: 2024/07/01 10:13:58 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	check_errors(int fd, char *s)
{
	if (fd == -1)
	{
		perror(s);
		exit(1);
	}
}

void	ft_close(int fd)
{
	int	a;

	a = close(fd);
	check_errors(a, "Error close");
}

void	ft_dup2(int oldfd, int newfd)
{
	int	a;

	a = dup2(oldfd, newfd);
	check_errors(a, "Error close");
}

void	ft_pipe(int *fd)
{
	check_errors(pipe(fd), "Error creating pipe");
}

void	ft_wait(int pid)
{
	pid_t	terminated_pid;

	terminated_pid = waitpid(pid, NULL, 0);
	if (terminated_pid == -1)
	{
		perror("Error waiting");
		exit(1);
	}
}
