/*
 * Copyright © 2012-2016 VMware, Inc.  All Rights Reserved.
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

DWORD
TestDCAccountPasswordCode(
    PVMDIR_TEST_STATE pState
    );

DWORD
TestTombstone(
    PVMDIR_TEST_STATE pState
    );

DWORD
TestGroupMembership(
    PVMDIR_TEST_STATE pState
    );

DWORD
TestModrdn(
    PVMDIR_TEST_STATE pState
    );

VOID
TestModrdnCleanup(
    PVMDIR_TEST_STATE pState
    );

DWORD
TestModrdnSetup(
    PVMDIR_TEST_STATE pState
    );

DWORD
TestMultiValueAttr(
    PVMDIR_TEST_STATE pState
    );

DWORD
TestMultiValueAttrSetup(
    PVMDIR_TEST_STATE pState
    );

VOID
TestMultiValueAttrCleanup(
    PVMDIR_TEST_STATE pState
    );

