#include <crm/cluster/internal.h>

void post_cache_update(int instance);

extern gboolean check_join_state(enum crmd_fsa_state cur_state, const char *source);

#define proc_flags (crm_proc_crmd | crm_get_cluster_proc())
