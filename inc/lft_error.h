/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lft_error.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:37:17 by joao-alm          #+#    #+#             */
/*   Updated: 2025/12/18 09:04:17 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LFT_ERROR_H
# define LFT_ERROR_H

# define ERROR_PINK "\033[38;5;211m"
# define ERROR_RESET "\033[0m"

# define E_NOMEM 69
# define E_FD_OPEN 70

int	*ft_exit_code(void);
int	put_error_msg(const char *err_str);
int	put_error(const char *err_str, const int err_no);

#endif
