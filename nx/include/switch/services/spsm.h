/**
 * @file spsm.h
 * @brief SPSM service IPC wrapper.
 * @author SciresM
 * @copyright libnx Authors
 */
#pragma once
#include "../types.h"
#include "../sf/service.h"

Result spsmInitialize(void);
void spsmExit(void);
Service* spsmGetServiceSession(void);

Result spsmShutdown(bool reboot);
Result spsmPutErrorState(void);
