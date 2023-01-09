/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 00:24:46 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/01/09 01:00:18 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/problem.h"

int main(void)
{
    unsigned long bytes;
    unsigned long lines;
    unsigned long words;
    int           use;
    
    bytes = 0;
    lines = 0;
    words = 0;
    while (true)
    {
        use = fgetc(stdin);
        if (!(use ^ -1))
            break;
        bytes++;
        if (isspace((unsigned char)use))
            words ++;
        if (!(use ^ '\n'))
            lines++;
    }
    printf("     %lu   %lu   %lu\n", lines, words, bytes);
    return (EXIT_SUCCESS);
}
