#include <stdio.h>
#include <stdlib.h>
#include "pair.h"
/*------------bubble-----------------------*/
struct s_pair_t {
    int fst;
    int snd;
};
/*--------------UwU---------------------*/
pair_t pair_new(int x, int y){
	pair_t p = NULL;
	p = malloc(sizeof(pair_t));
	p->fst = x;
	p->snd = y;
	return p;
}
/*
 * DESC: Creates a new pair with components (x, y)
 *
 * p = pair_new(x, y);
 *
 * POS: {p --> (x, y)}
 */

int pair_first(pair_t p){ return p->fst; }
/*
 * DESC: Returns the first component of p
 *
 * PRE: {p --> (x, y)}
 *
 *  fst = pair_first(p);
 *
 * POS: {fst == x}
 */

int pair_second(pair_t p){ return p->snd; }
/*
 * DESC: Returns the second component of p
 *
 * PRE: {p --> (x, y)}
 *
 *  snd = pair_second(p);
 *
 * POS: {snd == y}
 */

pair_t pair_swapped(pair_t p){
	pair_t q = NULL;
	q = malloc(sizeof(pair_t));
	q = pair_new(pair_second(p), pair_first(p));
	return q;
}
/*
 * DESC: Return a NEW pair with the components of p reversed
 *
 * PRE: {p --> (x, y)}
 *
 *  q = pair_swapped(p)
 *
 * POS: {pair_first(q) == pair_second(p) && pair_second(q) == pair_first(p)}
 *
 */

pair_t pair_destroy(pair_t p){free(p); p=NULL; return p; }
/*
 * DESC: Free memory if its necesary
 *
 */
