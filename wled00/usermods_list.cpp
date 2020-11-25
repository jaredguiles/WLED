#include "wled.h"
/*
 * Register your v2 usermods here!
 *   (for v1 usermods using just usermod.cpp, you can ignore this file)
 */

/*
 * Add/uncomment your usermod filename here (and once more below)
 * || || ||
 * \/ \/ \/
 */
#include "stairway-wipe-usermod-v2.h"
#ifdef USERMOD_DALLASTEMPERATURE
#include "../usermods/Temperature/usermod_temperature.h"
#endif
//#include "usermod_v2_empty.h"

void registerUsermods()
{
  /*
   * Add your usermod class name here
   * || || ||
   * \/ \/ \/
   */
  usermods.add(new StairwayWipeUsermod());
  #ifdef USERMOD_DALLASTEMPERATURE
  usermods.add(new UsermodTemperature());
  #endif
  //usermods.add(new UsermodRenameMe());
}