/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sort Argument.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:10:23 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/01/09 13:39:39 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/problem.h"

int count_ascii(char *str)
{
    int ascii;

    ascii = 0;
    while (*str && str)
        ascii += *str++;
    return (ascii);
}

int main(int ac, char **args)
{
    int min_index;
    int l_min;
    int status;
    int i;

    l_min = -1;
    status = 0;
    while (true)
    {
        i = -1;
        while (++i < ac)
        {
            if ((count_ascii(args[i]) >= l_min))
                min_index = i;
            fprintf(stdout, "%s\n", args[min_index]);
            status ++;
        }
        if (status == ac -1)
            break;
    }
    return (EXIT_SUCCESS);
}