/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 *
 * MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */

/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 * audio_hcf_default.h
 *
 * Project:
 * --------
 *   ALPS
 *
 * Description:
 * ------------
 * This file is the header of audio customization related parameters or definition.
 *
 * Author:
 * -------
 * Tina Tsai
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef AUDIO_HCF_DEFAULT_H
#define AUDIO_HCF_DEFAULT_H
#if defined(MTK_AUDIO_BLOUD_CUSTOMPARAMETER_V4)
    /* Compensation Filter HSF coeffs: default all pass filter       */
    /* BesLoudness also uses this coeffs    */ 
#if 0
    #define BES_LOUDNESS_HCF_HSF_COEFF \
    0x07FD867E, 0xF004F305, 0x07FD867E, 0x7FD8C027, 0x6445948D, \
	0x07FD4E85, 0xF00562F6, 0x07FD4E85, 0x7FD4C02B, 0xE40C1373, \
	0x07FC4A24, 0xF0076BB7, 0x07FC4A24, 0x7FC4C03B, 0x9A3655A6, \
	0x07FB0E10, 0xF009E3DF, 0x07FB0E10, 0x7FB0C04F, 0xD2AF10A4, \
	0x07FA9E52, 0xF00AC35D, 0x07FA9E52, 0x7FA9C056, 0xD41C09EC, \
	0x07F896B7, 0xF00ED292, 0x07F896B7, 0x7F89C076, 0x4B397455, \
	0x07F62071, 0xF013BF1D, 0x07F62071, 0x7F61C09D, 0xCDDEBFB3, \
	0x07F541BF, 0xF0157C82, 0x07F541BF, 0x7F53C0AB, 0xD82FA04E, \
	0x07F1371D, 0xF01D91C6, 0x07F1371D, 0x7F12C0EC, 0xF1650DBF, \
\
	0x07FEF946, 0xF0020D73, 0x07FEF946, 0x7FEFC010, 0x90CE6803, \
	0x07FEE208, 0xF0023BF0, 0x07FEE208, 0x7FEEC011, 0x1C40DB3D, \
	0x07FE75D8, 0xF0031451, 0x07FE75D8, 0x7FE7C018, 0x55679A71, \
	0x07FDF25D, 0xF0041B46, 0x07FDF25D, 0x7FDFC020, 0x1778CBD0, \
	0x07FDC3D8, 0xF0047850, 0x07FDC3D8, 0x7FDCC023, 0x2C7EB17D, \
	0x07FCEB45, 0xF0062976, 0x07FCEB45, 0x7FCEC031, 0x94032B67, \
	0x07FBE3FD, 0xF0083805, 0x07FBE3FD, 0x7FBEC041, 0x067686C8, \
	0x07FB86D0, 0xF008F260, 0x07FB86D0, 0x7FB8C047, 0x290D4F06, \
	0x07F9D4E2, 0xF00C563C, 0x07F9D4E2, 0x7F9CC062, 0xCD2830E5 

   

    /* Compensation Filter BPF coeffs: default all pass filter      */ 
    #define BES_LOUDNESS_HCF_BPF_COEFF \
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
\
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
\
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
\    
 	0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \         
\    
 	0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \     
\    
 	0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \
\    
 	0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \    
\
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000     
    
    #define BES_LOUDNESS_HCF_LPF_COEFF \
    0x40000000, 0x00000000, 0x00000000,\ 
	0x40000000, 0x00000000, 0x00000000,\ 
	0x40000000, 0x00000000, 0x00000000,\ 
	0x40000000, 0x00000000, 0x00000000,\ 
	0x40000000, 0x00000000, 0x00000000,\ 
	0x40000000, 0x00000000, 0x00000000 
#else
	#define BES_LOUDNESS_HCF_HSF_COEFF \
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
\
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000 

   

    /* Compensation Filter BPF coeffs: default all pass filter      */ 
    #define BES_LOUDNESS_HCF_BPF_COEFF \
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
\
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
\
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
\    
 	0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \         
\    
 	0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \     
\    
 	0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \
\    
 	0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \    
\
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000, \ 
    0x00000000,0x00000000,0x00000000     
    
    #define BES_LOUDNESS_HCF_LPF_COEFF \
    0x00000000, 0x00000000, 0x00000000,\ 
	0x00000000, 0x00000000, 0x00000000,\ 
	0x00000000, 0x00000000, 0x00000000,\ 
	0x00000000, 0x00000000, 0x00000000,\ 
	0x00000000, 0x00000000, 0x00000000,\ 
	0x00000000, 0x00000000, 0x00000000 
#endif
    #define BES_LOUDNESS_HCF_WS_GAIN_MAX  0x399A
           
    #define BES_LOUDNESS_HCF_WS_GAIN_MIN  0x2666
           
    #define BES_LOUDNESS_HCF_FILTER_FIRST  0
           
    #define BES_LOUDNESS_HCF_GAIN_MAP_IN \
    -45, -35, -19, -18,  0
   
    #define BES_LOUDNESS_HCF_GAIN_MAP_OUT \            
    0, 12, 12, 12, 0

	#define BES_LOUDNESS_HCF_ATT_TIME	164
	#define BES_LOUDNESS_HCF_REL_TIME	16400
#else
/* Compensation Filter HSF coeffs: default all pass filter       */
/* BesLoudness also uses this coeffs    */
#define BES_LOUDNESS_HCF_HSF_COEFF \
    0, 0, 0, 0, \
    0, 0, 0, 0, \
    0, 0, 0, 0, \
    0, 0, 0, 0, \
    0, 0, 0, 0, \
    0, 0, 0, 0, \
    0, 0, 0, 0, \
    0, 0, 0, 0, \
    0, 0, 0, 0

/* Compensation Filter BPF coeffs: default all pass filter      */
#define BES_LOUDNESS_HCF_BPF_COEFF \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    \     
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    \     
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    \     
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0, \
    0, 0, 0

#define BES_LOUDNESS_HCF_DRC_FORGET_TABLE \
    0, 0, \
    0, 0, \
    0, 0, \
    0, 0, \
    0, 0, \
    0, 0, \
    0, 0, \
    0, 0, \
    0, 0

#define BES_LOUDNESS_HCF_WS_GAIN_MAX  0

#define BES_LOUDNESS_HCF_WS_GAIN_MIN  0

#define BES_LOUDNESS_HCF_FILTER_FIRST  0

#define BES_LOUDNESS_HCF_GAIN_MAP_IN \
    0, 0, 0, 0, 0

#define BES_LOUDNESS_HCF_GAIN_MAP_OUT \
    0, 0, 0, 0, 0

#endif

#endif
