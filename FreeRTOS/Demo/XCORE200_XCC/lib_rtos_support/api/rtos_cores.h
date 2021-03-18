<<<<<<< HEAD
// Copyright (c) 2019, XMOS Ltd, All rights reserved
=======
// Copyright 2019 XMOS LIMITED. This Software is subject to the terms of the 
// XMOS Public License: Version 1
>>>>>>> d65f82bc8d6d34a00091a8191f4ba9c4f97d4588

#ifndef RTOS_CORES_H_
#define RTOS_CORES_H_

<<<<<<< HEAD
#include "xcore_c.h"

=======
>>>>>>> d65f82bc8d6d34a00091a8191f4ba9c4f97d4588
/* The maximum number of cores an SMP RTOS may use */
#define RTOS_MAX_CORE_COUNT 8

#if __XC__
extern "C" {
#endif //__XC__

/**
 * The RTOS must call this once for each core it
 * starts its scheduler on.
 *
 * \returns the ID of the core it is called on
 */
int rtos_core_register(void);

/**
 * Returns the ID of the calling core.
 *
 * rtos_core_register() must have been previously
 * called on the calling core.
 *
 * \returns the ID of the calling core.
 */
int rtos_core_id_get(void);

/**
 * Translates an RTOS core ID into the logical "xcore"
 * core ID.
 *
 * \param core_id An RTOS core ID
 *
 * \returns the logical "xcore" core ID
 */
int rtos_logical_core_id_get(int core_id);

/**
 * Returns the number of cores the RTOS is currently
 * running on.
 *
 * \returns the number of cores the RTOS is running on.
 */
int rtos_core_count(void);

#ifdef __XC__
}
#endif //__XC__

#endif /* RTOS_CORES_H_ */
