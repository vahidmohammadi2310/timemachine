#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include "main.h"
#include "threads.h"
#ifdef HAVE_LIBLO
#include <lo/lo.h>
#endif

int osc_handler_nox(const char *path, const char *types, lo_arg **argv,
    int argc, lo_message msg, void *user_data)
{
  if (user_data) {
    recording_start();
  } else {
    recording_stop();
  }

  return 0;
}
