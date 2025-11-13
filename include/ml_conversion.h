/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ml_conversion.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 20:08:57 by joao-alm          #+#    #+#             */
/*   Updated: 2025/11/13 15:30:33 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ML_CONVERSION_H
# define ML_CONVERSION_H

char		*ft_itoa(int n);
int			ft_atoi(const char *nptr);
int			ft_toupper(int c);
int			ft_tolower(int c);
long long	ft_atoll_valid(const char *str, long long min, long long max,
				int *valid);

#endif //JAL_CONVERSION_H
