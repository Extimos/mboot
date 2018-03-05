//<MStar Software>
//***********************************************************************************
//MStar Software
//Copyright (c) 2010 - 2012 MStar Semiconductor, Inc. All rights reserved.
//All software, firmware and related documentation herein (��MStar Software��) are intellectual property of MStar Semiconductor, Inc. (��MStar��) and protected by law, including, but not limited to, copyright law and international treaties.  Any use, modification, reproduction, retransmission, or republication of all or part of MStar Software is expressly prohibited, unless prior written permission has been granted by MStar. 
//By accessing, browsing and/or using MStar Software, you acknowledge that you have read, understood, and agree, to be bound by below terms (��Terms��) and to comply with all applicable laws and regulations:
//
//1. MStar shall retain any and all right, ownership and interest to MStar Software and any modification/derivatives thereof.  No right, ownership, or interest to MStar Software and any modification/derivatives thereof is transferred to you under Terms.
//2. You understand that MStar Software might include, incorporate or be supplied together with third party��s software and the use of MStar Software may require additional licenses from third parties.  Therefore, you hereby agree it is your sole responsibility to separately obtain any and all third party right and license necessary for your use of such third party��s software. 
//3. MStar Software and any modification/derivatives thereof shall be deemed as MStar��s confidential information and you agree to keep MStar��s confidential information in strictest confidence and not disclose to any third party.  
//4. MStar Software is provided on an ��AS IS�� basis without warranties of any kind. Any warranties are hereby expressly disclaimed by MStar, including without limitation, any warranties of merchantability, non-infringement of intellectual property rights, fitness for a particular purpose, error free and in conformity with any international standard.  You agree to waive any claim against MStar for any loss, damage, cost or expense that you may incur related to your use of MStar Software.  
//   In no event shall MStar be liable for any direct, indirect, incidental or consequential damages, including without limitation, lost of profit or revenues, lost or damage of data, and unauthorized system use.  You agree that this Section 4 shall still apply without being affected even if MStar Software has been modified by MStar in accordance with your request or instruction for your use, except otherwise agreed by both parties in writing.
//5. If requested, MStar may from time to time provide technical supports or services in relation with MStar Software to you for your use of MStar Software in conjunction with your or your customer��s product (��Services��).  You understand and agree that, except otherwise agreed by both parties in writing, Services are provided on an ��AS IS�� basis and the warranty disclaimer set forth in Section 4 above shall apply.  
//6. Nothing contained herein shall be construed as by implication, estoppels or otherwise: (a) conferring any license or right to use MStar name, trademark, service mark, symbol or any other identification; (b) obligating MStar or any of its affiliates to furnish any person, including without limitation, you and your customers, any assistance of any kind whatsoever, or any information; or (c) conferring any license or right under any intellectual property right.
//7. These terms shall be governed by and construed in accordance with the laws of Taiwan, R.O.C., excluding its conflict of law rules.  Any and all dispute arising out hereof or related hereto shall be finally settled by arbitration referred to the Chinese Arbitration Association, Taipei in accordance with the ROC Arbitration Law and the Arbitration Rules of the Association by three (3) arbitrators appointed in accordance with the said Rules.  The place of arbitration shall be in Taipei, Taiwan and the language shall be English.  
//   The arbitration award shall be final and binding to both parties.
//
//���B�Ҧ��n��B����ά�������(�U�١uMStar Software�v)����MStar Semiconductor, Inc. (�U�١uMStar�v)�����z�]���v�ì������k��(�]�A��������ۧ@�v�k�ΰ�ڱ���)�ҫO�@�A���󥼸gMStar�ƫe�ѭ���i���ϥΡB�ק�B���s�B�ǰe�Τ��}�����T��C
//�@���z�i�J�B�s���Ψϥ�MStar Software�A�z�Y�n���z�w��Ū�B�F�ѨæP�N���U�C���ڡ]�U�١u�����ڡv�^�ҩ���ñN��u�����k�W���W�w�G
//
//1.	MStar���O��MStar Software�Ψ�ק磌���l�ͪ�������P�������v�Q�B�Ҧ��v�ΧQ�q�A�z�å��]�����ڦӨ��o����MStar Software�Ψ�ק磌���l�ͪ�������P�������v�Q�B�Ҧ��v�ΧQ�q�C
//2.	�z�F��MStar Software�i��t���ε��X���ݩ�ĤT�H���n��ΫY�P�ĤT�H���n��@�ִ��ѡA�Өϥ�MStar Software�i��ݥt��V�ĤT�H���o���v�A�]���z�P�N�z�N�ۦ�t�d�V�����ĤT�H���o���v�H�X�k�ϥ�MStar Software�C
//3.	MStar Software�Ψ�ק磌���l�ͪ����Q����MStar�����K��T�A�z�P�N�N�H�̾��K�O�sMStar�����K��T�B���N�����S������ĤT�H�C
//4.	MStar Software�Y�u�̲{���v�Ҵ��ѦӵL�����O�CMStar�󦹧_�{��MStar Software���ѥ����O�A�]�A��������i�ӫ~�ơB���I�v�B�ŦX�S�w�ϥΥت��B�L�岫�βŦX�����ڼзǤ���O�C�z�P�N�N���|��MStar�D�i�z�]�ϥ�MStar Software�ҥͤ�����l���B�l�`�B�O�ΩΤ�X�C����󱡪p�U�AMStar��󪽱����B�������B���a���Υ��M���l�`�����t�d���A�]�A��������Q���禬�l���B��Ƥ����l�򥢤Ψt�γQ���g���v�ϥΡC�z�æP�N�A������t���ѭ���ĳ�~�A�Y��MStar���̱z���n�D�Ϋ��ܦӭק�MStar Software�A����4�����W�w���~��A�ΦӤ����v�T�C
//5.	�p�g�n�D�AMStar���ɱN���ѧ޳N�䴩�ΪA�Ȥ��z�A�H�Q�z�����~�i�H�PMStar Software�@�P�ϥ�(�U�١u�A�ȡv)�A�z�F�ѨæP�N�A������t���ѭ���ĳ�~�A�Ҧ��A�ȧ��Y�u�H�{���v���ѡA��4���������Ѿ�O�����W�w�����A�Τ��C
//6.	�����ڤ�������ڤ��o�Q������(�L�ר��q�ܡB�T�Ϩ���h�Ψ䥦)�G(a) �¤������v�Q�H�ϥ�MStar���W�١B�ӼСB�A�ȼг��B�Ÿ��Ψ䥦�ѧO�Ϲ��F(b)�Ҥ�MStar�Ψ����Y���~���Ѥ�����H(�]�A��������z�αz���Ȥ�)����Φ�����U�θ�T���q�ȡF��(c) �¤����󴼼z�]���v�C
//7.	���������̤��إ���k�߬��Ǿڪk(���t��Ĭ�k�h)�C�����󥻱��کҥͩλP�����ڬ�������ĳ�̲����̤��إ������k�θӨ�|������W�h�ѨM�A�������3�W����H�H�^��b�x�W�x�_�i��A����H���̤��إ�������|������W�h��X�A����P�_�����ק����B�����觡������O�C
//***********************************************************************************
//<MStar Software>

///////////////////////////////////////////////////////////////////////////////////////////////////
///
/// file    cmd_secure.c
/// @brief  SCS Main Function
/// @author MStar Semiconductor Inc.
///////////////////////////////////////////////////////////////////////////////////////////////////


//-------------------------------------------------------------------------------------------------
//  Include Files
//-------------------------------------------------------------------------------------------------
#include <common.h>
#include <command.h>
#include <secure/MsSecureBoot.h>
#include <secure/MsSecureCommon.h>
#include <secure/crypto_rsa.h>
#include <secure/crypto_sha.h>
#include <secure/crypto_func.h>
#include <secure/crypto_aes.h>
#include <secure/crypto_auth.h>
#include <secure/apiSecureBoot.h>
#include <MsTypes.h>
#include <MsVfs.h>
#include <MsSystem.h>
#include <exports.h>
#include <ShareType.h>
#include <MsDebug.h>
#include <MsUtility.h>
#include <MsUpgradeUtility.h>
#include <MsEnvironment.h>


//-------------------------------------------------------------------------------------------------
//  Debug
//-------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------
//  Local Defines
//-------------------------------------------------------------------------------------------------
#define DEFAULT_SEGMENT_SIZE 8192
#define CERTIFICATE_LOCATION        "certificate"
#define RSA_PUBLIC_KEY_PATH "/RSAPublicKeyAPP.bin"
#define AES_KEY_PATH "/Kcust.bin"





//-------------------------------------------------------------------------------------------------
//  Local Structurs
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//  Global Variables
//-------------------------------------------------------------------------------------------------


//-------------------------------------------------------------------------------------------------
//  Local Variables
//-------------------------------------------------------------------------------------------------
static unsigned char aesKey[0x10];
static unsigned int segmentSize=0;
static unsigned char fileSizeReady=FALSE;
static unsigned int gfileSize=0;

static const MS_U8 RSA_Padding[] = {
        0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x30, 0x31, 0x30,
        0x0D, 0x06, 0x09, 0x60, 0x86, 0x48, 0x01, 0x65, 0x03, 0x04, 0x02, 0x01, 0x05, 0x00, 0x04, 0x20,
    };

//-------------------------------------------------------------------------------------------------
//  extern function
//-------------------------------------------------------------------------------------------------
extern int snprintf(char *str, size_t size, const char *fmt, ...);

//-------------------------------------------------------------------------------------------------
//  inline
//-------------------------------------------------------------------------------------------------


//-------------------------------------------------------------------------------------------------
//  Local function
//-------------------------------------------------------------------------------------------------
U32 Secure_SegmentSize (void);
int GetfileSizeforAESUsbUpgrade(const char *Interface,const char *device,char *file);



//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------


int do_file_segment_rsa_authendication(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
    //"filSegRSA usb %d:%d %s",device, partition, upgradeFile);
    #define TARGET_INTERFACE argv[1]
    #define TARGET_DEVICE  argv[2]
    #define TARGET_FILE  argv[3]
    /// chunk file size in all-in-one segment rsa mode
    #define SEGMENT_RSA_CHUNK_FILE_SIZE 128
    #define SEGMENT_RSA_CHUNK_SIGN_SIZE 256
    /// CHUNK file's start signature
    #define CHUNK_ID "MSTAR..."
    /// CHUNK file's end signature
    #define CHUNK_END "...mstar"
    #define RSA_PUBLIC_KEN_N_LEN 256
    #define RSA_PUBLIC_KEN_E_LEN 4
    #undef RSA_PUBLIC_KEY_LEN
    #define RSA_PUBLIC_KEY_LEN          (RSA_PUBLIC_KEN_N_LEN+RSA_PUBLIC_KEN_E_LEN)
    #define SHA256_DIGEST_SIZE ( 256 / 8)
    
    unsigned int i=0;
    unsigned int fileDataOffset=0;
    unsigned int fileDataLen=0;
    unsigned int fileHashOffset=0;
    unsigned int fileHashLen=0;
    unsigned int fileSignatureOffset=0;
    unsigned int fileSignatureLen=0;
    unsigned int *pReadChunk=NULL;
    char buffer[CMD_BUF]="\0";
    int ret=0;
    unsigned int readLen=0;
    unsigned char rsaOutBuf[RSA_KEY_DIGI_LEN*4+15]="\0";
    unsigned char rsaPublicKeyN[RSA_PUBLIC_KEN_N_LEN]="\0";
    unsigned char rsaPublicKeyE[RSA_PUBLIC_KEN_E_LEN]="\0";
    unsigned char hashOutBuf[SHA256_DIGEST_SIZE+15]="\0";

    unsigned char *pt=NULL;
    unsigned char chunkFileBuf[SEGMENT_RSA_CHUNK_FILE_SIZE+15]="\0";
    unsigned char chunkFileRSABuf[SEGMENT_RSA_CHUNK_SIGN_SIZE+15]="\0";
    unsigned int  *segmentBuf = NULL;
    int checkSegNums = 0;

    // for aligned 16
    unsigned char *ptrChunkFileBuf = ((MS_U32)chunkFileBuf+15) & ~0x0F;
    unsigned char *ptrChunkFileRSABuf = ((MS_U32)chunkFileRSABuf+15) & ~0x0F;
    unsigned char *ptrHashOutBuf = ((MS_U32)hashOutBuf+15) & ~0x0F;
    unsigned char *ptrRsaOutBuf = ((MS_U32)rsaOutBuf+15) & ~0x0F;
    unsigned int  *ptrSegmentBuf = NULL;
   
    UBOOT_TRACE("IN\n");
    if(argc<4)
        return -1;

    ret=GetfileSizeforAESUsbUpgrade(TARGET_INTERFACE,TARGET_DEVICE,TARGET_FILE);
    if(ret<0)
    {
        UBOOT_ERROR("GetfileSizeforAESUsbUpgrade fail\n");
        return -1;
    }

    //Get rsa upgrade public key
    ret = GetPublicKeyN(E_RSA_UPGRADE_PUBLIC_KEY,rsaPublicKeyN,RSA_PUBLIC_KEN_N_LEN);
    if(ret!=0)
    {
        UBOOT_ERROR("Get public key N fail\n");
        return -1;
    }
    ret = GetPublicKeyE(E_RSA_UPGRADE_PUBLIC_KEY,rsaPublicKeyE,RSA_PUBLIC_KEN_E_LEN);
    if(ret!=0)
    {
        UBOOT_ERROR("Get public key E fail\n");
        return -1;
    }

    //Read last segment , because we want to get chunk file.
    snprintf(buffer, CMD_BUF, "filepartloadSegAES %s %s %x %s %x %x", TARGET_INTERFACE, TARGET_DEVICE, (U32)ptrChunkFileBuf, TARGET_FILE, gfileSize-SEGMENT_RSA_CHUNK_FILE_SIZE, SEGMENT_RSA_CHUNK_FILE_SIZE);
    if(run_command(buffer, 0)!=0)
    {
        UBOOT_ERROR("Cmd:'%s' fail!!\n",buffer);
        return -1;
    }
    
    if(memcmp((const void *)((U32)ptrChunkFileBuf),CHUNK_ID,sizeof(CHUNK_ID))!=0){
        UBOOT_ERROR("[ERROR] CHUNK_ID compare fail\n");
        return -1;
    }

    if(memcmp((const void *)((U32)ptrChunkFileBuf+SEGMENT_RSA_CHUNK_FILE_SIZE-strlen(CHUNK_END)),CHUNK_END,strlen(CHUNK_END))!=0){
        UBOOT_ERROR("[ERROR] CHUNK_END compare fail\n");
        return -1;
    }

#if defined(CONFIG_CHUNK_VERIFY)
    UBOOT_INFO("Do Chunk Signature Verify...\n");
    if(CommonSHA((U32)ptrChunkFileBuf,(MS_U32)ptrHashOutBuf, SEGMENT_RSA_CHUNK_FILE_SIZE)!=0) {
        UBOOT_ERROR("CommonSHA Fail!!\n");
        return -1;
    }

    //Read last-1 segment (chunkid signature)
    snprintf(buffer, CMD_BUF, "filepartloadSegAES %s %s %x %s %x %x",
        TARGET_INTERFACE, TARGET_DEVICE, (U32)ptrChunkFileRSABuf, TARGET_FILE, gfileSize-(SEGMENT_RSA_CHUNK_SIGN_SIZE+SEGMENT_RSA_CHUNK_FILE_SIZE), SEGMENT_RSA_CHUNK_SIGN_SIZE);
    if(run_command(buffer, 0)!=0)
    {
        UBOOT_ERROR("Cmd:'%s' fail!!\n",buffer);
        return -1;
    }

    rsa_main((unsigned char *)ptrChunkFileRSABuf,rsaPublicKeyN,rsaPublicKeyE,ptrRsaOutBuf);

    UBOOT_DEBUG("Compare Chunk Signature...\n");
    for(i = 0; i<SHA256_DIGEST_SIZE; i++)
    {
        if(ptrHashOutBuf[i] != ptrRsaOutBuf[i+224])
        {
           UBOOT_ERROR("ptrHashOutBuf[%d]=0x%x, ptrRsaOutBuf[%d]=0x%x \n",i,ptrHashOutBuf[i],i,ptrRsaOutBuf[i+224]);
           UBOOT_DUMP((unsigned int)ptrRsaOutBuf, SHA256_DIGEST_SIZE);
           UBOOT_DUMP((unsigned int)ptrHashOutBuf, SHA256_DIGEST_SIZE);
           return -1;
        }
    }
#endif
    //Get hash, signature infor from chunk data
    pReadChunk=(unsigned int *)((U32)ptrChunkFileBuf);
    pReadChunk+=2;
    segmentSize=*pReadChunk;
    pReadChunk+=1;
    fileDataOffset=*pReadChunk;
    pReadChunk++;
    fileDataLen=*pReadChunk;
    pReadChunk++;

    fileHashOffset=*pReadChunk;
    pReadChunk++;
    fileHashLen=*pReadChunk;
    pReadChunk++;
    fileSignatureOffset=*pReadChunk;
    pReadChunk++;
    fileSignatureLen=*pReadChunk;
    pReadChunk++;
    
    UBOOT_DEBUG("segment size=0x%x\n",segmentSize);
    UBOOT_DEBUG("fileDataOffset=0x%x\n",fileDataOffset);
    UBOOT_DEBUG("fileDataLen=0x%x\n",fileDataLen);
    UBOOT_DEBUG("fileHashOffset=0x%x\n",fileHashOffset);
    UBOOT_DEBUG("fileHashLen=0x%x\n",fileHashLen);
    UBOOT_DEBUG("fileSignatureOffset=0x%x\n",fileSignatureOffset);
    UBOOT_DEBUG("fileSignatureLen=0x%x\n",fileSignatureLen);

    // Check whether chunk info is valid or not
    UBOOT_INFO("Do Chunk Info Verify...\n");
    if ( (segmentSize > 0) && (fileDataLen > 0) && (fileHashLen > 0) )
    {
        if((fileDataLen%segmentSize)==0)
            checkSegNums  = fileDataLen/segmentSize;
        else
            checkSegNums  = fileDataLen/segmentSize+1;

        // Calculate the fileHashLen, fileHashLen = checkSegNums * (256/8)
        if((checkSegNums*32) != fileHashLen)
        {
            UBOOT_ERROR("The parameter in chunk info is not valid");
            return -1;
        }
    }
    else
    {
        UBOOT_ERROR("The parameter in chunk info is not valid");
        return -1;
    }

    segmentBuf=(unsigned int*)malloc(segmentSize+15);

    if(segmentBuf==NULL)
    {
        UBOOT_ERROR("[ERROR] segmentBuf memroy allocate fail\n");
        return -1;        
    }

    ptrSegmentBuf = ((MS_U32)segmentBuf+15) & ~0x0F;

    //Read ***.hash.signature, and then do rsa decod
    memset(buffer,0,CMD_BUF);
    snprintf(buffer, CMD_BUF, "filepartloadSegAES %s %s %x %s %x %x", TARGET_INTERFACE,TARGET_DEVICE,(U32)ptrSegmentBuf, TARGET_FILE, fileSignatureOffset, fileSignatureLen);
    if(run_command(buffer, 0)!=0)
    {          
        UBOOT_ERROR("Cmd:'%s' fail!!\n",buffer);
        free(segmentBuf);
        return -1;
    }

    // clean buffer for next round of auth.
    memset(rsaOutBuf, 0, RSA_KEY_DIGI_LEN*4);
    memset(hashOutBuf, 0, SHA256_DIGEST_SIZE+15);
    rsa_main((unsigned char *)ptrSegmentBuf,rsaPublicKeyN,rsaPublicKeyE,ptrRsaOutBuf);

    memset(buffer,0,CMD_BUF);        
    snprintf(buffer, CMD_BUF, "filepartloadSegAES %s %s %x %s %x %x", TARGET_INTERFACE,TARGET_DEVICE,(U32)ptrSegmentBuf, TARGET_FILE, fileHashOffset, fileHashLen);
    if(run_command(buffer, 0)!=0)
    {
        UBOOT_ERROR("Cmd:'%s' fail!!\n",buffer);    
        free(segmentBuf);
        return -1;
    }

    if(CommonSHA((U32)ptrSegmentBuf,(MS_U32)ptrHashOutBuf,(MS_U32)fileHashLen)!=0)
    {
        UBOOT_ERROR("CommonSHA Fail!!\n");    
        free(segmentBuf);
        return -1;
    }

    for(i = 0; i<SHA256_DIGEST_SIZE; i++)
    {
        if(ptrHashOutBuf[i] != ptrRsaOutBuf[i+224])
        {
           UBOOT_ERROR("ptrHashOutBuf[%d]=0x%x, ptrRsaOutBuf[%d]=0x%x \n",i,ptrHashOutBuf[i],i,ptrRsaOutBuf[i+224]);
           UBOOT_DUMP((unsigned int)ptrRsaOutBuf, SHA256_DIGEST_SIZE);
           UBOOT_DUMP((unsigned int)ptrHashOutBuf, SHA256_DIGEST_SIZE);
           free(segmentBuf);
           return -1;
        }
    }

    if( memcmp(RSA_Padding, ptrRsaOutBuf, sizeof(RSA_Padding)) != 0 )
    {
        UBOOT_ERROR("RSA Padding is not matched\n");
        UBOOT_DUMP((unsigned int)RSA_Padding, 32);
        UBOOT_DUMP((unsigned int)ptrRsaOutBuf, 32);
        free(segmentBuf);
        return -1;
    }

    // Do rsa authentication for ***.hash
    UBOOT_INFO("Segment RSA Authentication ....\n");
    while(fileDataLen)
    {
        UBOOT_INFO("*");
        readLen=(fileDataLen>=segmentSize)?segmentSize:fileDataLen;

        memset(buffer,0,CMD_BUF);
        snprintf(buffer, CMD_BUF, "filepartloadSegAES %s %s %x %s %x %x", TARGET_INTERFACE,TARGET_DEVICE,(U32)ptrSegmentBuf, TARGET_FILE, fileDataOffset, readLen);
        if(run_command(buffer, 0)!=0)
        {
            UBOOT_ERROR("Cmd:'%s' fail!!\n",buffer);  
            free(segmentBuf);
            return -1;
        }


        if(CommonSHA((U32)ptrSegmentBuf,(MS_U32)ptrHashOutBuf,(MS_U32)readLen)!=0)
        {
            UBOOT_ERROR("CommonSHA Fail!!\n"); 
            free(segmentBuf);
            return -1;
        }

        memset(buffer,0,CMD_BUF);
        snprintf(buffer, CMD_BUF, "filepartloadSegAES %s %s %x %s %x %x", TARGET_INTERFACE,TARGET_DEVICE,(U32)ptrSegmentBuf, TARGET_FILE, fileHashOffset, SHA256_DIGEST_SIZE*2);
        if(run_command(buffer, 0)!=0)
        {
            UBOOT_ERROR("Cmd:'%s' fail!!\n",buffer);  
            free(segmentBuf);
            return -1;
        }

        pt=(unsigned char *)(ptrSegmentBuf);//+SHA256_DIGEST_SIZE-1);
        UBOOT_DUMP((unsigned int)pt, SHA256_DIGEST_SIZE);
        UBOOT_DUMP((unsigned int)ptrHashOutBuf, SHA256_DIGEST_SIZE);
        for(i = 0; i<SHA256_DIGEST_SIZE; i++)
        {
            if(ptrHashOutBuf[i] != *pt)
             {
                UBOOT_ERROR("ptrHashOutBuf[%d]=0x%x, *pt=0x%x \n",i,ptrHashOutBuf[i],*pt);
                free(segmentBuf);
                return -1;
             }
             pt++;
        }

        fileDataLen-=readLen;
        fileDataOffset+=readLen;
        fileHashOffset+=SHA256_DIGEST_SIZE;

        UBOOT_DEBUG("readLen=0x%x\n",readLen);
        UBOOT_DEBUG("fileDataLen=0x%x\n",fileDataLen);
        UBOOT_DEBUG("fileDataOffset=0x%x\n",fileDataOffset);
        UBOOT_DEBUG("fileHashOffset=0x%x\n",fileHashOffset);
    }

    free(segmentBuf);
    UBOOT_TRACE("OK\n");
    return 0;             
}

int do_file_part_load_with_segment_aes_decrypted(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
    #define DOWNLOAD_INTERFACE argv[1]
    #define DOWNLOAD_DEVICE argv[2]
    #define DOWNLOAD_ADDR argv[3]
    #define DOWNLOAD_FILE argv[4]
    #define DOWNLOAD_OFFSET argv[5]
    #define DOWNLOAD_LENGTH argv[6]
        
    unsigned int downloadOffset=0;
    unsigned int downloadLen=0;
    unsigned int pdownloadAddr=0;

    unsigned int readSegmentAddr=0;
    unsigned int readOffsetInSeg=0;
    unsigned int readLen=0;
    unsigned int aesDecodeLen=0;
    unsigned int segmentNum=0;
    unsigned int _segmentSize=0;
    unsigned int u32HwAesBufAddr=0;     
    char buffer[CMD_BUF]="\0";
    SECUREBOOT_MbxRetStruct SecureBootMbxRetStruct;
    int aes_result=0;
    SECUREBOOT_Result secureBootResult;
    UBOOT_TRACE("IN\n");

    if(argc<7)
    {
        return -1;
    }

    downloadOffset = (unsigned int)simple_strtoul(DOWNLOAD_OFFSET, NULL, 16);
    downloadLen = (unsigned int)simple_strtoul(DOWNLOAD_LENGTH, NULL, 16);
    pdownloadAddr = (unsigned int)simple_strtoul(DOWNLOAD_ADDR, NULL, 16);

    //Get total file size
    if(GetfileSizeforAESUsbUpgrade(DOWNLOAD_INTERFACE,DOWNLOAD_DEVICE,DOWNLOAD_FILE)<0)
    {
        UBOOT_ERROR("GetfileSizeforAESUsbUpgrade fail\n");
        return -1;
    }

    // get _segmentSize and segmentNum
    if(segmentSize==0)
    {
        _segmentSize=DEFAULT_SEGMENT_SIZE;
    }
    else
    {
        _segmentSize=segmentSize;
    }
    segmentNum=downloadOffset/_segmentSize;

    //Get AES decode key
    if(IsHouseKeepingBootingMode()==FALSE)
    {
        Secure_MailBox_ASSIGN_DECRYPTED_KEY(&SecureBootMbxRetStruct,E_AES_UPGRADE_KEY,AES_KEY_LEN,E_KEY_SWAP);
    }
    else
    {
        GetAESKey(E_AES_UPGRADE_KEY,aesKey);
    }

    //get AES buffer information
    if (get_value_from_env(E_MMAP_ID_HW_AES_BUF_ADR, AES_DECRYPTED_ADDR, &u32HwAesBufAddr) != 0)
    {
        UBOOT_ERROR("get %s mmap fail\n",E_MMAP_ID_HW_AES_BUF_ADR);
        return -1;
    }
    u32HwAesBufAddr=PA2VA(u32HwAesBufAddr);

    while(downloadLen)
    {
        readSegmentAddr=segmentNum*_segmentSize;
        if(downloadOffset%_segmentSize)//Only first time
        { 
            readOffsetInSeg=downloadOffset-readSegmentAddr;
            readLen=((readOffsetInSeg+downloadLen)>=_segmentSize)?(_segmentSize-readOffsetInSeg):downloadLen;

        }
        else
        {
            readOffsetInSeg=0;
            readLen=(downloadLen>=_segmentSize)?_segmentSize:downloadLen;

        }
        aesDecodeLen=((readSegmentAddr+_segmentSize)>=gfileSize)?gfileSize-readSegmentAddr:_segmentSize;

        UBOOT_DEBUG("downloadOffset=0x%x\n",downloadOffset);
        UBOOT_DEBUG("downloadLen=0x%x\n",downloadLen);
        UBOOT_DEBUG("pdownloadAddr=0x%x\n",pdownloadAddr);
        UBOOT_DEBUG("readSegmentAddr=0x%x\n",readSegmentAddr);
        UBOOT_DEBUG("readOffsetInSeg=0x%x\n",readOffsetInSeg);
        UBOOT_DEBUG("readLen=0x%x\n",readLen);
        UBOOT_DEBUG("aesDecodeLen=0x%x\n",aesDecodeLen);
        UBOOT_DEBUG("segmentNum=0x%x\n",segmentNum);

        if(getUpgradeMode()==EN_UPDATE_MODE_NET_WITH_SEG_DECRYPTED)
        {
            if(vfs_read((void*)u32HwAesBufAddr,DOWNLOAD_FILE,readSegmentAddr,aesDecodeLen)!=0)
            {
              return -1;
            }
        }
        else if(getUpgradeMode()==EN_UPDATE_MODE_USB_WITH_SEG_DECRYPTED)
        {
            memset(buffer, 0, CMD_BUF);
            snprintf(buffer, CMD_BUF, "fatpartload %s %s %x %s %x %x", DOWNLOAD_INTERFACE,DOWNLOAD_DEVICE,u32HwAesBufAddr, DOWNLOAD_FILE, readSegmentAddr, aesDecodeLen);
            if(run_command(buffer, 0)!=0)
            {
              return -1;
            }
        }
        else
        {
            UBOOT_ERROR("Wrong Upgrade Mode!!\n");       
            return -1;
        }

        // AES decode
        if(IsHouseKeepingBootingMode()==FALSE)
        {
            flush_cache(u32HwAesBufAddr,aesDecodeLen);
            Chip_Flush_Memory();
            secureBootResult = Secure_MailBox_AESDecode(&SecureBootMbxRetStruct, MsOS_VA2PA(u32HwAesBufAddr), aesDecodeLen, SECURE_ENG_AES_MODE_ECB);
            if(secureBootResult == E_SECUREBOOT_FAIL)
              return -1;
        }
        else
        {
            aes_result = Secure_AES_ECB_Decrypt(u32HwAesBufAddr, aesDecodeLen, (U8 *)aesKey);
            if(aes_result != 0)
              return -1;
        }

        // copy to target address
        memcpy((void*)pdownloadAddr,(char *)(u32HwAesBufAddr+readOffsetInSeg),readLen);

        downloadLen-=readLen;
        pdownloadAddr+=readLen;
        downloadOffset+=readLen;
        segmentNum++;
    }

    // set the download length for next command
    setenv("filesize",DOWNLOAD_LENGTH);

    UBOOT_TRACE("OK\n");
    return 0;
}

U32 Secure_SegmentSize (void)
{
    UBOOT_TRACE("IN\n");
    UBOOT_TRACE("OK\n");
    return DEFAULT_SEGMENT_SIZE;
}

int GetfileSizeforAESUsbUpgrade(const char *Interface,const char *device,char *file)
{
    char* buffer=NULL;
    int ret=0;
    UBOOT_TRACE("IN\n");
    if(fileSizeReady==TRUE)
    {
        UBOOT_TRACE("OK\n");
        return ret;
    }

    buffer=(char *)malloc(CMD_BUF);
    if(buffer == NULL)
    {
       UBOOT_ERROR("Error: out of memory\n");
       return -1;
    }
    //Get total file size
    memset(buffer,0,CMD_BUF);
    if(getUpgradeMode()==EN_UPDATE_MODE_NET_WITH_SEG_DECRYPTED)
    {
        gfileSize=vfs_getsize(file);

    }
    else if(getUpgradeMode()==EN_UPDATE_MODE_USB_WITH_SEG_DECRYPTED)
    {
        snprintf(buffer, CMD_BUF, "fatfilesize %s %s %s 0x%08x",Interface,device, file, &gfileSize);
        UBOOT_DEBUG("cmd:%s\n",buffer);
        ret=run_command(buffer, 0);
        if(ret<0)
        {
            free(buffer);
            return -1;
        }
    }
    else
    {
        UBOOT_ERROR("Wrong Upgrade Mode!!\n");
        free(buffer);        
        return -1;        
    }


    free(buffer);
    fileSizeReady=TRUE;
    UBOOT_TRACE("OK\n");
    return ret;
}
