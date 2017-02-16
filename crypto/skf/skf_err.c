/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2017 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <stdio.h>
#include <openssl/err.h>
#include <openssl/gmskf.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(ERR_LIB_SKF,func,0)
# define ERR_REASON(reason) ERR_PACK(ERR_LIB_SKF,0,reason)

static ERR_STRING_DATA SKF_str_functs[] = {
    {ERR_FUNC(SKF_F_SKF_CLOSEHANDLE), "SKF_CloseHandle"},
    {ERR_FUNC(SKF_F_SKF_DECRYPT), "SKF_Decrypt"},
    {ERR_FUNC(SKF_F_SKF_DECRYPTFINAL), "SKF_DecryptFinal"},
    {ERR_FUNC(SKF_F_SKF_DECRYPTINIT), "SKF_DecryptInit"},
    {ERR_FUNC(SKF_F_SKF_DECRYPTUPDATE), "SKF_DecryptUpdate"},
    {ERR_FUNC(SKF_F_SKF_DIGEST), "SKF_Digest"},
    {ERR_FUNC(SKF_F_SKF_DIGESTFINAL), "SKF_DigestFinal"},
    {ERR_FUNC(SKF_F_SKF_DIGESTINIT), "SKF_DigestInit"},
    {ERR_FUNC(SKF_F_SKF_DIGESTUPDATE), "SKF_DigestUpdate"},
    {ERR_FUNC(SKF_F_SKF_ENCRYPT), "SKF_Encrypt"},
    {ERR_FUNC(SKF_F_SKF_ENCRYPTFINAL), "SKF_EncryptFinal"},
    {ERR_FUNC(SKF_F_SKF_ENCRYPTINIT), "SKF_EncryptInit"},
    {ERR_FUNC(SKF_F_SKF_ENCRYPTUPDATE), "SKF_EncryptUpdate"},
    {ERR_FUNC(SKF_F_SKF_EXTECCDECRYPT), "SKF_ExtECCDecrypt"},
    {ERR_FUNC(SKF_F_SKF_EXTECCENCRYPT), "SKF_ExtECCEncrypt"},
    {ERR_FUNC(SKF_F_SKF_EXTECCSIGN), "SKF_ExtECCSign"},
    {ERR_FUNC(SKF_F_SKF_EXTECCVERIFY), "SKF_ExtECCVerify"},
    {ERR_FUNC(SKF_F_SKF_EXTRSAPRIKEYOPERATION), "SKF_ExtRSAPriKeyOperation"},
    {ERR_FUNC(SKF_F_SKF_EXTRSAPUBKEYOPERATION), "SKF_ExtRSAPubKeyOperation"},
    {ERR_FUNC(SKF_F_SKF_GENEXTECCKEYPAIR), "SKF_GenExtECCKeyPair"},
    {ERR_FUNC(SKF_F_SKF_GENEXTRSAKEY), "SKF_GenExtRSAKey"},
    {ERR_FUNC(SKF_F_SKF_GENRANDOM), "SKF_GenRandom"},
    {ERR_FUNC(SKF_F_SKF_GETDEVINFO), "SKF_GetDevInfo"},
    {ERR_FUNC(SKF_F_SKF_GETDEVSTATE), "SKF_GetDevState"},
    {ERR_FUNC(SKF_F_SKF_HANDLE_GET_CBCMAC_CTX), "SKF_HANDLE_get_cbcmac_ctx"},
    {ERR_FUNC(SKF_F_SKF_HANDLE_GET_CIPHER), "SKF_HANDLE_get_cipher"},
    {ERR_FUNC(SKF_F_SKF_HANDLE_GET_CIPHER_CTX), "SKF_HANDLE_get_cipher_ctx"},
    {ERR_FUNC(SKF_F_SKF_HANDLE_GET_CMAC_CTX), "SKF_HANDLE_get_cmac_ctx"},
    {ERR_FUNC(SKF_F_SKF_HANDLE_GET_KEY), "SKF_HANDLE_get_key"},
    {ERR_FUNC(SKF_F_SKF_HANDLE_GET_MD_CTX), "SKF_HANDLE_get_md_ctx"},
    {ERR_FUNC(SKF_F_SKF_MAC), "SKF_Mac"},
    {ERR_FUNC(SKF_F_SKF_MACFINAL), "SKF_MacFinal"},
    {ERR_FUNC(SKF_F_SKF_MACINIT), "SKF_MacInit"},
    {ERR_FUNC(SKF_F_SKF_MACUPDATE), "SKF_MacUpdate"},
    {ERR_FUNC(SKF_F_SKF_SETSYMMKEY), "SKF_SetSymmKey"},
    {0, NULL}
};

static ERR_STRING_DATA SKF_str_reasons[] = {
    {ERR_REASON(SKF_R_BUFFER_TOO_SMALL), "buffer too small"},
    {ERR_REASON(SKF_R_CTX_NOT_CREATED), "ctx not created"},
    {ERR_REASON(SKF_R_DECRYPT_FAILED), "decrypt failed"},
    {ERR_REASON(SKF_R_ENCODE_CIPHERTEXT_FAILED), "encode ciphertext failed"},
    {ERR_REASON(SKF_R_ENCODE_FAILED), "encode failed"},
    {ERR_REASON(SKF_R_ENCODE_SIGNATURE_FAILED), "encode signature failed"},
    {ERR_REASON(SKF_R_ENCRYPT_FAILED), "encrypt failed"},
    {ERR_REASON(SKF_R_FAIL), "fail"},
    {ERR_REASON(SKF_R_GEN_RSA_FAILED), "gen rsa failed"},
    {ERR_REASON(SKF_R_GET_PRIVATE_KEY_FAILED), "get private key failed"},
    {ERR_REASON(SKF_R_GET_PUBLIC_KEY_FAILED), "get public key failed"},
    {ERR_REASON(SKF_R_INVALID_ALGID), "invalid algid"},
    {ERR_REASON(SKF_R_INVALID_ALGOR), "invalid algor"},
    {ERR_REASON(SKF_R_INVALID_ARGUMENTS), "invalid arguments"},
    {ERR_REASON(SKF_R_INVALID_BLOB), "invalid blob"},
    {ERR_REASON(SKF_R_INVALID_CIPHERTEXT), "invalid ciphertext"},
    {ERR_REASON(SKF_R_INVALID_CIPHERTEXT_LENGTH),
     "invalid ciphertext length"},
    {ERR_REASON(SKF_R_INVALID_CIPHER_CTX_HANDLE),
     "invalid cipher ctx handle"},
    {ERR_REASON(SKF_R_INVALID_DIGEST_LENGTH), "invalid digest length"},
    {ERR_REASON(SKF_R_INVALID_ECC_PRIVATE_KEY), "invalid ecc private key"},
    {ERR_REASON(SKF_R_INVALID_ECC_PUBLIC_KEY), "invalid ecc public key"},
    {ERR_REASON(SKF_R_INVALID_EC_PRIVATE_KEY), "invalid ec private key"},
    {ERR_REASON(SKF_R_INVALID_EC_PUBLIC_KEY), "invalid ec public key"},
    {ERR_REASON(SKF_R_INVALID_FEED_BIT_LENGTH), "invalid feed bit length"},
    {ERR_REASON(SKF_R_INVALID_HANDLE), "invalid handle"},
    {ERR_REASON(SKF_R_INVALID_HANDLE_ALGOR), "invalid handle algor"},
    {ERR_REASON(SKF_R_INVALID_HANDLE_MAGIC), "invalid handle magic"},
    {ERR_REASON(SKF_R_INVALID_HANDLE_TYPE), "invalid handle type"},
    {ERR_REASON(SKF_R_INVALID_HASH_HANDLE), "invalid hash handle"},
    {ERR_REASON(SKF_R_INVALID_ID_LENGTH), "invalid id length"},
    {ERR_REASON(SKF_R_INVALID_INPUT_LENGTH), "invalid input length"},
    {ERR_REASON(SKF_R_INVALID_IV_LENGTH), "invalid iv length"},
    {ERR_REASON(SKF_R_INVALID_KEY_HANDLE), "invalid key handle"},
    {ERR_REASON(SKF_R_INVALID_KEY_LENGTH), "invalid key length"},
    {ERR_REASON(SKF_R_INVALID_MAC_HANDLE), "invalid mac handle"},
    {ERR_REASON(SKF_R_INVALID_PLAINTEXT_LENGTH), "invalid plaintext length"},
    {ERR_REASON(SKF_R_INVALID_RANDOM_LENGTH), "invalid random length"},
    {ERR_REASON(SKF_R_INVALID_RSA_PUBLIC_KEY), "invalid rsa public key"},
    {ERR_REASON(SKF_R_INVALID_SIGNATURE), "invalid signature"},
    {ERR_REASON(SKF_R_MALLOC_FAILED), "malloc failed"},
    {ERR_REASON(SKF_R_NO_PUBLIC_KEY), "no public key"},
    {ERR_REASON(SKF_R_NULL_ARGUMENT), "null argument"},
    {ERR_REASON(SKF_R_SIGN_FAILED), "sign failed"},
    {ERR_REASON(SKF_R_VERIFY_NOT_PASS), "verify not pass"},
    {0, NULL}
};

#endif

int ERR_load_SKF_strings(void)
{
#ifndef OPENSSL_NO_ERR

    if (ERR_func_error_string(SKF_str_functs[0].error) == NULL) {
        ERR_load_strings(0, SKF_str_functs);
        ERR_load_strings(0, SKF_str_reasons);
    }
#endif
    return 1;
}