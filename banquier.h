/*
 * File:   banquier.h
 * Author: ludovic
 *
 * Created on 12 décembre 2011, 11:44
 */

#ifndef BANQUIER_H
#define	BANQUIER_H

#include <semaphore.h>
#include <pthread.h>
#include "list.h"
#include "dictionary.h"

typedef struct {
    dictionary* disponibilites;
    pthread_mutex_t mutex_modification;
} banquier;

banquier* banquier_new(dictionary *disponibles);
void banquier_lock(banquier* a, list* l);
void banquier_unlock(banquier* a, list* l);
char* banquier_disponibilites_tostring(banquier* self);

#endif	/* BANQUIER_H */

