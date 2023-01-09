/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Memory statistics.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-idr <yoel-idr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:31:14 by yoel-idr          #+#    #+#             */
/*   Updated: 2023/01/09 16:44:34 by yoel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/problem.h"

/* Returns a structure containing information about memory allocations so far.*/

typedef struct m61_statistics {
    unsigned long long nactive;           // number of active allocations [#malloc - #free]
    unsigned long long active_size;       // number of bytes in active allocations
    unsigned long long ntotal;            // number of allocations, total
    unsigned long long total_size;        // number of bytes in allocations, total
    unsigned long long nfail;             // number of failed allocation attempts
    unsigned long long fail_size;         // number of bytes in failed allocation attempts
    uintptr_t heap_min;                   // smallest address in any region ever allocated
    uintptr_t heap_max;                   // largest address in any region ever allocated
}               t_m61_statistics;

t_m61_statistics    get_statistics(void);

t_m61_statistics    get_statistics(void)
{
    t_m61_statistics    statis;
    
    memset(&statis, 0, sizeof(t_m61_statistics));
   // statis.active_size = (unsigned long long)sizeof((unsigned long long);
    
}

int main(void)
{
    t_m61_statistics ss;
    
    ss = get_statistics();
}