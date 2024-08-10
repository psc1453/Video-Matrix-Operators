//
// Created by psc on 24-8-10.
//

#ifndef RISCV_ALIAS_H
#define RISCV_ALIAS_H

#include "thead_matrix.h"

// ----- Type Aliases -----

typedef mint8_t __mint8_t;
typedef mint16_t __mint16_t;
typedef mint32_t __mint32_t;
typedef mint64_t __mint64_t;

typedef muint8_t __muint8_t;
typedef muint16_t __muint16_t;
typedef muint32_t __muint32_t;
typedef muint64_t __muint64_t;

typedef mfloat16_t __mfloat16_t;
typedef mfloat32_t __mfloat32_t;
typedef mfloat64_t __mfloat64_t;

typedef mint8x2_t __mint8x2_t;
typedef mint16x2_t __mint16x2_t;
typedef mint32x2_t __mint32x2_t;
typedef mint64x2_t __mint64x2_t;

typedef muint8x2_t __muint8x2_t;
typedef muint16x2_t __muint16x2_t;
typedef muint32x2_t __muint32x2_t;
typedef muint64x2_t __muint64x2_t;

typedef mfloat16x2_t __mfloat16x2_t;
typedef mfloat32x2_t __mfloat32x2_t;
typedef mfloat64x2_t __mfloat64x2_t;

// ----- Function Aliases -----

// Configuration instructions (4.1)
extern mrow_t __riscv_th_msetmrow_n (mrow_t n);
extern mcol_t __riscv_th_msetmcol_e8 (mcol_t c);
extern mcol_t __riscv_th_msetmcol_e16 (mcol_t c);
extern mcol_t __riscv_th_msetmcol_e32 (mcol_t c);
extern mcol_t __riscv_th_msetmcol_e64 (mcol_t c);

// Read/Write Matrix CSRs (4.2)
extern enum RVM_CSR;
extern unsigned long __riscv_th_mread_csr(enum RVM_CSR csr);
extern void __riscv_th_mwrite_csr(enum RVM_CSR csr, unsigned long value);
extern unsigned long __riscv_th_xmlenb();
extern unsigned long __riscv_th_xrlenb();
extern unsigned long __riscv_th_xmsize();

// Undefined (4.3)
extern __mint8_t __riscv_th_mundefined_i8();
extern __mint16_t __riscv_th_mundefined_i16();
extern __mint32_t __riscv_th_mundefined_i32();
extern __mint64_t __riscv_th_mundefined_i64();
extern __muint8_t __riscv_th_mundefined_u8();
extern __muint16_t __riscv_th_mundefined_u16();
extern __muint32_t __riscv_th_mundefined_u32();
extern __muint64_t __riscv_th_mundefined_u64();
extern __mfloat16_t __riscv_th_mundefined_f16();
extern __mfloat32_t __riscv_th_mundefined_f32();
extern __mfloat64_t __riscv_th_mundefined_f64();

extern __mint8x2_t __riscv_th_mundefined_i8x2();
extern __mint16x2_t __riscv_th_mundefined_i16x2();
extern __mint32x2_t __riscv_th_mundefined_i32x2();
extern __mint64x2_t __riscv_th_mundefined_i64x2();
extern __muint8x2_t __riscv_th_mundefined_u8x2();
extern __muint16x2_t __riscv_th_mundefined_u16x2();
extern __muint32x2_t __riscv_th_mundefined_u32x2();
extern __muint64x2_t __riscv_th_mundefined_u64x2();
extern __mfloat16x2_t __riscv_th_mundefined_f16x2();
extern __mfloat32x2_t __riscv_th_mundefined_f32x2();
extern __mfloat64x2_t __riscv_th_mundefined_f64x2();

// Reinterpret Cast Conversion Functions (4.4)
// TODO: Parse this section
// mint8_t __riscv_th_mreinterpret_i8(src);
// mint16_t __riscv_th_mreinterpret_i16(src);
// mint32_t __riscv_th_mreinterpret_i32(src);
// mint64_t __riscv_th_mreinterpret_i64(src);
// muint8_t __riscv_th_mreinterpret_u8(src);
// muint16_t __riscv_th_mreinterpret_u16(src);
// muint32_t __riscv_th_mreinterpret_u32(src);
// muint64_t __riscv_th_mreinterpret_u64(src);
// mfloat16_t __riscv_th_mreinterpret_f16(src);
// mfloat32_t __riscv_th_mreinterpret_f32(src);
// mfloat64_t __riscv_th_mreinterpret_f64(src);
// mint8x2_t __riscv_th_mreinterpret_i8x2(src);
// mint16x2_t __riscv_th_mreinterpret_i16x2(src);
// mint32x2_t __riscv_th_mreinterpret_i32x2(src);
// mint64x2_t __riscv_th_mreinterpret_i64x2(src);
// muint8x2_t __riscv_th_mreinterpret_u8x2(src);
// muint16x2_t __riscv_th_mreinterpret_u16x2(src);
// muint32x2_t __riscv_th_mreinterpret_u32x2(src);
// muint64x2_t __riscv_th_mreinterpret_u64x2(src);
// mfloat16x2_t __riscv_th_mreinterpret_f16x2(src);
// mfloat32x2_t __riscv_th_mreinterpret_f32x2(src);
// mfloat64x2_t __riscv_th_mreinterpret_f64x2(src);

// Mzero (4.5)
extern __mint8_t __riscv_th_mzero_i8();
extern __mint16_t __riscv_th_mzero_i16();
extern __mint32_t __riscv_th_mzero_i32();
extern __mint64_t __riscv_th_mzero_i64();
extern __muint8_t __riscv_th_mzero_u8();
extern __muint16_t __riscv_th_mzero_u16();
extern __muint32_t __riscv_th_mzero_u32();
extern __muint64_t __riscv_th_mzero_u64();
extern __mfloat16_t __riscv_th_mzero_f16();
extern __mfloat32_t __riscv_th_mzero_f32();
extern __mfloat64_t __riscv_th_mzero_f64();
extern __mint8x2_t __riscv_th_mzero_i8x2();

extern __mint16x2_t __riscv_th_mzero_i16x2();
extern __mint32x2_t __riscv_th_mzero_i32x2();
extern __mint64x2_t __riscv_th_mzero_i64x2();
extern __muint8x2_t __riscv_th_mzero_u8x2();
extern __muint16x2_t __riscv_th_mzero_u16x2();
extern __muint32x2_t __riscv_th_mzero_u32x2();
extern __muint64x2_t __riscv_th_mzero_u64x2();
extern __mfloat16x2_t __riscv_th_mzero_f16x2();
extern __mfloat32x2_t __riscv_th_mzero_f32x2();
extern __mfloat64x2_t __riscv_th_mzero_f64x2();

// Load and store instructions (4.6)
// matrix load
extern __mint8_t __riscv_th_mld_i8(const int8_t *base, long stride, mrow_t row, mcol_t col);
extern __mint16_t __riscv_th_mld_i16(const int16_t *base, long stride, mrow_t row, mcol_t col);
extern __mint32_t __riscv_th_mld_i32(const int32_t *base, long stride, mrow_t row, mcol_t col);
extern __mint64_t __riscv_th_mld_i64(const int64_t *base, long stride, mrow_t row, mcol_t col);
extern __muint8_t __riscv_th_mld_u8(const uint8_t *base, long stride, mrow_t row, mcol_t col);
extern __muint16_t __riscv_th_mld_u16(const uint16_t *base, long stride, mrow_t row, mcol_t col);
extern __muint32_t __riscv_th_mld_u32(const uint32_t *base, long stride, mrow_t row, mcol_t col);
extern __muint64_t __riscv_th_mld_u64(const uint64_t *base, long stride, mrow_t row, mcol_t col);
extern __mfloat16_t __riscv_th_mld_f16(const float16_t *base, long stride, mrow_t row, mcol_t col);
extern __mfloat32_t __riscv_th_mld_f32(const float32_t *base, long stride, mrow_t row, mcol_t col);
extern __mfloat64_t __riscv_th_mld_f64(const float64_t *base, long stride, mrow_t row, mcol_t col);

// stream matrix load
extern __mint8_t __riscv_th_msld_i8(const int8_t *base, long stride, mrow_t row, mcol_t col);
extern __mint16_t __riscv_th_msld_i16(const int16_t *base, long stride, mrow_t row, mcol_t col);
extern __mint32_t __riscv_th_msld_i32(const int32_t *base, long stride, mrow_t row, mcol_t col);
extern __mint64_t __riscv_th_msld_i64(const int64_t *base, long stride, mrow_t row, mcol_t col);
extern __muint8_t __riscv_th_msld_u8(const uint8_t *base, long stride, mrow_t row, mcol_t col);
extern __muint16_t __riscv_th_msld_u16(const uint16_t *base, long stride, mrow_t row, mcol_t col);
extern __muint32_t __riscv_th_msld_u32(const uint32_t *base, long stride, mrow_t row, mcol_t col);
extern __muint64_t __riscv_th_msld_u64(const uint64_t *base, long stride, mrow_t row, mcol_t col);
extern __mfloat16_t __riscv_th_msld_f16(const float16_t *base, long stride, mrow_t row, mcol_t col);
extern __mfloat32_t __riscv_th_msld_f32(const float32_t *base, long stride, mrow_t row, mcol_t col);
extern __mfloat64_t __riscv_th_msld_f64(const float64_t *base, long stride, mrow_t row, mcol_t col);

// matrix store
extern void __riscv_th_mst_i8(const int8_t *base, long stride, __mint8_t value, mrow_t row, mcol_t col);
extern void __riscv_th_mst_i16(const int16_t *base, long stride, __mint16_t value, mrow_t row, mcol_t col);
extern void __riscv_th_mst_i32(const int32_t *base, long stride, __mint32_t value, mrow_t row, mcol_t col);
extern void __riscv_th_mst_i64(const int64_t *base, long stride, __mint64_t value, mrow_t row, mcol_t col);
extern void __riscv_th_mst_u8(const uint8_t *base, long stride, __muint8_t value, mrow_t row, mcol_t col);
extern void __riscv_th_mst_u16(const uint16_t *base, long stride, __muint16_t value, mrow_t row, mcol_t col);
extern void __riscv_th_mst_u32(const uint32_t *base, long stride, __muint32_t value, mrow_t row, mcol_t col);
extern void __riscv_th_mst_u64(const uint64_t *base, long stride, __muint64_t value, mrow_t row, mcol_t col);
extern void __riscv_th_mst_f16(const float16_t *base, long stride, __mfloat16_t value, mrow_t row, mcol_t col);
extern void __riscv_th_mst_f32(const float32_t *base, long stride, __mfloat32_t value, mrow_t row, mcol_t col);
extern void __riscv_th_mst_f64(const float64_t *base, long stride, __mfloat64_t value, mrow_t row, mcol_t col);
// stream matrix store
extern void __riscv_th_msst_i8(const int8_t *base, long stride, __mint8_t value, mrow_t row, mcol_t col);
extern void __riscv_th_msst_i16(const int16_t *base, long stride, __mint16_t value, mrow_t row, mcol_t col);
extern void __riscv_th_msst_i32(const int32_t *base, long stride, __mint32_t value, mrow_t row, mcol_t col);
extern void __riscv_th_msst_i64(const int64_t *base, long stride, __mint64_t value, mrow_t row, mcol_t col);
extern void __riscv_th_msst_u8(const uint8_t *base, long stride, __muint8_t value, mrow_t row, mcol_t col);
extern void __riscv_th_msst_u16(const uint16_t *base, long stride, __muint16_t value, mrow_t row, mcol_t col);
extern void __riscv_th_msst_u32(const uint32_t *base, long stride, __muint32_t value, mrow_t row, mcol_t col);
extern void __riscv_th_msst_u64(const uint64_t *base, long stride, __muint64_t value, mrow_t row, mcol_t col);
extern void __riscv_th_msst_f16(const float16_t *base, long stride, __mfloat16_t value, mrow_t row, mcol_t col);
extern void __riscv_th_msst_f32(const float32_t *base, long stride, __mfloat32_t value, mrow_t row, mcol_t col);
extern void __riscv_th_msst_f64(const float64_t *base, long stride, __mfloat64_t value, mrow_t row, mcol_t col);

// Mov instructions (4.7)
// matrix-vector mov
extern __mint8_t __riscv_th_mmov_mv_i8(__mint8_t src, size_t index);
extern __mint16_t __riscv_th_mmov_mv_i16(__mint16_t src, size_t index);
extern __mint32_t __riscv_th_mmov_mv_i32(__mint32_t src, size_t index);
extern __mint64_t __riscv_th_mmov_mv_i64(__mint64_t src, size_t index);
extern __muint8_t __riscv_th_mmov_mv_u8(__muint8_t src, size_t index);
extern __muint16_t __riscv_th_mmov_mv_u16(__muint16_t src, size_t index);
extern __muint32_t __riscv_th_mmov_mv_u32(__muint32_t src, size_t index);
extern __muint64_t __riscv_th_mmov_mv_u64(__muint64_t src, size_t index);
// matrix-scalar mov with duplicate
extern __mint8_t __riscv_th_mdup_m_x_i8(int8_t src);
extern __mint16_t __riscv_th_mdup_m_x_i16(int16_t src);
extern __mint32_t __riscv_th_mdup_m_x_i32(int32_t src);
extern __mint64_t __riscv_th_mdup_m_x_i64(int64_t src);
extern __muint8_t __riscv_th_mdup_m_x_u8(uint8_t src);
extern __muint16_t __riscv_th_mdup_m_x_u16(uint16_t src);
extern __muint32_t __riscv_th_mdup_m_x_u32(uint32_t src);
extern __muint64_t __riscv_th_mdup_m_x_u64(uint64_t src);
// matrix-scalar mov
extern __mint8_t __riscv_th_mmov_m_x_i8(__mint8_t dest, int8_t src, size_t index);
extern __mint16_t __riscv_th_mmov_m_x_i16(__mint16_t dest, int16_t src, size_t index);
extern __mint32_t __riscv_th_mmov_m_x_i32(__mint32_t dest, int32_t src, size_t index);
extern __mint64_t __riscv_th_mmov_m_x_i64(__mint64_t dest, int64_t src, size_t index);
extern __muint8_t __riscv_th_mmov_m_x_u8(__muint8_t dest, uint8_t src, size_t index);
extern __muint16_t __riscv_th_mmov_m_x_u16(__muint16_t dest, uint16_t src, size_t index);
extern __muint32_t __riscv_th_mmov_m_x_u32(__muint32_t dest, uint32_t src, size_t index);
extern __muint64_t __riscv_th_mmov_m_x_u64(__muint64_t dest, uint64_t src, size_t index);

extern int8_t __riscv_th_mmov_x_m_i8(__mint8_t src, size_t index);
extern int16_t __riscv_th_mmov_x_m_i16(__mint16_t src, size_t index);
extern int32_t __riscv_th_mmov_x_m_i32(__mint32_t src, size_t index);
extern int64_t __riscv_th_mmov_x_m_i64(__mint64_t src, size_t index);
extern uint8_t __riscv_th_mmov_x_m_u8(__muint8_t src, size_t index);
extern uint16_t __riscv_th_mmov_x_m_u16(__muint16_t src, size_t index);
extern uint32_t __riscv_th_mmov_x_m_u32(__muint32_t src, size_t index);
extern uint64_t __riscv_th_mmov_x_m_u64(__muint64_t src, size_t index);

// Tuple instructions (4.8)
extern __mint8x2_t __riscv_th_mset_i8(__mint8x2_t src, size_t index, __mint8_t value);
extern __mint16x2_t __riscv_th_mset_i16(__mint16x2_t src, size_t index, __mint16_t value);
extern __mint32x2_t __riscv_th_mset_i32(__mint32x2_t src, size_t index, __mint32_t value);
extern __mint64x2_t __riscv_th_mset_i64(__mint64x2_t src, size_t index, __mint64_t value);
extern __muint8x2_t __riscv_th_mset_u8(__muint8x2_t src, size_t index, __muint8_t value);
extern __muint16x2_t __riscv_th_mset_u16(__muint16x2_t src, size_t index, __muint16_t value);
extern __muint32x2_t __riscv_th_mset_u32(__muint32x2_t src, size_t index, __muint32_t value);
extern __muint64x2_t __riscv_th_mset_u64(__muint64x2_t src, size_t index, __muint64_t value);
extern __mfloat16x2_t __riscv_th_mset_f16(__mfloat16x2_t src, size_t index, __mfloat16_t value);
extern __mfloat32x2_t __riscv_th_mset_f32(__mfloat32x2_t src, size_t index, __mfloat32_t value);
extern __mfloat64x2_t __riscv_th_mset_f64(__mfloat64x2_t src, size_t index, __mfloat64_t value);

extern __mint8_t __riscv_th_mget_i8(__mint8x2_t src, size_t index);
extern __mint16_t __riscv_th_mget_i16(__mint16x2_t src, size_t index);
extern __mint32_t __riscv_th_mget_i32(__mint32x2_t src, size_t index);
extern __mint64_t __riscv_th_mget_i64(__mint64x2_t src, size_t index);
extern __muint8_t __riscv_th_mget_u8(__muint8x2_t src, size_t index);
extern __muint16_t __riscv_th_mget_u16(__muint16x2_t src, size_t index);
extern __muint32_t __riscv_th_mget_u32(__muint32x2_t src, size_t index);
extern __muint64_t __riscv_th_mget_u64(__muint64x2_t src, size_t index);
extern __mfloat16_t __riscv_th_mget_f16(__mfloat16x2_t src, size_t index);
extern __mfloat32_t __riscv_th_mget_f32(__mfloat32x2_t src, size_t index);
extern __mfloat64_t __riscv_th_mget_f64(__mfloat64x2_t src, size_t index);

// Matrix Integer Operation Instruction
// Add
// matrix-matrix add
extern __mint32_t __riscv_th_madd_mm_i32 (__mint32_t src1, __mint32_t src2, mrow_t row, mcol_t col);
extern __mint64_t __riscv_th_madd_mm_i64 (__mint64_t src1, __mint64_t src2, mrow_t row, mcol_t col);
// matrix-vector add,rs1/uimm6
extern __mint32_t __riscv_th_madd_mv_i32 (__mint32_t src1, __mint32_t src2, size_t index, mrow_t row, mcol_t col);
extern __mint64_t __riscv_th_madd_mv_i64 (__mint64_t src1, __mint64_t src2, size_t index, mrow_t row, mcol_t col);
// matrix-scalar add
extern __mint32_t __riscv_th_madd_mx_i32 (__mint32_t src1, int32_t src2, mrow_t row, mcol_t col);
extern __mint64_t __riscv_th_madd_mx_i64 (__mint64_t src1, int64_t src2, mrow_t row, mcol_t col);

// Sub
// matrix-matrix sub
extern __mint32_t __riscv_th_msub_mm_i32 (__mint32_t src1, __mint32_t src2, mrow_t row, mcol_t col);
extern __mint64_t __riscv_th_msub_mm_i64 (__mint64_t src1, __mint64_t src2, mrow_t row, mcol_t col);
// matrix-vector sub,rs1/uimm6
extern __mint32_t __riscv_th_msub_mv_i32 (__mint32_t src1, __mint32_t src2, size_t index, mrow_t row, mcol_t col);
extern __mint64_t __riscv_th_msub_mv_i64 (__mint64_t src1, __mint64_t src2, size_t index, mrow_t row, mcol_t col);
// matrix-scalar sub
extern __mint32_t __riscv_th_msub_mx_i32 (__mint32_t src1, int32_t src2, mrow_t row, mcol_t col);
extern __mint64_t __riscv_th_msub_mx_i64 (__mint64_t src1, int64_t src2, mrow_t row, mcol_t col);

// Shift
// Msra
// matrix-matrix sra
extern __mint32_t __riscv_th_msra_mm_i32 (__mint32_t src1, __muint32_t src2, mrow_t row, mcol_t col);
extern __mint64_t __riscv_th_msra_mm_i64 (__mint64_t src1, __muint64_t src2, mrow_t row, mcol_t col);
// matrix-vector sra,rs1/uimm6
extern __mint32_t __riscv_th_msra_mv_i32 (__mint32_t src1, __muint32_t src2, size_t index, mrow_t row, mcol_t col);
extern __mint64_t __riscv_th_msra_mv_i64 (__mint64_t src1, __muint64_t src2, size_t index, mrow_t row, mcol_t col);
// matrix-scalar sra
extern __mint32_t __riscv_th_msra_mx_i32 (__mint32_t src1, uint32_t src2, mrow_t row, mcol_t col);
extern __mint64_t __riscv_th_msra_mx_i64 (__mint64_t src1, uint64_t src2, mrow_t row, mcol_t col);
// Mn4clip/Mn4clipu
// matrix-matrix signed clip
extern __mint8_t __riscv_th_mn4clip_mm_i32 (__mint32_t src1, __muint32_t src2, mrow_t row, mcol_t col);
extern __mint8_t __riscv_th_mn4clip_mm_i64 (__mint64_t src1, __muint64_t src2, mrow_t row, mcol_t col);
// matrix-vector clip,rs1/uimm3
extern __mint8_t __riscv_th_mn4clip_mv_i32 (__mint32_t src1, __muint32_t src2, size_t index, mrow_t row, mcol_t col);
extern __mint8_t __riscv_th_mn4clip_mv_i64 (__mint64_t src1, __muint64_t src2, size_t index, mrow_t row, mcol_t col);
// matrix-scalar clip
extern __mint8_t __riscv_th_mn4clip_mx_i32 (__mint32_t src1, uint32_t src2, mrow_t row, mcol_t col);
extern __mint8_t __riscv_th_mn4clip_mx_i64 (__mint64_t src1, uint64_t src2, mrow_t row, mcol_t col);
// matrix-matrix unsigned clip
extern __muint8_t __riscv_th_mn4clipu_mm_u32 (__muint32_t src1, __muint32_t src2, mrow_t row, mcol_t col);
extern __muint8_t __riscv_th_mn4clipu_mm_u64 (__muint64_t src1, __muint64_t src2, mrow_t row, mcol_t col);
// matrix-vector clip,rs1/uimm3
extern __muint8_t __riscv_th_mn4clipu_mv_u32 (__muint32_t src1, __muint32_t src2, size_t index, mrow_t row, mcol_t col);
extern __muint8_t __riscv_th_mn4clipu_mv_u64 (__muint64_t src1, __muint64_t src2, size_t index, mrow_t row, mcol_t col);
// matrix-scalar clip
extern __muint8_t __riscv_th_mn4clipu_mx_u32 (__muint32_t src1, uint32_t src2, mrow_t row, mcol_t col);
extern __muint8_t __riscv_th_mn4clipu_mx_u64 (__muint64_t src1, uint64_t src2, mrow_t row, mcol_t col);

// Multiply Instruction
// Low-half-reserved multiplication
// matrix-matrix mul
extern __mint32_t __riscv_th_mmul_mm_i32 (__mint32_t src1, __mint32_t src2, mrow_t row, mcol_t col);
extern __mint64_t __riscv_th_mmul_mm_i64 (__mint64_t src1, __mint64_t src2, mrow_t row, mcol_t col);
// matrix-vector mul,rs1/uimm3
extern __mint32_t __riscv_th_mmul_mv_i32 (__mint32_t src1, __mint32_t src2, size_t index, mrow_t row, mcol_t col);
extern __mint64_t __riscv_th_mmul_mv_i64 (__mint64_t src1, __mint64_t src2, size_t index, mrow_t row, mcol_t col);
// matrix-scalar mul
extern __mint32_t __riscv_th_mmul_mx_i32 (__mint32_t src1, int32_t src2, mrow_t row, mcol_t col);
extern __mint64_t __riscv_th_mmul_mx_i64 (__mint64_t src1, int64_t src2, mrow_t row, mcol_t col);

// High-half-reserved multiplication
//matrix-matrix mulh
extern __mint32_t __riscv_th_mmulh_mm_i32 (__mint32_t src1, __mint32_t src2, mrow_t row, mcol_t col);
//matrix-vector mulh,rs1/uimm3
extern __mint32_t __riscv_th_mmulh_mv_i32 (__mint32_t src1, __mint32_t src2, size_t index, mrow_t row, mcol_t col);
//matrix-scalar mulh
extern __mint32_t __riscv_th_mmulh_mx_i32 (__mint32_t src1, int32_t src2, mrow_t row, mcol_t col);

// Matrix Multiplication Instruction (4.9)
// Floating point Matrix Multiplication
// Fmmacc
extern __mfloat16_t __riscv_th_fmmacc_f16(__mfloat16_t dest, __mfloat16_t src1, __mfloat16x2_t src2, mrow_t row1, mrow_t row2, mcol_t col);
extern __mfloat32_t __riscv_th_fmmacc_f32(__mfloat32_t dest, __mfloat32_t src1, __mfloat32_t src2, mrow_t row1, mrow_t row2, mcol_t col);
extern __mfloat64x2_t __riscv_th_fmmacc_f64x2(__mfloat64x2_t dest, __mfloat64_t src1, __mfloat64_t src2, mrow_t row1, mrow_t row2, mcol_t col);
// Fwmmacc
// matrix-matrix
extern __mfloat32_t __riscv_th_fwmmacc_f32 (__mfloat32_t dest, __mfloat16_t src1, __mfloat16_t src2, mrow_t row1, mrow_t row2, mcol_t col);
extern __mfloat64x2_t __riscv_th_fwmmacc_f64x2 (__mfloat64x2_t dest, __mfloat32_t src1, __mfloat32_t src2, mrow_t row1, mrow_t row2, mcol_t col);

// Integer 4x Extension Matrix Multiplication
// Mmaqa
// signed matrix multiply
extern __mint32_t __riscv_th_mmaqa_i32 (__mint32_t dest, __mint8_t src1, __mint8_t src2, mrow_t row1, mrow_t row2, mcol_t col);
extern __mint64x2_t __riscv_th_mmaqa_i64x2 (__mint64x2_t dest, __mint16_t src1, __mint16_t src2, mrow_t row1, mrow_t row2, mcol_t col);
// unsigned matrix multiply
extern __mint32_t __riscv_th_mmaqau_i32 (__mint32_t dest, __muint8_t src1, __muint8_t src2, mrow_t row1, mrow_t row2, mcol_t col);
extern __mint64x2_t __riscv_th_mmaqau_i64x2 (__mint64x2_t dest, __muint16_t src1, __muint16_t src2, mrow_t row1, mrow_t row2, mcol_t col);
// unsigned-signed matrix multiply
extern __mint32_t __riscv_th_mmaqaus_i32 (__mint32_t dest, __muint8_t src1, __mint8_t src2, mrow_t row1, mrow_t row2, mcol_t col);
extern __mint64x2_t __riscv_th_mmaqaus_i64x2 (__mint64x2_t dest, __muint16_t src1, __mint16_t src2, mrow_t row1, mrow_t row2, mcol_t col);
// signed-unsigned matrix multiply
extern __mint32_t __riscv_th_mmaqasu_i32 (__mint32_t dest, __mint8_t src1, __muint8_t src2, mrow_t row1, mrow_t row2, mcol_t col);
extern __mint64x2_t __riscv_th_mmaqasu_i64x2 (__mint64x2_t dest, __mint16_t src1, __muint16_t src2, mrow_t row1, mrow_t row2, mcol_t col);
// Pmmaqa
// signed matrix multiply
extern __mint32_t __riscv_th_pmmaqa_i32 (__mint32_t dest, __mint8_t src1, __mint8_t src2, mrow_t row1, mrow_t row2, mcol_t col);
// unsigned matrix multiply
extern __mint32_t __riscv_th_pmmaqau_i32 (__mint32_t dest, __muint8_t src1, __muint8_t src2, mrow_t row1, mrow_t row2, mcol_t col);
// unsigned-signed matrix multiply
extern __mint32_t __riscv_th_pmmaqaus_i32 (__mint32_t dest, __muint8_t src1, __mint8_t src2, mrow_t row1, mrow_t row2, mcol_t col);
// signed-unsigned matrix multiply
extern __mint32_t __riscv_th_pmmaqasu_i32 (__mint32_t dest, __mint8_t src1, __muint8_t src2, mrow_t row1, mrow_t row2, mcol_t col);

// Mrelease (4.10)
extern void __riscv_th_mrelease();
#endif //RISCV_ALIAS_Hc
