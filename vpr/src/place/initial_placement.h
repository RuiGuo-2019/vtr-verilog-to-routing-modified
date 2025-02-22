#ifndef VPR_INITIAL_PLACEMENT_H
#define VPR_INITIAL_PLACEMENT_H

#include "vpr_types.h"

void initial_placement(enum e_pad_loc_type pad_loc_type, const char* constraints_file);
void place_one_block(const ClusterBlockId& blk_id, enum e_pad_loc_type pad_loc_type);
#endif
