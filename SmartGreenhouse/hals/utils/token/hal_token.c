/*
 * Copyright (c) 2024 iSoftStone Education Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "hal_token.h"
#include "ohos_errno.h"
#include "ohos_types.h"

static int OEMReadToken(char *token, unsigned int len)
{
    // OEM need add here, read token from device
    (void)(token);
    (void)(len);
    return EC_SUCCESS;
}

static int OEMWriteToken(const char *token, unsigned int len)
{
    // OEM need add here, write token to device
    (void)(token);
    (void)(len);
    return EC_SUCCESS;
}

static int OEMGetAcKey(char *acKey, unsigned int len)
{
    // OEM need add here, get AcKey
    (void)(acKey);
    (void)(len);
    return EC_SUCCESS;
}

static int OEMGetProdId(char *productId, unsigned int len)
{
    // OEM need add here, get ProdId
    (void)(productId);
    (void)(len);
    return EC_SUCCESS;
}

static int OEMGetProdKey(char *productKey, unsigned int len)
{
    // OEM need add here, get ProdKey
    (void)(productKey);
    (void)(len);
    return EC_SUCCESS;
}


int HalReadToken(char *token, unsigned int len)
{
    if (token == NULL) {
        return EC_FAILURE;
    }

    return OEMReadToken(token, len);
}

int HalWriteToken(const char *token, unsigned int len)
{
    if (token == NULL) {
        return EC_FAILURE;
    }

    return OEMWriteToken(token, len);
}

int HalGetAcKey(char *acKey, unsigned int len)
{
    if (acKey == NULL) {
        return EC_FAILURE;
    }

    return OEMGetAcKey(acKey, len);
}

int HalGetProdId(char *productId, unsigned int len)
{
    if (productId == NULL) {
        return EC_FAILURE;
    }

    return OEMGetProdId(productId, len);
}

int HalGetProdKey(char *productKey, unsigned int len)
{
    if (productKey == NULL) {
        return EC_FAILURE;
    }

    return OEMGetProdKey(productKey, len);
}