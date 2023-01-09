/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Count bytes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 00:03:12 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/01/09 01:01:24 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/problem.h"

FILE *Fp;

int main(void)
{
    unsigned int    bytes;
    
    bytes = 0;
    while (fgetc(stdin) ^ -1)
        ++bytes;
    printf("Bytes : |%d|\n", bytes);
    return (EXIT_SUCCESS);
}