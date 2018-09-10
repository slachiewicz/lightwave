/*
 * Copyright © 2012-2018 VMware, Inc.  All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the “License”); you may not
 * use this file except in compliance with the License.  You may obtain a copy
 * of the License at http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an “AS IS” BASIS, without
 * warranties or conditions of any kind, EITHER EXPRESS OR IMPLIED.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */



/*
 *  Module Name:
 *
 *  externs.h
 *
 *  Abstract:
 *
 *  Global variables definition.
 *
 */

#ifdef __cplusplus
extern "C" {
#endif

#ifdef REST_ENABLED

extern PVMREST_HANDLE gpVMCAHTTPHandle;
extern PVMREST_HANDLE gpVMCAHTTPSHandle;

extern VMCA_ACCESS_TOKEN_METHODS gVMCAAccessTokenMethods[];

extern uint32_t
VMCAHandleHttpRequest(
    PVMREST_HANDLE  pRESTHandle,
    PREST_REQUEST   pRequest,
    PREST_RESPONSE* ppResponse,
    uint32_t        paramsCount
    );

#endif

#ifdef __cplusplus
}
#endif
