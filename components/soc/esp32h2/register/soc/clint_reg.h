/*
 * SPDX-FileCopyrightText: 2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#define DR_REG_CLINT_M_BASE    ( 0x20001800)
#define DR_REG_CLINT_U_BASE    ( 0x20001C00)
#define DR_REG_CLINT_U_END     ( 0x20002000)

/*CLINT MINT*/
#define CLINT_MINT_SIP_REG          (DR_REG_CLINT_M_BASE + 0x0)
/* CLINT_CPU_MINT_SIP : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: .*/
#define CLINT_CPU_MINT_SIP    0xFFFFFFFF
#define CLINT_CPU_MINT_SIP_M  ((CLINT_CPU_MINT_SIP_V)<<(CLINT_CPU_MINT_SIP_S))
#define CLINT_CPU_MINT_SIP_V  0xFFFFFFFF
#define CLINT_CPU_MINT_SIP_S  0

#define CLINT_MINT_TIMECTL_REG          (DR_REG_CLINT_M_BASE + 0x4)
/* CLINT_MINT_SAMPLING_MODE : R/W ;bitpos:[5:4] ;default: 2'b0 ; */
/*description: .*/
#define CLINT_MINT_SAMPLING_MODE    0x00000003
#define CLINT_MINT_SAMPLING_MODE_M  ((CLINT_CPU_MINT_TIMECTL_V)<<(CLINT_CPU_MINT_TIMECTL_S))
#define CLINT_MINT_SAMPLING_MODE_V  0x3
#define CLINT_MINT_SAMPLING_MODE_S  4
/* CLINT_MINT_COUNTER_OVERFLOW : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: */
#define CLINT_MINT_COUNTER_OVERFLOW  (BIT(3))
#define CLINT_MINT_COUNTER_OVERFLOW_M  (BIT(3))
#define CLINT_MINT_COUNTER_OVERFLOW_V  0x1
#define CLINT_MINT_COUNTER_OVERFLOW_S  3
/* CLINT_MINT_TIMERINT_PENDING : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: */
#define CLINT_MINT_TIMERINT_PENDING  (BIT(2))
#define CLINT_MINT_TIMERINT_PENDING_M  (BIT(2))
#define CLINT_MINT_TIMERINT_PENDING_V  0x1
#define CLINT_MINT_TIMERINT_PENDING_S  2
/* CLINT_MINT_TIMERINT_EN : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: */
#define CLINT_MINT_TIMERINT_EN  (BIT(1))
#define CLINT_MINT_TIMERINT_EN_M  (BIT(1))
#define CLINT_MINT_TIMERINT_EN_V  0x1
#define CLINT_MINT_TIMERINT_EN_S  1
/* CLINT_MINT_COUNTER_EN : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: */
#define CLINT_MINT_COUNTER_EN  (BIT(0))
#define CLINT_MINT_COUNTER_EN_M  (BIT(0))
#define CLINT_MINT_COUNTER_EN_V  0x1
#define CLINT_MINT_COUNTER_EN_S  0

#define CLINT_MINT_MTIME_L_REG          (DR_REG_CLINT_M_BASE + 0x8)
/* CLINT_CPU_MINT_MTIME_L : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: .*/
#define CLINT_CPU_MINT_MTIME_L    0xFFFFFFFF
#define CLINT_CPU_MINT_MTIME_L_M  ((CLINT_CPU_MINT_MTIME_L_V)<<(CLINT_CPU_MINT_MTIME_L_S))
#define CLINT_CPU_MINT_MTIME_L_V  0xFFFFFFFF
#define CLINT_CPU_MINT_MTIME_L_S  0

#define CLINT_MINT_MTIME_H_REG          (DR_REG_CLINT_M_BASE + 0xC)
/* CLINT_CPU_MINT_MTIME_H : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: .*/
#define CLINT_CPU_MINT_MTIME_H    0xFFFFFFFF
#define CLINT_CPU_MINT_MTIME_H_M  ((CLINT_CPU_MINT_MTIME_H_V)<<(CLINT_CPU_MINT_MTIME_H_S))
#define CLINT_CPU_MINT_MTIME_H_V  0xFFFFFFFF
#define CLINT_CPU_MINT_MTIME_H_S  0

#define CLINT_MINT_MTIMECMP_L_REG          (DR_REG_CLINT_M_BASE + 0x10)
/* CLINT_CPU_MINT_MTIMECMP_L : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: .*/
#define CLINT_CPU_MINT_MTIMECMP_L    0xFFFFFFFF
#define CLINT_CPU_MINT_MTIMECMP_L_M  ((CLINT_CPU_MINT_MTIMECMP_L_V)<<(CLINT_CPU_MINT_MTIMECMP_L_S))
#define CLINT_CPU_MINT_MTIMECMP_L_V  0xFFFFFFFF
#define CLINT_CPU_MINT_MTIMECMP_L_S  0

#define CLINT_MINT_MTIMECMP_H_REG          (DR_REG_CLINT_M_BASE + 0x14)
/* CLINT_CPU_MINT_MTIMECMP_H : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: .*/
#define CLINT_CPU_MINT_MTIMECMP_H    0xFFFFFFFF
#define CLINT_CPU_MINT_MTIMECMP_H_M  ((CLINT_CPU_MINT_MTIMECMP_H_V)<<(CLINT_CPU_MINT_MTIMECMP_H_S))
#define CLINT_CPU_MINT_MTIMECMP_H_V  0xFFFFFFFF
#define CLINT_CPU_MINT_MTIMECMP_H_S  0

/*CLINT UINT*/
#define CLINT_UINT_SIP_REG          (DR_REG_CLINT_U_BASE + 0x0)
/* CLINT_CPU_UINT_SIP : R/W ;bitpos:[0] ;default: 1'b1 ; */
/*description: .*/
#define CLINT_CPU_UINT_SIP    0xFFFFFFFF
#define CLINT_CPU_UINT_SIP_M  ((CLINT_CPU_UINT_SIP_V)<<(CLINT_CPU_UINT_SIP_S))
#define CLINT_CPU_UINT_SIP_V  0xFFFFFFFF
#define CLINT_CPU_UINT_SIP_S  0

#define CLINT_UINT_TIMECTL_REG          (DR_REG_CLINT_U_BASE + 0x4)
/* CLINT_UINT_SAMPLING_MODE : R/W ;bitpos:[5:4] ;default: 2'b0 ; */
/*description: .*/
#define CLINT_UINT_SAMPLING_MODE    0x00000003
#define CLINT_UINT_SAMPLING_MODE_M  ((CLINT_CPU_UINT_TIMECTL_V)<<(CLINT_CPU_UINT_TIMECTL_S))
#define CLINT_UINT_SAMPLING_MODE_V  0x3
#define CLINT_UINT_SAMPLING_MODE_S  4
/* CLINT_UINT_COUNTER_OVERFLOW : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: */
#define CLINT_UINT_COUNTER_OVERFLOW  (BIT(3))
#define CLINT_UINT_COUNTER_OVERFLOW_M  (BIT(3))
#define CLINT_UINT_COUNTER_OVERFLOW_V  0x1
#define CLINT_UINT_COUNTER_OVERFLOW_S  3
/* CLINT_UINT_TIMERINT_PENDING : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: */
#define CLINT_UINT_TIMERINT_PENDING  (BIT(2))
#define CLINT_UINT_TIMERINT_PENDING_M  (BIT(2))
#define CLINT_UINT_TIMERINT_PENDING_V  0x1
#define CLINT_UINT_TIMERINT_PENDING_S  2
/* CLINT_UINT_TIMERINT_EN : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: */
#define CLINT_UINT_TIMERINT_EN  (BIT(1))
#define CLINT_UINT_TIMERINT_EN_M  (BIT(1))
#define CLINT_UINT_TIMERINT_EN_V  0x1
#define CLINT_UINT_TIMERINT_EN_S  1
/* CLINT_UINT_COUNTER_EN : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: */
#define CLINT_UINT_COUNTER_EN  (BIT(0))
#define CLINT_UINT_COUNTER_EN_M  (BIT(0))
#define CLINT_UINT_COUNTER_EN_V  0x1
#define CLINT_UINT_COUNTER_EN_S  0

#define CLINT_UINT_UTIME_L_REG          (DR_REG_CLINT_U_BASE + 0x8)
/* CLINT_CPU_UINT_UTIME_L : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: .*/
#define CLINT_CPU_UINT_UTIME_L    0xFFFFFFFF
#define CLINT_CPU_UINT_UTIME_L_M  ((CLINT_CPU_UINT_UTIME_L_V)<<(CLINT_CPU_UINT_UTIME_L_S))
#define CLINT_CPU_UINT_UTIME_L_V  0xFFFFFFFF
#define CLINT_CPU_UINT_UTIME_L_S  0

#define CLINT_UINT_UTIME_H_REG          (DR_REG_CLINT_U_BASE + 0xC)
/* CLINT_CPU_UINT_UTIME_H : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: .*/
#define CLINT_CPU_UINT_UTIME_H    0xFFFFFFFF
#define CLINT_CPU_UINT_UTIME_H_M  ((CLINT_CPU_UINT_UTIME_H_V)<<(CLINT_CPU_UINT_UTIME_H_S))
#define CLINT_CPU_UINT_UTIME_H_V  0xFFFFFFFF
#define CLINT_CPU_UINT_UTIME_H_S  0

#define CLINT_UINT_UTIMECMP_L_REG          (DR_REG_CLINT_U_BASE + 0x10)
/* CLINT_CPU_UINT_UTIMECMP_L : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: .*/
#define CLINT_CPU_UINT_UTIMECMP_L    0xFFFFFFFF
#define CLINT_CPU_UINT_UTIMECMP_L_M  ((CLINT_CPU_UINT_UTIMECMP_L_V)<<(CLINT_CPU_UINT_UTIMECMP_L_S))
#define CLINT_CPU_UINT_UTIMECMP_L_V  0xFFFFFFFF
#define CLINT_CPU_UINT_UTIMECMP_L_S  0

#define CLINT_UINT_UTIMECMP_H_REG          (DR_REG_CLINT_U_BASE + 0x14)
/* CLINT_CPU_UINT_UTIMECMP_H : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: .*/
#define CLINT_CPU_UINT_UTIMECMP_H    0xFFFFFFFF
#define CLINT_CPU_UINT_UTIMECMP_H_M  ((CLINT_CPU_UINT_UTIMECMP_H_V)<<(CLINT_CPU_UINT_UTIMECMP_H_S))
#define CLINT_CPU_UINT_UTIMECMP_H_V  0xFFFFFFFF
#define CLINT_CPU_UINT_UTIMECMP_H_S  0
#ifdef __cplusplus
}
#endif
