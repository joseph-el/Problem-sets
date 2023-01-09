/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sort arguments.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:24:25 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/01/09 13:08:11 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/problem.h"
# define M_MINE 1
# define M_COUT 4

int count_ascii(char *str, char **args, int *l_min, int size, int mode)
{
    int min_ascii;
    int ascii;
    int i;
    int j;
    
    ascii = 0;
    if ((mode & M_COUT) && str)
        while (*str && str)
            ascii += *str++; 
    else if ((mode & M_MINE) && args)
    {
        i = -1;
        min_ascii = 0;
        while (++i < size)
        {
            if ((count_ascii(args[i], NULL, NULL, size, M_COUT) < min_ascii))
                min_ascii = count_ascii(args[i], NULL, NULL, size, M_COUT);
        }
        return (min_ascii);
    }
    return (ascii);
}

void    selection_sort(char **args, int ac)
{
    int     l_min;
    int     i;
    
    i = -1;
    l_min = 0;
    while (++i < ac)
    {
        l_min = count_ascii(NULL, args, &l_min, ac, M_MINE);
        printf("min-->|%d|-->|%d|\n", i + 1, l_min);
    }
}

int main(int ac, char **args)
{
    if (ac < 2)
        return (EXIT_FAILURE);
    selection_sort(args, ac);
    
    return (EXIT_SUCCESS);
}