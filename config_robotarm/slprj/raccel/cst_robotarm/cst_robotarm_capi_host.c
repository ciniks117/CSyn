#include "cst_robotarm_capi_host.h"
static cst_robotarm_host_DataMapInfo_T root;
static int initialized = 0;
rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        cst_robotarm_host_InitializeDataMapInfo(&(root), "cst_robotarm");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
