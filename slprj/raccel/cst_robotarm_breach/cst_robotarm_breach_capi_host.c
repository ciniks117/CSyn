#include "cst_robotarm_breach_capi_host.h"
static cst_robotarm_breach_host_DataMapInfo_T root;
static int initialized = 0;
rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        cst_robotarm_breach_host_InitializeDataMapInfo(&(root), "cst_robotarm_breach");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
