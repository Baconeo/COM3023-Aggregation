#include "contiki.h"
#include "lib/random.h"
#include "net/rime.h"
#include "etimer.h"
#include <stdio.h>

#include "dev/light-sensor.h"
#include "dev/sht11-sensor.h"
#include "dev/button-sensor.h"
#include "dev/leds.h"

#define BROADCAST_PORT 1234
#define CHECK_INTERVAL (5 * CLOCK_SECOND)

PROCESS(, " Process");
PROCESS(, " Process");
AUTOSTART_PROCESSES();
