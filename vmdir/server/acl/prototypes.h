/*
 * Copyright © 2012-2015 VMware, Inc.  All Rights Reserved.
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
 * Module Name: Directory Schema
 *
 * Filename: prototypes.h
 *
 * Abstract:
 *
 * Function prototypes
 *
 */

#ifndef _PROTOTYPES_H_
#define _PROTOTYPES_H_

#ifdef __cplusplus
extern "C" {
#endif

VOID
VmDirFreeOrgState(
    PVOID pOrgStat
    );

DWORD
VmDirInternalUpdateSequence(
    PVDIR_BACKEND_CTX pBETxn,
    PSTR pszObjectDN
    );

DWORD
VmDirSyncRIDSeqToDB(
    PSTR    pszDomainDN,
    PSTR    pszRID
    );

// acl.c

DWORD
VmDirGetObjectSidFromEntry(
    PVDIR_ENTRY pEntry,
    PSTR* ppszObjectSid, /* Optional */
    PSID* ppSid /* Optional */
    );

DWORD
VmDirSrvCreateAccessTokenWithDn(
    PSTR pszObjectDn,
    PACCESS_TOKEN* ppToken
    );

// security.c

DWORD
VmDirSecurityAclSelfRelativeToAbsoluteSD(
    PSECURITY_DESCRIPTOR_ABSOLUTE *ppAbsolute,
    PSECURITY_DESCRIPTOR_RELATIVE pRelative
    );

// objectSid.c

void
VmDirFindDomainRidSequenceWithDN(
    PCSTR pszDomainDN,
    PDWORD pRidSeq
    );

// ridsyncthr.c
DWORD
VmDirInitRidSynchThr(
    PVDIR_THREAD_INFO* ppThrInfo
    );

#ifdef __cplusplus
}
#endif

#endif // _PROTOTYPES_H_

