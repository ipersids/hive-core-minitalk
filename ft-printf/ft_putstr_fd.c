/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipersids <ipersids@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:20:36 by ipersids          #+#    #+#             */
/*   Updated: 2024/11/28 12:05:08 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Outputs a string to the specified file descriptor.
 * 
 * This function writes the string `s` to the given file descriptor `fd`.
 * 
 * @param s The string to output.
 * @param fd The file descriptor to which the string is written.
 * 
 * @return size_t Number of characters that are written.
 */
size_t	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	if (!s)
		return (write_safe(fd, "(null)", 6));
	len = ft_strlen(s);
	return (write_safe(fd, s, len));
}
