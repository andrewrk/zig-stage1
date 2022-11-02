#include "zig.h"

typedef struct zig_S_math_F80__3431 zig_S_math_F80__3431;
struct zig_S_math_F80__3431 {
 zig_u64 fraction;
 zig_u16 exp;
};

static zig_S_math_F80__3431 math_break_f80(zig_f80 const a0) {
 /* file:2:5 */
 zig_u128 t0;
 memcpy(&t0, &a0, sizeof(zig_u128 ));
 /* var:int */
 /* file:3:5 */
 zig_S_math_F80__3431 t1;
 zig_u64 * const t2 = (zig_u64 * )&t1.fraction;
 zig_u64 const t3 = (zig_u64 )t0;
 (*t2) = t3;
 zig_u16 * const t4 = (zig_u16 * )&t1.exp;
 zig_u128 const t5 = zig_shr_u128(t0, zig_as_u8(64));
 zig_u16 const t6 = (zig_u16 )t5;
 (*t4) = t6;
 /* file:3:5 */
 return t1;
}

static zig_f80 math_make_f80(zig_S_math_F80__3431 const a0) {
 /* file:2:5 */
 zig_u16 const t0 = a0.exp;
 zig_u128 const t1 = (zig_u128 )t0;
 zig_u128 const t2 = zig_shl_u128(t1, zig_as_u8(64));
 zig_u64 const t3 = a0.fraction;
 zig_u128 const t4 = (zig_u128 )t3;
 zig_u128 const t5 = zig_or_u128(t2, t4);
 /* var:int */
 /* file:3:5 */
 zig_f80 t6;
 memcpy(&t6, &t5, sizeof(zig_f80 ));
 /* file:3:5 */
 return t6;
}


static zig_void math_doNotOptimizeAway__anon_3615(zig_f128 const a0) {
 /* file:4:5 */
 /* file:5:5 */
 zig_f128 t0;
 /* var:x */
 /* file:6:5 */
 zig_f128 volatile * const t1 = (zig_f128 volatile * )&t0;
 /* var:p */
 /* file:7:5 */
 zig_f128 const t2 = t0;
 (*t1) = t2;
 return;
}

static zig_void math_doNotOptimizeAway__anon_3618(zig_f16 const a0) {
 /* file:4:5 */
 /* file:5:5 */
 zig_f16 t0;
 /* var:x */
 /* file:6:5 */
 zig_f16 volatile * const t1 = (zig_f16 volatile * )&t0;
 /* var:p */
 /* file:7:5 */
 zig_f16 const t2 = t0;
 (*t1) = t2;
 return;
}

static zig_void math_raiseInvalid(zig_void) {
 return;
}

typedef struct zig_S_compiler_rt_fma_dd128__3640 zig_S_compiler_rt_fma_dd128__3640;
struct zig_S_compiler_rt_fma_dd128__3640 {
 zig_f128 hi;
 zig_f128 lo;
};

static zig_f128 math_copysign_copysign__anon_3499(zig_f128 const a0, zig_f128 const a1) {
 /* file:2:5 */
 /* file:3:5 */
 /* file:3:31 */
 /* file:4:5 */
 /* var:sign_bit_mask */
 /* file:5:5 */
 zig_u128 t0;
 memcpy(&t0, &a0, sizeof(zig_u128 ));
 zig_u128 const t1 = zig_and_u128(t0, zig_as_u128(zig_as_u64(9223372036854775807), zig_maxInt_u64));
 /* var:mag */
 /* file:6:5 */
 zig_u128 t2;
 memcpy(&t2, &a1, sizeof(zig_u128 ));
 zig_u128 const t3 = zig_and_u128(t2, zig_as_u128(zig_as_u64(9223372036854775808), zig_as_u64(0)));
 /* var:sgn */
 /* file:7:5 */
 zig_u128 const t4 = zig_or_u128(t1, t3);
 zig_f128 t5;
 memcpy(&t5, &t4, sizeof(zig_f128 ));
 /* file:7:5 */
 return t5;
}

static zig_i32 math_min__anon_3762(zig_i32 const a0, zig_i32 const a1) {
 /* file:2:5 */
 /* file:2:23 */
 /* file:3:9 */
 zig_bool const t0 = a0 < a1;
 if (t0) {
  /* file:7:9 */
  /* file:8:21 */
  zig_i32 const t1 = (zig_i32 )a0;
  /* file:8:21 */
  return t1;
 } else {
  /* file:15:9 */
  /* file:16:21 */
  zig_i32 const t2 = (zig_i32 )a1;
  /* file:16:21 */
  return t2;
 }
}

static zig_bool math_isnan_isNan__anon_3498(zig_f128 const a0) {
 /* file:2:5 */
 zig_bool const t0 = a0 != a0;
 /* file:2:5 */
 return t0;
}

static zig_bool math_isnan_isNan__anon_3496(zig_f80 const a0) {
 /* file:2:5 */
 zig_bool const t0 = a0 != a0;
 /* file:2:5 */
 return t0;
}

typedef struct zig_S_math_frexp_Frexp_28f128_29__3639 zig_S_math_frexp_Frexp_28f128_29__3639;
struct zig_S_math_frexp_Frexp_28f128_29__3639 {
 zig_f128 significand;
 zig_i32 exponent;
};

static zig_S_math_frexp_Frexp_28f128_29__3639 math_frexp_frexp128(zig_f128 const a0) {
 /* file:2:5 */
 /* file:2:22 */
 zig_S_math_frexp_Frexp_28f128_29__3639 t0;
 /* var:result */
 /* file:4:5 */
 zig_u128 t1;
 zig_u128 t2;
 memcpy(&t2, &a0, sizeof(zig_u128 ));
 zig_u128 * const t3 = (zig_u128 * )&t1;
 (*t3) = t2;
 /* var:y */
 /* file:5:5 */
 zig_u128 const t4 = t1;
 zig_u128 const t5 = zig_shr_u128(t4, zig_as_u8(112));
 zig_i32 const t6 = (zig_i32 )t5;
 zig_i32 const t7 = t6 & zig_as_i32(32767);
 /* var:e */
 /* file:7:9 */
 {
  zig_bool const t8 = t7 == zig_as_i32(0);
  if (t8) {
   /* file:8:13 */
   {
    zig_bool const t9 = a0 != (zig_f128 )zig_suffix_f128(0x0.0p0);
    if (t9) {
     /* file:10:13 */
     /* file:10:30 */
     zig_f128 const t10 = a0 * (zig_f128 )zig_suffix_f128(0x1p120);
     zig_S_math_frexp_Frexp_28f128_29__3639 const t11 = math_frexp_frexp128(t10);
     t0 = t11;
     /* file:11:13 */
     zig_i32 * const t12 = (zig_i32 * )&t0.exponent;
     zig_i32 const t13 = (*t12);
     zig_i32 const t14 = t13 - zig_as_i32(120);
     (*t12) = t14;
     goto zig_block_1;
    } else {
     /* file:14:13 */
     zig_f128 * const t15 = (zig_f128 * )&t0.significand;
     (*t15) = a0;
     /* file:15:13 */
     zig_i32 * const t16 = (zig_i32 * )&t0.exponent;
     (*t16) = zig_as_i32(0);
     goto zig_block_1;
    }
   }
   zig_block_1:;
   /* file:17:9 */
   zig_S_math_frexp_Frexp_28f128_29__3639 const t17 = t0;
   /* file:17:9 */
   return t17;
  } else {
   {
    /* file:18:16 */
    zig_bool const t18 = t7 == zig_as_i32(32767);
    if (t18) {
     /* file:20:9 */
     zig_f128 * const t19 = (zig_f128 * )&t0.significand;
     (*t19) = a0;
     /* file:21:9 */
     zig_i32 * const t20 = (zig_i32 * )&t0.exponent;
     /* file:24:13 */
     {
      /* file:24:23 */
      /* dbg func:isInf */
      /* var:x */
      /* file:2:5 */
      /* file:3:5 */
      /* file:3:31 */
      /* file:4:5 */
      /* var:remove_sign */
      /* file:5:5 */
      zig_u128 t21;
      memcpy(&t21, &a0, sizeof(zig_u128 ));
      zig_u128 const t22 = zig_and_u128(t21, zig_as_u128(zig_as_u64(9223372036854775807), zig_maxInt_u64));
      /* file:5:72 */
      /* dbg func:inf */
      /* file:2:5 */
      zig_f128 t23;
      /* file:2:28 */
      /* dbg func:reconstructFloat */
      /* file:2:5 */
      /* file:3:5 */
      /* file:3:67 */
      /* var:biased_exponent */
      /* file:4:5 */
      /* file:4:61 */
      /* file:4:5 */
      /* dbg func:inf */
      t23 = (zig_f128 )zig_builtin_constant_f128(inf)();
      /* file:2:5 */
      zig_f128 const t24 = t23;
      /* dbg func:isInf */
      zig_u128 t25;
      memcpy(&t25, &t24, sizeof(zig_u128 ));
      zig_bool const t26 = t22 == t25;
      /* file:5:5 */
      /* dbg func:frexp128 */
      if (t26) {
       /* file:25:13 */
       zig_i32 * const t27 = (zig_i32 * )&t0.exponent;
       (*t27) = zig_as_i32(0);
       goto zig_block_3;
      } else {
       goto zig_block_3;
      }
     }
     zig_block_3:;
     /* file:28:9 */
     zig_S_math_frexp_Frexp_28f128_29__3639 const t28 = t0;
     /* file:28:9 */
     return t28;
    } else {
     goto zig_block_2;
    }
   }
   zig_block_2:;
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:31:5 */
 zig_i32 * const t29 = (zig_i32 * )&t0.exponent;
 zig_i32 const t30 = t7 - zig_as_i32(16382);
 (*t29) = t30;
 /* file:32:5 */
 zig_u128 const t31 = t1;
 zig_u128 const t32 = zig_and_u128(t31, zig_as_u128(zig_as_u64(9223653511831486463), zig_maxInt_u64));
 t1 = t32;
 /* file:33:5 */
 zig_u128 const t33 = t1;
 zig_u128 const t34 = zig_or_u128(t33, zig_as_u128(zig_as_u64(4611123068473966592), zig_as_u64(0)));
 t1 = t34;
 /* file:34:5 */
 zig_f128 * const t35 = (zig_f128 * )&t0.significand;
 zig_u128 const t36 = t1;
 zig_f128 t37;
 memcpy(&t37, &t36, sizeof(zig_f128 ));
 (*t35) = t37;
 /* file:35:5 */
 zig_S_math_frexp_Frexp_28f128_29__3639 const t38 = t0;
 /* file:35:5 */
 return t38;
}

static zig_S_math_frexp_Frexp_28f128_29__3639 math_frexp_frexp__anon_3638(zig_f128 const a0) {
 /* file:2:5 */
 /* file:3:5 */
 zig_S_math_frexp_Frexp_28f128_29__3639 t0;
 /* file:6:25 */
 zig_S_math_frexp_Frexp_28f128_29__3639 const t1 = math_frexp_frexp128(a0);
 t0 = t1;
 /* file:3:5 */
 return t0;
}

static zig_bool math_isfinite_isFinite__anon_3559(zig_f128 const a0) {
 /* file:2:5 */
 /* file:3:5 */
 /* file:3:31 */
 /* file:4:5 */
 /* var:remove_sign */
 /* file:5:5 */
 zig_u128 t0;
 memcpy(&t0, &a0, sizeof(zig_u128 ));
 zig_u128 const t1 = zig_and_u128(t0, zig_as_u128(zig_as_u64(9223372036854775807), zig_maxInt_u64));
 /* file:5:71 */
 /* dbg func:inf */
 /* file:2:5 */
 zig_f128 t2;
 /* file:2:28 */
 /* dbg func:reconstructFloat */
 /* file:2:5 */
 /* file:3:5 */
 /* file:3:67 */
 /* var:biased_exponent */
 /* file:4:5 */
 /* file:4:61 */
 /* file:4:5 */
 /* dbg func:inf */
 t2 = (zig_f128 )zig_builtin_constant_f128(inf)();
 /* file:2:5 */
 zig_f128 const t3 = t2;
 /* dbg func:isFinite__anon_3559 */
 zig_u128 t4;
 memcpy(&t4, &t3, sizeof(zig_u128 ));
 zig_bool const t5 = zig_cmp_u128(t1, t4) < zig_as_i8(0);
 /* file:5:5 */
 return t5;
}

zig_f32 __extendhfsf2(zig_f16 const a0) {
 /* file:2:5 */
 zig_f32 t0;
 /* file:2:19 */
 zig_u16 t1;
 memcpy(&t1, &a0, sizeof(zig_u16 ));
 /* dbg func:extendf */
 /* file:4:20 */
 /* var:a */
 /* file:6:5 */
 /* file:6:35 */
 /* file:7:5 */
 /* file:7:35 */
 /* file:8:5 */
 /* file:8:50 */
 /* file:9:5 */
 /* file:9:50 */
 /* file:10:5 */
 /* file:10:38 */
 /* file:14:5 */
 /* file:15:5 */
 /* file:16:5 */
 /* file:17:5 */
 /* file:19:5 */
 /* file:20:5 */
 /* file:21:5 */
 /* file:22:5 */
 /* file:23:5 */
 /* file:24:5 */
 /* file:26:5 */
 /* file:27:5 */
 /* file:28:5 */
 /* file:29:5 */
 /* file:31:5 */
 /* var:dstMinNormal */
 /* file:34:5 */
 zig_u16 t2;
 memcpy(&t2, &t1, sizeof(zig_u16 ));
 /* var:aRep */
 /* file:35:5 */
 zig_u16 const t3 = t2 & zig_as_u16(32767);
 /* var:aAbs */
 /* file:36:5 */
 zig_u16 const t4 = t2 & zig_as_u16(32768);
 /* var:sign */
 /* file:37:5 */
 zig_u32 t5;
 /* var:absResult */
 /* file:39:9 */
 {
  zig_u16 const t6 = zig_subw_u16(t3, zig_as_u16(1024), zig_as_u8(16));
  zig_bool const t7 = t6 < zig_as_u16(30720);
  if (t7) {
   /* file:43:9 */
   zig_u32 const t8 = (zig_u32 )t3;
   zig_u32 const t9 = zig_shl_u32(t8, zig_as_u8(13));
   t5 = t9;
   /* file:44:9 */
   zig_u32 const t10 = t5;
   zig_u32 const t11 = t10 + zig_as_u32(939524096);
   t5 = t11;
   goto zig_block_0;
  } else {
   {
    /* file:45:16 */
    zig_bool const t12 = t3 >= zig_as_u16(31744);
    if (t12) {
     /* file:50:9 */
     t5 = zig_as_u32(2139095040);
     /* file:51:9 */
     zig_u32 const t13 = t5;
     zig_u16 const t14 = t3 & zig_as_u16(512);
     zig_u32 const t15 = (zig_u32 )t14;
     zig_u32 const t16 = zig_shl_u32(t15, zig_as_u8(13));
     zig_u32 const t17 = t13 | t16;
     t5 = t17;
     /* file:52:9 */
     zig_u32 const t18 = t5;
     zig_u16 const t19 = t3 & zig_as_u16(511);
     zig_u32 const t20 = (zig_u32 )t19;
     zig_u32 const t21 = zig_shl_u32(t20, zig_as_u8(13));
     zig_u32 const t22 = t18 | t21;
     t5 = t22;
     goto zig_block_1;
    } else {
     {
      /* file:53:16 */
      zig_bool const t23 = t3 != zig_as_u16(0);
      if (t23) {
       /* file:57:9 */
       zig_u8 const t24 = zig_clz_u16(t3, zig_as_u8(16));
       zig_u8 const t25 = t24 - zig_as_u8(5);
       zig_u32 const t26 = (zig_u32 )t25;
       /* var:scale */
       /* file:59:9 */
       zig_u32 const t27 = (zig_u32 )t3;
       zig_u32 const t28 = zig_as_u32(13) + t26;
       zig_u8 const t29 = (zig_u8 )t28;
       zig_u32 const t30 = zig_shl_u32(t27, t29);
       t5 = t30;
       /* file:60:9 */
       zig_u32 const t31 = t5;
       zig_u32 const t32 = t31 ^ zig_as_u32(8388608);
       t5 = t32;
       /* file:61:9 */
       zig_u32 const t33 = zig_as_u32(112) - t26;
       zig_u32 const t34 = t33 + zig_as_u32(1);
       /* var:resultExponent */
       /* file:62:9 */
       zig_u32 const t35 = t5;
       zig_u32 const t36 = (zig_u32 )t34;
       zig_u32 const t37 = zig_shl_u32(t36, zig_as_u8(23));
       zig_u32 const t38 = t35 | t37;
       t5 = t38;
       goto zig_block_2;
      } else {
       /* file:65:9 */
       t5 = zig_as_u32(0);
       goto zig_block_2;
      }
     }
     zig_block_2:;
     goto zig_block_1;
    }
   }
   zig_block_1:;
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:69:5 */
 zig_u32 t39;
 zig_u32 const t40 = t5;
 zig_u32 const t41 = (zig_u32 )t4;
 zig_u32 const t42 = zig_shl_u32(t41, zig_as_u8(16));
 zig_u32 const t43 = t40 | t42;
 t39 = t43;
 zig_u32 const * const t44 = (zig_u32 const * )&t39;
 /* var:result */
 /* file:70:5 */
 zig_u32 const t45 = (*t44);
 zig_f32 t46;
 memcpy(&t46, &t45, sizeof(zig_f32 ));
 /* file:70:5 */
 /* dbg func:__extendhfsf2 */
 t0 = t46;
 /* file:2:5 */
 return t0;
}

zig_f16 __truncsfhf2(zig_f32 const a0) {
 /* file:2:5 */
 zig_f16 t0;
 /* file:2:40 */
 /* dbg func:truncf */
 /* var:a */
 /* file:2:5 */
 /* file:2:35 */
 /* file:3:5 */
 /* file:3:35 */
 /* file:4:5 */
 /* file:4:50 */
 /* file:5:5 */
 /* file:5:50 */
 /* file:6:5 */
 /* file:6:38 */
 /* file:10:5 */
 /* file:11:5 */
 /* file:12:5 */
 /* file:13:5 */
 /* file:15:5 */
 /* file:16:5 */
 /* file:17:5 */
 /* file:18:5 */
 /* file:19:5 */
 /* file:20:5 */
 /* file:21:5 */
 /* file:22:5 */
 /* file:23:5 */
 /* file:25:5 */
 /* file:26:5 */
 /* file:27:5 */
 /* file:28:5 */
 /* file:30:5 */
 /* file:31:5 */
 /* file:32:5 */
 /* file:33:5 */
 /* file:35:5 */
 /* file:36:5 */
 /* file:39:5 */
 zig_u32 t1;
 memcpy(&t1, &a0, sizeof(zig_u32 ));
 /* var:aRep */
 /* file:40:5 */
 zig_u32 const t2 = t1 & zig_as_u32(2147483647);
 /* var:aAbs */
 /* file:41:5 */
 zig_u32 const t3 = t1 & zig_as_u32(2147483648);
 /* var:sign */
 /* file:42:5 */
 zig_u16 t4;
 /* var:absResult */
 /* file:44:9 */
 {
  zig_u32 const t5 = zig_subw_u32(t2, zig_as_u32(947912704), zig_as_u8(32));
  zig_u32 const t6 = zig_subw_u32(t2, zig_as_u32(1199570944), zig_as_u8(32));
  zig_bool const t7 = t5 < t6;
  if (t7) {
   /* file:48:9 */
   zig_u32 const t8 = zig_shr_u32(t2, zig_as_u8(13));
   zig_u16 const t9 = (zig_u16 )t8;
   t4 = t9;
   /* file:49:9 */
   zig_u16 const t10 = t4;
   zig_u16 const t11 = zig_subw_u16(t10, zig_as_u16(49152), zig_as_u8(16));
   t4 = t11;
   /* file:51:9 */
   zig_u32 const t12 = t2 & zig_as_u32(8191);
   /* var:roundBits */
   /* file:52:13 */
   {
    zig_bool const t13 = t12 > zig_as_u32(4096);
    if (t13) {
     /* file:54:13 */
     zig_u16 const t14 = t4;
     zig_u16 const t15 = t14 + zig_as_u16(1);
     t4 = t15;
     goto zig_block_1;
    } else {
     {
      /* file:55:20 */
      zig_bool const t16 = t12 == zig_as_u32(4096);
      if (t16) {
       /* file:57:13 */
       zig_u16 const t17 = t4;
       zig_u16 const t18 = t4;
       zig_u16 const t19 = t18 & zig_as_u16(1);
       zig_u16 const t20 = t17 + t19;
       t4 = t20;
       goto zig_block_2;
      } else {
       goto zig_block_2;
      }
     }
     zig_block_2:;
     goto zig_block_1;
    }
   }
   zig_block_1:;
   goto zig_block_0;
  } else {
   {
    /* file:59:16 */
    zig_bool const t21 = t2 > zig_as_u32(2139095040);
    if (t21) {
     /* file:63:9 */
     t4 = zig_as_u16(31744);
     /* file:64:9 */
     zig_u16 const t22 = t4;
     zig_u16 const t23 = t22 | zig_as_u16(512);
     t4 = t23;
     /* file:65:9 */
     zig_u16 const t24 = t4;
     zig_u32 const t25 = t2 & zig_as_u32(4194303);
     zig_u32 const t26 = zig_shr_u32(t25, zig_as_u8(13));
     zig_u32 const t27 = t26 & zig_as_u32(511);
     zig_u16 const t28 = (zig_u16 )t27;
     zig_u16 const t29 = t24 | t28;
     t4 = t29;
     goto zig_block_3;
    } else {
     {
      /* file:66:16 */
      zig_bool const t30 = t2 >= zig_as_u32(1199570944);
      if (t30) {
       /* file:68:9 */
       t4 = zig_as_u16(31744);
       goto zig_block_4;
      } else {
       /* file:73:9 */
       zig_u32 const t31 = zig_shr_u32(t2, zig_as_u8(23));
       zig_u32 const t32 = (zig_u32 )t31;
       /* var:aExp */
       /* file:74:9 */
       zig_u32 const t33 = zig_as_u32(112) - t32;
       zig_u32 const t34 = t33 + zig_as_u32(1);
       zig_u32 const t35 = (zig_u32 )t34;
       /* var:shift */
       /* file:76:9 */
       zig_u32 const t36 = t1 & zig_as_u32(8388607);
       zig_u32 const t37 = t36 | zig_as_u32(8388608);
       /* var:significand */
       /* file:79:13 */
       {
        zig_bool const t38 = t35 > zig_as_u32(23);
        if (t38) {
         /* file:80:13 */
         t4 = zig_as_u16(0);
         goto zig_block_5;
        } else {
         /* file:82:13 */
         zig_u32 const t39 = zig_as_u32(32) - t35;
         zig_u8 const t40 = (zig_u8 )t39;
         zig_u32 const t41 = zig_shl_u32(t37, t40);
         zig_bool const t42 = t41 != zig_as_u32(0);
         zig_u8 const t43 = t42;
         zig_u32 const t44 = (zig_u32 )t43;
         /* var:sticky */
         /* file:83:13 */
         zig_u8 const t45 = (zig_u8 )t35;
         zig_u32 const t46 = zig_shr_u32(t37, t45);
         zig_u32 const t47 = t46 | t44;
         /* var:denormalizedSignificand */
         /* file:84:13 */
         zig_u32 const t48 = zig_shr_u32(t47, zig_as_u8(13));
         zig_u16 const t49 = (zig_u16 )t48;
         t4 = t49;
         /* file:85:13 */
         zig_u32 const t50 = t47 & zig_as_u32(8191);
         /* var:roundBits */
         /* file:86:17 */
         {
          zig_bool const t51 = t50 > zig_as_u32(4096);
          if (t51) {
           /* file:88:17 */
           zig_u16 const t52 = t4;
           zig_u16 const t53 = t52 + zig_as_u16(1);
           t4 = t53;
           goto zig_block_6;
          } else {
           {
            /* file:89:24 */
            zig_bool const t54 = t50 == zig_as_u32(4096);
            if (t54) {
             /* file:91:17 */
             zig_u16 const t55 = t4;
             zig_u16 const t56 = t4;
             zig_u16 const t57 = t56 & zig_as_u16(1);
             zig_u16 const t58 = t55 + t57;
             t4 = t58;
             goto zig_block_7;
            } else {
             goto zig_block_7;
            }
           }
           zig_block_7:;
           goto zig_block_6;
          }
         }
         zig_block_6:;
         goto zig_block_5;
        }
       }
       zig_block_5:;
       goto zig_block_4;
      }
     }
     zig_block_4:;
     goto zig_block_3;
    }
   }
   zig_block_3:;
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:96:5 */
 zig_u16 t59;
 zig_u16 const t60 = t4;
 zig_u32 const t61 = zig_shr_u32(t3, zig_as_u8(16));
 zig_u16 const t62 = (zig_u16 )t61;
 zig_u16 const t63 = t60 | t62;
 t59 = t63;
 zig_u16 const * const t64 = (zig_u16 const * )&t59;
 /* var:result */
 /* file:98:5 */
 zig_u16 const t65 = (*t64);
 zig_f16 t66;
 memcpy(&t66, &t65, sizeof(zig_f16 ));
 /* file:98:5 */
 /* dbg func:__truncsfhf2 */
 zig_f16 t67;
 memcpy(&t67, &t66, sizeof(zig_f16 ));
 t0 = t67;
 /* file:2:5 */
 return t0;
}

static zig_f128 math_ldexp_ldexp__anon_3558(zig_f128 const a0, zig_i32 const a1) {
 /* file:2:5 */
 /* file:3:5 */
 /* file:3:31 */
 /* file:5:5 */
 /* file:5:49 */
 /* file:6:5 */
 /* file:6:49 */
 /* file:7:5 */
 /* file:7:53 */
 /* file:9:5 */
 /* file:9:58 */
 /* file:10:5 */
 /* var:mantissa_mask */
 /* file:12:5 */
 zig_u128 t0;
 memcpy(&t0, &a0, sizeof(zig_u128 ));
 /* var:repr */
 /* file:13:5 */
 zig_u128 const t1 = zig_and_u128(t0, zig_as_u128(zig_as_u64(9223372036854775808), zig_as_u64(0)));
 /* var:sign_bit */
 /* file:15:9 */
 {
  /* file:15:19 */
  zig_bool const t2 = math_isnan_isNan__anon_3498(a0);
  zig_bool t3;
  {
   if (t2) {
    t3 = zig_true;
    goto zig_block_1;
   } else {
    /* file:15:40 */
    zig_bool const t4 = math_isfinite_isFinite__anon_3559(a0);
    zig_bool const t5 = !t4;
    t3 = t5;
    goto zig_block_1;
   }
  }
  zig_block_1:;
  if (t3) {
   /* file:16:9 */
   /* file:16:9 */
   return a0;
  } else {
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:18:5 */
 zig_i32 t6;
 zig_u128 const t7 = zig_shl_u128(t0, zig_as_u8(1));
 zig_u128 const t8 = zig_shr_u128(t7, zig_as_u8(113));
 zig_i32 const t9 = (zig_i32 )t8;
 t6 = t9;
 /* var:exponent */
 /* file:19:9 */
 {
  zig_i32 const t10 = t6;
  zig_bool const t11 = t10 == zig_as_i32(0);
  if (t11) {
   /* file:20:9 */
   zig_i32 const t12 = t6;
   zig_u128 const t13 = zig_shl_u128(t0, zig_as_u8(1));
   zig_u8 const t14 = zig_clz_u128(t13, zig_as_u8(128));
   zig_i32 const t15 = (zig_i32 )t14;
   zig_i32 const t16 = zig_as_i32(15) - t15;
   zig_i32 const t17 = t12 + t16;
   t6 = t17;
   goto zig_block_2;
  } else {
   goto zig_block_2;
  }
 }
 zig_block_2:;
 /* file:22:9 */
 zig_bool const t18 = a1 >= zig_as_i32(0);
 if (t18) {
  /* file:23:13 */
  {
   zig_i32 const t19 = t6;
   zig_i32 const t20 = zig_as_i32(32766) - t19;
   zig_bool const t21 = a1 > t20;
   if (t21) {
    /* file:25:13 */
    /* file:25:56 */
    /* dbg func:inf */
    /* file:2:5 */
    zig_f128 t22;
    /* file:2:28 */
    /* dbg func:reconstructFloat */
    /* file:2:5 */
    /* file:3:5 */
    /* file:3:67 */
    /* var:biased_exponent */
    /* file:4:5 */
    /* file:4:61 */
    /* file:4:5 */
    /* dbg func:inf */
    t22 = (zig_f128 )zig_builtin_constant_f128(inf)();
    /* file:2:5 */
    zig_f128 const t23 = t22;
    /* dbg func:ldexp__anon_3558 */
    zig_u128 t24;
    memcpy(&t24, &t23, sizeof(zig_u128 ));
    zig_u128 const t25 = zig_or_u128(t24, t1);
    zig_f128 t26;
    memcpy(&t26, &t25, sizeof(zig_f128 ));
    /* file:25:13 */
    return t26;
   } else {
    {
     /* file:26:20 */
     zig_i32 const t27 = t6;
     zig_i32 const t28 = t27 + a1;
     zig_bool const t29 = t28 <= zig_as_i32(0);
     if (t29) {
      /* file:28:13 */
      /* file:28:57 */
      zig_u8 const t30 = (zig_u8 )a1;
      zig_u128 const t31 = zig_shl_u128(t0, t30);
      zig_u128 const t32 = zig_or_u128(t31, t1);
      zig_f128 t33;
      memcpy(&t33, &t32, sizeof(zig_f128 ));
      /* file:28:13 */
      return t33;
     } else {
      {
       /* file:29:20 */
       zig_i32 const t34 = t6;
       zig_bool const t35 = t34 <= zig_as_i32(0);
       if (t35) {
        /* file:31:13 */
        zig_u128 t36;
        zig_i32 const t37 = t6;
        zig_i32 const t38 = a1 + t37;
        zig_u128 const t39 = (zig_u128 )t38;
        zig_u128 const t40 = zig_shl_u128(t39, zig_as_u8(112));
        zig_u128 * const t41 = (zig_u128 * )&t36;
        (*t41) = t40;
        /* var:result */
        /* file:32:13 */
        zig_u128 const t42 = t36;
        /* file:32:48 */
        zig_i32 const t43 = t6;
        zig_i32 const t44 = zig_as_i32(1) - t43;
        zig_u8 const t45 = (zig_u8 )t44;
        zig_u128 const t46 = zig_shl_u128(t0, t45);
        zig_u128 const t47 = zig_and_u128(t46, zig_as_u128(zig_as_u64(281474976710655), zig_maxInt_u64));
        zig_u128 const t48 = zig_or_u128(t42, t47);
        t36 = t48;
        /* file:33:13 */
        zig_u128 const t49 = t36;
        zig_u128 const t50 = zig_or_u128(t49, t1);
        zig_f128 t51;
        memcpy(&t51, &t50, sizeof(zig_f128 ));
        /* file:33:13 */
        return t51;
       } else {
        goto zig_block_5;
       }
      }
      zig_block_5:;
      goto zig_block_4;
     }
    }
    zig_block_4:;
    goto zig_block_3;
   }
  }
  zig_block_3:;
  /* file:37:9 */
  zig_u128 const t52 = (zig_u128 )a1;
  zig_u128 const t53 = zig_shl_u128(t52, zig_as_u8(112));
  zig_u128 const t54 = zig_add_u128(t0, t53);
  zig_f128 t55;
  memcpy(&t55, &t54, sizeof(zig_f128 ));
  /* file:37:9 */
  return t55;
 } else {
  /* file:39:13 */
  {
   zig_i32 const t56 = t6;
   zig_i32 const t57 = zig_as_i32(0) - t56;
   zig_bool const t58 = a1 <= t57;
   if (t58) {
    /* file:40:17 */
    {
     zig_i32 const t59 = t6;
     zig_i32 const t60 = zig_as_i32(112) + t59;
     zig_i32 const t61 = zig_as_i32(0) - t60;
     zig_bool const t62 = a1 < t61;
     if (t62) {
      /* file:41:17 */
      zig_f128 t63;
      memcpy(&t63, &t1, sizeof(zig_f128 ));
      /* file:41:17 */
      return t63;
     } else {
      goto zig_block_7;
     }
    }
    zig_block_7:;
    /* file:44:13 */
    /* file:44:43 */
    /* file:44:60 */
    zig_i32 const t64 = zig_as_i32(0) - a1;
    zig_i32 const t65 = t6;
    zig_i32 const t66 = t65 + a1;
    zig_i32 const t67 = zig_as_i32(0) - t66;
    zig_i32 const t68 = t67 + zig_as_i32(1);
    zig_i32 const t69 = math_min__anon_3762(t64, t68);
    zig_u8 const t70 = (zig_u8 )t69;
    /* var:shift */
    /* file:45:13 */
    zig_u8 const t71 = zig_ctz_u128(t0, zig_as_u8(128));
    zig_u8 const t72 = t70 - zig_as_u8(1);
    zig_u8 const t73 = (zig_u8 )t72;
    zig_bool const t74 = t71 == t73;
    /* var:exact_tie */
    /* file:46:13 */
    zig_u128 t75;
    zig_u128 const t76 = zig_and_u128(t0, zig_as_u128(zig_as_u64(281474976710655), zig_maxInt_u64));
    zig_u128 * const t77 = (zig_u128 * )&t75;
    (*t77) = t76;
    /* var:result */
    /* file:48:17 */
    /* file:49:17 */
    zig_u128 const t78 = t75;
    zig_i32 const t79 = t6;
    zig_bool const t80 = t79 > zig_as_i32(0);
    zig_u8 const t81 = t80;
    zig_u128 const t82 = (zig_u128 )t81;
    zig_u128 const t83 = zig_shl_u128(t82, zig_as_u8(112));
    zig_u128 const t84 = zig_or_u128(t78, t83);
    t75 = t84;
    /* file:50:13 */
    zig_u128 const t85 = t75;
    zig_u8 const t86 = t70 - zig_as_u8(1);
    zig_u128 const t87 = zig_shr_u128(t85, t86);
    zig_u128 const t88 = (zig_u128 )t87;
    t75 = t88;
    /* file:53:13 */
    zig_u128 const t89 = t75;
    zig_u128 const t90 = zig_add_u128(t89, zig_as_u128(zig_as_u64(0), zig_as_u64(1)));
    zig_u128 const t91 = zig_shr_u128(t90, zig_as_u8(1));
    zig_u8 const t92 = t74;
    zig_u128 const t93 = (zig_u128 )t92;
    zig_u128 const t94 = ~t93;
    zig_u128 const t95 = zig_and_u128(t91, t94);
    t75 = t95;
    /* file:54:13 */
    zig_u128 const t96 = t75;
    zig_u128 const t97 = zig_or_u128(t96, t1);
    zig_f128 t98;
    memcpy(&t98, &t97, sizeof(zig_f128 ));
    /* file:54:13 */
    return t98;
   } else {
    goto zig_block_6;
   }
  }
  zig_block_6:;
  /* file:58:9 */
  zig_i32 const t99 = zig_as_i32(0) - a1;
  zig_u128 const t100 = (zig_u128 )t99;
  zig_u128 const t101 = zig_shl_u128(t100, zig_as_u8(112));
  zig_u128 const t102 = zig_sub_u128(t0, t101);
  zig_f128 t103;
  memcpy(&t103, &t102, sizeof(zig_f128 ));
  /* file:58:9 */
  return t103;
 }
}

static zig_S_compiler_rt_fma_dd128__3640 compiler_rt_fma_dd_mul128(zig_f128 const a0, zig_f128 const a1) {
 /* file:2:5 */
 zig_S_compiler_rt_fma_dd128__3640 t0;
 /* var:ret */
 /* file:3:5 */
 /* var:split */
 /* file:5:5 */
 zig_f128 t1;
 zig_f128 const t2 = a0 * (zig_f128 )zig_suffix_f128(0x1.000000000000008p57);
 zig_f128 * const t3 = (zig_f128 * )&t1;
 (*t3) = t2;
 /* var:p */
 /* file:6:5 */
 zig_f128 t4;
 zig_f128 const t5 = t1;
 zig_f128 const t6 = a0 - t5;
 zig_f128 * const t7 = (zig_f128 * )&t4;
 (*t7) = t6;
 /* var:ha */
 /* file:7:5 */
 zig_f128 const t8 = t4;
 zig_f128 const t9 = t1;
 zig_f128 const t10 = t8 + t9;
 t4 = t10;
 /* file:8:5 */
 zig_f128 t11;
 zig_f128 const t12 = t4;
 zig_f128 const t13 = a0 - t12;
 zig_f128 * const t14 = (zig_f128 * )&t11;
 (*t14) = t13;
 /* var:la */
 /* file:10:5 */
 zig_f128 const t15 = a1 * (zig_f128 )zig_suffix_f128(0x1.000000000000008p57);
 t1 = t15;
 /* file:11:5 */
 zig_f128 t16;
 zig_f128 const t17 = t1;
 zig_f128 const t18 = a1 - t17;
 zig_f128 * const t19 = (zig_f128 * )&t16;
 (*t19) = t18;
 /* var:hb */
 /* file:12:5 */
 zig_f128 const t20 = t16;
 zig_f128 const t21 = t1;
 zig_f128 const t22 = t20 + t21;
 t16 = t22;
 /* file:13:5 */
 zig_f128 t23;
 zig_f128 const t24 = t16;
 zig_f128 const t25 = a1 - t24;
 zig_f128 * const t26 = (zig_f128 * )&t23;
 (*t26) = t25;
 /* var:lb */
 /* file:15:5 */
 zig_f128 const t27 = t4;
 zig_f128 const t28 = t16;
 zig_f128 const t29 = t27 * t28;
 t1 = t29;
 /* file:16:5 */
 zig_f128 t30;
 zig_f128 const t31 = t4;
 zig_f128 const t32 = t23;
 zig_f128 const t33 = t31 * t32;
 zig_f128 const t34 = t11;
 zig_f128 const t35 = t16;
 zig_f128 const t36 = t34 * t35;
 zig_f128 const t37 = t33 + t36;
 zig_f128 * const t38 = (zig_f128 * )&t30;
 (*t38) = t37;
 /* var:q */
 /* file:18:5 */
 zig_f128 * const t39 = (zig_f128 * )&t0.hi;
 zig_f128 const t40 = t1;
 zig_f128 const t41 = t30;
 zig_f128 const t42 = t40 + t41;
 (*t39) = t42;
 /* file:19:5 */
 zig_f128 * const t43 = (zig_f128 * )&t0.lo;
 zig_f128 const t44 = t1;
 zig_S_compiler_rt_fma_dd128__3640 const t45 = t0;
 zig_f128 const t46 = t45.hi;
 zig_f128 const t47 = t44 - t46;
 zig_f128 const t48 = t30;
 zig_f128 const t49 = t47 + t48;
 zig_f128 const t50 = t11;
 zig_f128 const t51 = t23;
 zig_f128 const t52 = t50 * t51;
 zig_f128 const t53 = t49 + t52;
 (*t43) = t53;
 /* file:20:5 */
 zig_S_compiler_rt_fma_dd128__3640 const t54 = t0;
 /* file:20:5 */
 return t54;
}

static zig_S_compiler_rt_fma_dd128__3640 compiler_rt_fma_dd_add128(zig_f128 const a0, zig_f128 const a1) {
 /* file:2:5 */
 zig_S_compiler_rt_fma_dd128__3640 t0;
 /* var:ret */
 /* file:3:5 */
 zig_f128 * const t1 = (zig_f128 * )&t0.hi;
 zig_f128 const t2 = a0 + a1;
 (*t1) = t2;
 /* file:4:5 */
 zig_S_compiler_rt_fma_dd128__3640 const t3 = t0;
 zig_f128 const t4 = t3.hi;
 zig_f128 const t5 = t4 - a0;
 /* var:s */
 /* file:5:5 */
 zig_f128 * const t6 = (zig_f128 * )&t0.lo;
 zig_S_compiler_rt_fma_dd128__3640 const t7 = t0;
 zig_f128 const t8 = t7.hi;
 zig_f128 const t9 = t8 - t5;
 zig_f128 const t10 = a0 - t9;
 zig_f128 const t11 = a1 - t5;
 zig_f128 const t12 = t10 + t11;
 (*t6) = t12;
 /* file:6:5 */
 zig_S_compiler_rt_fma_dd128__3640 const t13 = t0;
 /* file:6:5 */
 return t13;
}

static zig_f128 compiler_rt_fma_add_adjusted128(zig_f128 const a0, zig_f128 const a1) {
 /* file:2:5 */
 zig_S_compiler_rt_fma_dd128__3640 t0;
 /* file:2:24 */
 zig_S_compiler_rt_fma_dd128__3640 const t1 = compiler_rt_fma_dd_add128(a0, a1);
 zig_S_compiler_rt_fma_dd128__3640 * const t2 = (zig_S_compiler_rt_fma_dd128__3640 * )&t0;
 (*t2) = t1;
 /* var:sum */
 /* file:3:9 */
 {
  zig_S_compiler_rt_fma_dd128__3640 const t3 = t0;
  zig_f128 const t4 = t3.lo;
  zig_bool const t5 = t4 != (zig_f128 )zig_suffix_f128(0x0.0p0);
  if (t5) {
   /* file:4:9 */
   zig_u128 t6;
   zig_S_compiler_rt_fma_dd128__3640 const t7 = t0;
   zig_f128 const t8 = t7.hi;
   zig_u128 t9;
   memcpy(&t9, &t8, sizeof(zig_u128 ));
   zig_u128 * const t10 = (zig_u128 * )&t6;
   (*t10) = t9;
   /* var:uhii */
   /* file:5:13 */
   {
    zig_u128 const t11 = t6;
    zig_u128 const t12 = zig_and_u128(t11, zig_as_u128(zig_as_u64(0), zig_as_u64(1)));
    zig_bool const t13 = t12 == zig_as_u128(zig_as_u64(0), zig_as_u64(0));
    if (t13) {
     /* file:7:13 */
     zig_S_compiler_rt_fma_dd128__3640 const t14 = t0;
     zig_f128 const t15 = t14.lo;
     zig_u128 t16;
     memcpy(&t16, &t15, sizeof(zig_u128 ));
     /* var:uloi */
     /* file:8:13 */
     zig_u128 const t17 = t6;
     zig_u128 const t18 = t6;
     zig_u128 const t19 = zig_xor_u128(t18, t16);
     zig_u128 const t20 = zig_shr_u128(t19, zig_as_u8(126));
     zig_u128 const t21 = zig_sub_u128(zig_as_u128(zig_as_u64(0), zig_as_u64(1)), t20);
     zig_u128 const t22 = zig_add_u128(t17, t21);
     t6 = t22;
     /* file:9:13 */
     zig_f128 * const t23 = (zig_f128 * )&t0.hi;
     zig_u128 const t24 = t6;
     zig_f128 t25;
     memcpy(&t25, &t24, sizeof(zig_f128 ));
     (*t23) = t25;
     goto zig_block_1;
    } else {
     goto zig_block_1;
    }
   }
   zig_block_1:;
   goto zig_block_0;
  } else {
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:12:5 */
 zig_S_compiler_rt_fma_dd128__3640 const t26 = t0;
 zig_f128 const t27 = t26.hi;
 /* file:12:5 */
 return t27;
}

static zig_i32 math_ilogb_ilogbX__anon_3766(zig_f128 const a0) {
 /* file:2:5 */
 /* file:3:5 */
 /* file:3:51 */
 /* file:4:5 */
 /* file:4:48 */
 /* file:6:5 */
 /* file:6:27 */
 /* file:8:5 */
 /* var:signBit */
 /* file:9:5 */
 /* file:10:5 */
 /* file:12:5 */
 /* var:absMask */
 /* file:14:5 */
 zig_u128 t0;
 zig_u128 t1;
 memcpy(&t1, &a0, sizeof(zig_u128 ));
 zig_u128 const t2 = zig_and_u128(t1, zig_as_u128(zig_as_u64(9223372036854775807), zig_maxInt_u64));
 zig_u128 * const t3 = (zig_u128 * )&t0;
 (*t3) = t2;
 /* var:u */
 /* file:15:5 */
 zig_i32 t4;
 zig_u128 const t5 = t0;
 zig_u128 const t6 = zig_shr_u128(t5, zig_as_u8(112));
 zig_i32 const t7 = (zig_i32 )t6;
 zig_i32 * const t8 = (zig_i32 * )&t4;
 (*t8) = t7;
 /* var:e */
 /* file:17:9 */
 {
  zig_i32 const t9 = t4;
  zig_bool const t10 = t9 == zig_as_i32(0);
  if (t10) {
   /* file:18:13 */
   {
    zig_u128 const t11 = t0;
    zig_bool const t12 = t11 == zig_as_u128(zig_as_u64(0), zig_as_u64(0));
    if (t12) {
     /* file:19:13 */
     /* file:19:30 */
     math_raiseInvalid();
     /* file:20:13 */
     /* file:20:13 */
     return zig_minInt_i32;
    } else {
     goto zig_block_1;
    }
   }
   zig_block_1:;
   /* file:24:9 */
   /* file:25:9 */
   zig_u128 const t13 = t0;
   zig_u8 const t14 = zig_clz_u128(t13, zig_as_u8(128));
   zig_i32 const t15 = (zig_i32 )t14;
   zig_i32 const t16 = -zig_as_i32(16367) - t15;
   /* file:25:9 */
   return t16;
  } else {
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:28:9 */
 {
  zig_i32 const t17 = t4;
  zig_bool const t18 = t17 == zig_as_i32(32767);
  if (t18) {
   /* file:29:9 */
   /* file:29:26 */
   math_raiseInvalid();
   /* file:30:13 */
   zig_u128 const t19 = t0;
   /* file:30:37 */
   /* dbg func:inf */
   /* file:2:5 */
   zig_f128 t20;
   /* file:2:28 */
   /* dbg func:reconstructFloat */
   /* file:2:5 */
   /* file:3:5 */
   /* file:3:67 */
   /* var:biased_exponent */
   /* file:4:5 */
   /* file:4:61 */
   /* file:4:5 */
   /* dbg func:inf */
   t20 = (zig_f128 )zig_builtin_constant_f128(inf)();
   /* file:2:5 */
   zig_f128 const t21 = t20;
   /* dbg func:ilogbX__anon_3766 */
   zig_u128 t22;
   memcpy(&t22, &t21, sizeof(zig_u128 ));
   zig_bool const t23 = zig_cmp_u128(t19, t22) > zig_as_i8(0);
   if (t23) {
    /* file:31:13 */
    /* file:31:13 */
    return zig_minInt_i32;
   } else {
    /* file:32:16 */
    zig_i32 t24;
    /* file:32:29 */
    t24 = zig_maxInt_i32;
    /* file:32:16 */
    return t24;
   }
  } else {
   goto zig_block_2;
  }
 }
 zig_block_2:;
 /* file:35:5 */
 zig_i32 const t25 = t4;
 zig_i32 const t26 = t25 - zig_as_i32(16383);
 /* file:35:5 */
 return t26;
}

static zig_i32 math_ilogb_ilogb__anon_3557(zig_f128 const a0) {
 /* file:2:5 */
 /* file:3:5 */
 zig_i32 t0;
 /* file:3:18 */
 zig_i32 const t1 = math_ilogb_ilogbX__anon_3766(a0);
 t0 = t1;
 /* file:3:5 */
 return t0;
}

static zig_f128 compiler_rt_fma_add_and_denorm128(zig_f128 const a0, zig_f128 const a1, zig_i32 const a2) {
 /* file:2:5 */
 zig_S_compiler_rt_fma_dd128__3640 t0;
 /* file:2:24 */
 zig_S_compiler_rt_fma_dd128__3640 const t1 = compiler_rt_fma_dd_add128(a0, a1);
 zig_S_compiler_rt_fma_dd128__3640 * const t2 = (zig_S_compiler_rt_fma_dd128__3640 * )&t0;
 (*t2) = t1;
 /* var:sum */
 /* file:11:9 */
 {
  zig_S_compiler_rt_fma_dd128__3640 const t3 = t0;
  zig_f128 const t4 = t3.lo;
  zig_bool const t5 = t4 != (zig_f128 )zig_suffix_f128(0x0.0p0);
  if (t5) {
   /* file:12:9 */
   zig_u128 t6;
   zig_S_compiler_rt_fma_dd128__3640 const t7 = t0;
   zig_f128 const t8 = t7.hi;
   zig_u128 t9;
   memcpy(&t9, &t8, sizeof(zig_u128 ));
   zig_u128 * const t10 = (zig_u128 * )&t6;
   (*t10) = t9;
   /* var:uhii */
   /* file:13:9 */
   zig_u128 const t11 = t6;
   zig_u128 const t12 = zig_shr_u128(t11, zig_as_u8(112));
   zig_u128 const t13 = zig_and_u128(t12, zig_as_u128(zig_as_u64(0), zig_as_u64(32767)));
   zig_i32 const t14 = (zig_i32 )t13;
   zig_i32 const t15 = zig_as_i32(0) - t14;
   zig_i32 const t16 = t15 - a2;
   zig_i32 const t17 = t16 + zig_as_i32(1);
   /* var:bits_lost */
   /* file:14:13 */
   {
    zig_bool const t18 = t17 != zig_as_i32(1);
    zig_u128 const t19 = t6;
    zig_u128 const t20 = zig_and_u128(t19, zig_as_u128(zig_as_u64(0), zig_as_u64(1)));
    zig_bool const t21 = t20 != zig_as_u128(zig_as_u64(0), zig_as_u64(0));
    zig_bool const t22 = t18 == t21;
    if (t22) {
     /* file:15:13 */
     zig_S_compiler_rt_fma_dd128__3640 const t23 = t0;
     zig_f128 const t24 = t23.lo;
     zig_u128 t25;
     memcpy(&t25, &t24, sizeof(zig_u128 ));
     /* var:uloi */
     /* file:16:13 */
     zig_u128 const t26 = t6;
     zig_u128 const t27 = t6;
     zig_u128 const t28 = zig_xor_u128(t27, t25);
     zig_u128 const t29 = zig_shr_u128(t28, zig_as_u8(126));
     zig_u128 const t30 = zig_and_u128(t29, zig_as_u128(zig_as_u64(0), zig_as_u64(2)));
     zig_u128 const t31 = zig_sub_u128(zig_as_u128(zig_as_u64(0), zig_as_u64(1)), t30);
     zig_u128 const t32 = zig_add_u128(t26, t31);
     t6 = t32;
     /* file:17:13 */
     zig_f128 * const t33 = (zig_f128 * )&t0.hi;
     zig_u128 const t34 = t6;
     zig_f128 t35;
     memcpy(&t35, &t34, sizeof(zig_f128 ));
     (*t33) = t35;
     goto zig_block_1;
    } else {
     goto zig_block_1;
    }
   }
   zig_block_1:;
   goto zig_block_0;
  } else {
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:20:5 */
 zig_f128 t36;
 /* file:20:23 */
 zig_S_compiler_rt_fma_dd128__3640 const t37 = t0;
 zig_f128 const t38 = t37.hi;
 zig_f128 const t39 = math_ldexp_ldexp__anon_3558(t38, a2);
 t36 = t39;
 /* file:20:5 */
 return t36;
}

zig_f128 fmaq(zig_f128 const a0, zig_f128 const a1, zig_f128 const a2) {
 /* file:2:9 */
 {
  /* file:2:23 */
  zig_bool const t0 = math_isfinite_isFinite__anon_3559(a0);
  zig_bool const t1 = !t0;
  zig_bool t2;
  {
   if (t1) {
    t2 = zig_true;
    goto zig_block_1;
   } else {
    /* file:2:44 */
    zig_bool const t3 = math_isfinite_isFinite__anon_3559(a1);
    zig_bool const t4 = !t3;
    t2 = t4;
    goto zig_block_1;
   }
  }
  zig_block_1:;
  if (t2) {
   /* file:3:9 */
   zig_f128 const t5 = a0 * a1;
   zig_f128 const t6 = t5 + a2;
   /* file:3:9 */
   return t6;
  } else {
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:5:9 */
 {
  /* file:5:23 */
  zig_bool const t7 = math_isfinite_isFinite__anon_3559(a2);
  zig_bool const t8 = !t7;
  if (t8) {
   /* file:6:9 */
   /* file:6:9 */
   return a2;
  } else {
   goto zig_block_2;
  }
 }
 zig_block_2:;
 /* file:8:9 */
 {
  zig_bool const t9 = a0 == (zig_f128 )zig_suffix_f128(0x0.0p0);
  zig_bool t10;
  {
   if (t9) {
    t10 = zig_true;
    goto zig_block_4;
   } else {
    zig_bool const t11 = a1 == (zig_f128 )zig_suffix_f128(0x0.0p0);
    t10 = t11;
    goto zig_block_4;
   }
  }
  zig_block_4:;
  if (t10) {
   /* file:9:9 */
   zig_f128 const t12 = a0 * a1;
   zig_f128 const t13 = t12 + a2;
   /* file:9:9 */
   return t13;
  } else {
   goto zig_block_3;
  }
 }
 zig_block_3:;
 /* file:11:9 */
 {
  zig_bool const t14 = a2 == (zig_f128 )zig_suffix_f128(0x0.0p0);
  if (t14) {
   /* file:12:9 */
   zig_f128 const t15 = a0 * a1;
   /* file:12:9 */
   return t15;
  } else {
   goto zig_block_5;
  }
 }
 zig_block_5:;
 /* file:15:5 */
 /* file:15:26 */
 zig_S_math_frexp_Frexp_28f128_29__3639 const t16 = math_frexp_frexp__anon_3638(a0);
 /* var:x1 */
 /* file:16:5 */
 zig_i32 t17;
 zig_i32 const t18 = t16.exponent;
 zig_i32 * const t19 = (zig_i32 * )&t17;
 (*t19) = t18;
 /* var:ex */
 /* file:17:5 */
 zig_f128 t20;
 zig_f128 const t21 = t16.significand;
 zig_f128 * const t22 = (zig_f128 * )&t20;
 (*t22) = t21;
 /* var:xs */
 /* file:18:5 */
 /* file:18:26 */
 zig_S_math_frexp_Frexp_28f128_29__3639 const t23 = math_frexp_frexp__anon_3638(a1);
 /* var:x2 */
 /* file:19:5 */
 zig_i32 t24;
 zig_i32 const t25 = t23.exponent;
 zig_i32 * const t26 = (zig_i32 * )&t24;
 (*t26) = t25;
 /* var:ey */
 /* file:20:5 */
 zig_f128 t27;
 zig_f128 const t28 = t23.significand;
 zig_f128 * const t29 = (zig_f128 * )&t27;
 (*t29) = t28;
 /* var:ys */
 /* file:21:5 */
 /* file:21:26 */
 zig_S_math_frexp_Frexp_28f128_29__3639 const t30 = math_frexp_frexp__anon_3638(a2);
 /* var:x3 */
 /* file:22:5 */
 zig_i32 t31;
 zig_i32 const t32 = t30.exponent;
 zig_i32 * const t33 = (zig_i32 * )&t31;
 (*t33) = t32;
 /* var:ez */
 /* file:23:5 */
 zig_f128 t34;
 zig_f128 const t35 = t30.significand;
 zig_f128 * const t36 = (zig_f128 * )&t34;
 (*t36) = t35;
 /* var:zs */
 /* file:25:5 */
 zig_i32 t37;
 zig_i32 const t38 = t17;
 zig_i32 const t39 = t24;
 zig_i32 const t40 = t38 + t39;
 zig_i32 const t41 = t31;
 zig_i32 const t42 = t40 - t41;
 zig_i32 * const t43 = (zig_i32 * )&t37;
 (*t43) = t42;
 /* var:spread */
 /* file:26:9 */
 {
  zig_i32 const t44 = t37;
  zig_bool const t45 = t44 <= zig_as_i32(226);
  if (t45) {
   /* file:27:9 */
   /* file:27:25 */
   zig_f128 const t46 = t34;
   zig_i32 const t47 = t37;
   zig_i32 const t48 = zig_as_i32(0) - t47;
   zig_f128 const t49 = math_ldexp_ldexp__anon_3558(t46, t48);
   t34 = t49;
   goto zig_block_6;
  } else {
   /* file:29:9 */
   /* file:29:27 */
   /* file:29:41 */
   /* dbg func:floatMin */
   /* file:2:5 */
   zig_f128 t50;
   /* file:2:28 */
   /* dbg func:reconstructFloat */
   /* file:2:5 */
   /* file:3:5 */
   /* file:3:67 */
   /* var:biased_exponent */
   /* file:4:5 */
   /* file:4:61 */
   /* file:4:5 */
   /* dbg func:floatMin */
   t50 = (zig_f128 )zig_suffix_f128(0x1p-16382);
   /* file:2:5 */
   zig_f128 const t51 = t50;
   /* dbg func:fmaq */
   zig_f128 const t52 = t34;
   zig_f128 const t53 = math_copysign_copysign__anon_3499(t51, t52);
   t34 = t53;
   goto zig_block_6;
  }
 }
 zig_block_6:;
 /* file:32:5 */
 /* file:32:25 */
 zig_f128 const t54 = t20;
 zig_f128 const t55 = t27;
 zig_S_compiler_rt_fma_dd128__3640 const t56 = compiler_rt_fma_dd_mul128(t54, t55);
 /* var:xy */
 /* file:33:5 */
 /* file:33:24 */
 zig_f128 const t57 = t56.hi;
 zig_f128 const t58 = t34;
 zig_S_compiler_rt_fma_dd128__3640 const t59 = compiler_rt_fma_dd_add128(t57, t58);
 /* var:r */
 /* file:34:5 */
 zig_i32 const t60 = t17;
 zig_i32 const t61 = t24;
 zig_i32 const t62 = t60 + t61;
 t37 = t62;
 /* file:36:9 */
 {
  zig_f128 const t63 = t59.hi;
  zig_bool const t64 = t63 == (zig_f128 )zig_suffix_f128(0x0.0p0);
  if (t64) {
   /* file:37:9 */
   zig_f128 const t65 = t56.hi;
   zig_f128 const t66 = t34;
   zig_f128 const t67 = t65 + t66;
   /* file:37:40 */
   zig_f128 const t68 = t56.lo;
   zig_i32 const t69 = t37;
   zig_f128 const t70 = math_ldexp_ldexp__anon_3558(t68, t69);
   zig_f128 const t71 = t67 + t70;
   /* file:37:9 */
   return t71;
  } else {
   goto zig_block_7;
  }
 }
 zig_block_7:;
 /* file:40:5 */
 /* file:40:32 */
 zig_f128 const t72 = t59.lo;
 zig_f128 const t73 = t56.lo;
 zig_f128 const t74 = compiler_rt_fma_add_adjusted128(t72, t73);
 /* var:adj */
 /* file:41:9 */
 zig_i32 const t75 = t37;
 /* file:41:28 */
 zig_f128 const t76 = t59.hi;
 zig_i32 const t77 = math_ilogb_ilogb__anon_3557(t76);
 zig_i32 const t78 = t75 + t77;
 zig_bool const t79 = t78 > -zig_as_i32(16383);
 if (t79) {
  /* file:42:9 */
  zig_f128 t80;
  /* file:42:27 */
  zig_f128 const t81 = t59.hi;
  zig_f128 const t82 = t81 + t74;
  zig_i32 const t83 = t37;
  zig_f128 const t84 = math_ldexp_ldexp__anon_3558(t82, t83);
  t80 = t84;
  /* file:42:9 */
  return t80;
 } else {
  /* file:44:9 */
  zig_f128 t85;
  /* file:44:33 */
  zig_f128 const t86 = t59.hi;
  zig_i32 const t87 = t37;
  zig_f128 const t88 = compiler_rt_fma_add_and_denorm128(t86, t74, t87);
  t85 = t88;
  /* file:44:9 */
  return t85;
 }
}

zig_f16 __fabsh(zig_f16 const a0) {
 /* file:2:5 */
 zig_f16 t0;
 /* file:2:24 */
 /* dbg func:generic_fabs */
 /* var:x */
 /* file:2:5 */
 /* file:3:5 */
 /* file:3:31 */
 /* file:4:5 */
 zig_u16 t1;
 memcpy(&t1, &a0, sizeof(zig_u16 ));
 /* var:float_bits */
 /* file:5:5 */
 /* var:remove_sign */
 /* file:6:5 */
 zig_u16 const t2 = t1 & zig_as_u16(32767);
 zig_f16 t3;
 memcpy(&t3, &t2, sizeof(zig_f16 ));
 /* file:6:5 */
 /* dbg func:__fabsh */
 t0 = t3;
 /* file:2:5 */
 return t0;
}

zig_f16 __fmodh(zig_f16 const a0, zig_f16 const a1) {
 /* file:3:5 */
 /* file:3:33 */
 zig_f32 const t0 = a0;
 zig_f32 const t1 = a1;
 zig_f32 const t2 = fmodf(t0, t1);
 zig_f16 const t3 = t2;
 /* file:3:5 */
 return t3;
}

zig_f16 __fmah(zig_f16 const a0, zig_f16 const a1, zig_f16 const a2) {
 /* file:3:5 */
 /* file:3:32 */
 zig_f32 const t0 = a0;
 zig_f32 const t1 = a1;
 zig_f32 const t2 = a2;
 zig_f32 const t3 = fmaf(t0, t1, t2);
 zig_f16 const t4 = t3;
 /* file:3:5 */
 return t4;
}

zig_f16 __sqrth(zig_f16 const a0) {
 /* file:3:5 */
 /* file:3:33 */
 zig_f32 const t0 = a0;
 zig_f32 const t1 = sqrtf(t0);
 zig_f16 const t2 = t1;
 /* file:3:5 */
 return t2;
}

zig_f16 __sinh(zig_f16 const a0) {
 /* file:3:5 */
 /* file:3:32 */
 zig_f32 const t0 = a0;
 zig_f32 const t1 = sinf(t0);
 zig_f16 const t2 = t1;
 /* file:3:5 */
 return t2;
}

zig_f16 __cosh(zig_f16 const a0) {
 /* file:3:5 */
 /* file:3:32 */
 zig_f32 const t0 = a0;
 zig_f32 const t1 = cosf(t0);
 zig_f16 const t2 = t1;
 /* file:3:5 */
 return t2;
}

zig_f16 __tanh(zig_f16 const a0) {
 /* file:3:5 */
 /* file:3:32 */
 zig_f32 const t0 = a0;
 zig_f32 const t1 = tanf(t0);
 zig_f16 const t2 = t1;
 /* file:3:5 */
 return t2;
}

zig_f128 fabsq(zig_f128 const a0) {
 /* file:2:5 */
 zig_f128 t0;
 /* file:2:24 */
 /* dbg func:generic_fabs */
 /* var:x */
 /* file:2:5 */
 /* file:3:5 */
 /* file:3:31 */
 /* file:4:5 */
 zig_u128 t1;
 memcpy(&t1, &a0, sizeof(zig_u128 ));
 /* var:float_bits */
 /* file:5:5 */
 /* var:remove_sign */
 /* file:6:5 */
 zig_u128 const t2 = zig_and_u128(t1, zig_as_u128(zig_as_u64(9223372036854775807), zig_maxInt_u64));
 zig_f128 t3;
 memcpy(&t3, &t2, sizeof(zig_f128 ));
 /* file:6:5 */
 /* dbg func:fabsq */
 t0 = t3;
 /* file:2:5 */
 return t0;
}

zig_f80 __fabsx(zig_f80 const a0) {
 /* file:2:5 */
 zig_f80 t0;
 /* file:2:24 */
 /* dbg func:generic_fabs */
 /* var:x */
 /* file:2:5 */
 /* file:3:5 */
 /* file:3:31 */
 /* file:4:5 */
 zig_u128 t1;
 memcpy(&t1, &a0, sizeof(zig_u128 ));
 /* var:float_bits */
 /* file:5:5 */
 /* var:remove_sign */
 /* file:6:5 */
 zig_u128 const t2 = zig_and_u128(t1, zig_as_u128(zig_as_u64(32767), zig_maxInt_u64));
 zig_f80 t3;
 memcpy(&t3, &t2, sizeof(zig_f80 ));
 /* file:6:5 */
 /* dbg func:__fabsx */
 t0 = t3;
 /* file:2:5 */
 return t0;
}

zig_f16 __truncdfhf2(zig_f64 const a0) {
 /* file:2:5 */
 zig_f16 t0;
 /* file:2:40 */
 /* dbg func:truncf */
 /* var:a */
 /* file:2:5 */
 /* file:2:35 */
 /* file:3:5 */
 /* file:3:35 */
 /* file:4:5 */
 /* file:4:50 */
 /* file:5:5 */
 /* file:5:50 */
 /* file:6:5 */
 /* file:6:38 */
 /* file:10:5 */
 /* file:11:5 */
 /* file:12:5 */
 /* file:13:5 */
 /* file:15:5 */
 /* file:16:5 */
 /* file:17:5 */
 /* file:18:5 */
 /* file:19:5 */
 /* file:20:5 */
 /* file:21:5 */
 /* file:22:5 */
 /* file:23:5 */
 /* file:25:5 */
 /* file:26:5 */
 /* file:27:5 */
 /* file:28:5 */
 /* file:30:5 */
 /* file:31:5 */
 /* file:32:5 */
 /* file:33:5 */
 /* file:35:5 */
 /* file:36:5 */
 /* file:39:5 */
 zig_u64 t1;
 memcpy(&t1, &a0, sizeof(zig_u64 ));
 /* var:aRep */
 /* file:40:5 */
 zig_u64 const t2 = t1 & zig_as_u64(9223372036854775807);
 /* var:aAbs */
 /* file:41:5 */
 zig_u64 const t3 = t1 & zig_as_u64(9223372036854775808);
 /* var:sign */
 /* file:42:5 */
 zig_u16 t4;
 /* var:absResult */
 /* file:44:9 */
 {
  zig_u64 const t5 = zig_subw_u64(t2, zig_as_u64(4544132024016830464), zig_as_u8(64));
  zig_u64 const t6 = zig_subw_u64(t2, zig_as_u64(4679240012837945344), zig_as_u8(64));
  zig_bool const t7 = t5 < t6;
  if (t7) {
   /* file:48:9 */
   zig_u64 const t8 = zig_shr_u64(t2, zig_as_u8(42));
   zig_u16 const t9 = (zig_u16 )t8;
   t4 = t9;
   /* file:49:9 */
   zig_u16 const t10 = t4;
   zig_u16 const t11 = zig_subw_u16(t10, zig_as_u16(49152), zig_as_u8(16));
   t4 = t11;
   /* file:51:9 */
   zig_u64 const t12 = t2 & zig_as_u64(4398046511103);
   /* var:roundBits */
   /* file:52:13 */
   {
    zig_bool const t13 = t12 > zig_as_u64(2199023255552);
    if (t13) {
     /* file:54:13 */
     zig_u16 const t14 = t4;
     zig_u16 const t15 = t14 + zig_as_u16(1);
     t4 = t15;
     goto zig_block_1;
    } else {
     {
      /* file:55:20 */
      zig_bool const t16 = t12 == zig_as_u64(2199023255552);
      if (t16) {
       /* file:57:13 */
       zig_u16 const t17 = t4;
       zig_u16 const t18 = t4;
       zig_u16 const t19 = t18 & zig_as_u16(1);
       zig_u16 const t20 = t17 + t19;
       t4 = t20;
       goto zig_block_2;
      } else {
       goto zig_block_2;
      }
     }
     zig_block_2:;
     goto zig_block_1;
    }
   }
   zig_block_1:;
   goto zig_block_0;
  } else {
   {
    /* file:59:16 */
    zig_bool const t21 = t2 > zig_as_u64(9218868437227405312);
    if (t21) {
     /* file:63:9 */
     t4 = zig_as_u16(31744);
     /* file:64:9 */
     zig_u16 const t22 = t4;
     zig_u16 const t23 = t22 | zig_as_u16(512);
     t4 = t23;
     /* file:65:9 */
     zig_u16 const t24 = t4;
     zig_u64 const t25 = t2 & zig_as_u64(2251799813685247);
     zig_u64 const t26 = zig_shr_u64(t25, zig_as_u8(42));
     zig_u64 const t27 = t26 & zig_as_u64(511);
     zig_u16 const t28 = (zig_u16 )t27;
     zig_u16 const t29 = t24 | t28;
     t4 = t29;
     goto zig_block_3;
    } else {
     {
      /* file:66:16 */
      zig_bool const t30 = t2 >= zig_as_u64(4679240012837945344);
      if (t30) {
       /* file:68:9 */
       t4 = zig_as_u16(31744);
       goto zig_block_4;
      } else {
       /* file:73:9 */
       zig_u64 const t31 = zig_shr_u64(t2, zig_as_u8(52));
       zig_u32 const t32 = (zig_u32 )t31;
       /* var:aExp */
       /* file:74:9 */
       zig_u32 const t33 = zig_as_u32(1008) - t32;
       zig_u32 const t34 = t33 + zig_as_u32(1);
       zig_u32 const t35 = (zig_u32 )t34;
       /* var:shift */
       /* file:76:9 */
       zig_u64 const t36 = t1 & zig_as_u64(4503599627370495);
       zig_u64 const t37 = t36 | zig_as_u64(4503599627370496);
       /* var:significand */
       /* file:79:13 */
       {
        zig_bool const t38 = t35 > zig_as_u32(52);
        if (t38) {
         /* file:80:13 */
         t4 = zig_as_u16(0);
         goto zig_block_5;
        } else {
         /* file:82:13 */
         zig_u32 const t39 = zig_as_u32(64) - t35;
         zig_u8 const t40 = (zig_u8 )t39;
         zig_u64 const t41 = zig_shl_u64(t37, t40);
         zig_bool const t42 = t41 != zig_as_u64(0);
         zig_u8 const t43 = t42;
         zig_u64 const t44 = (zig_u64 )t43;
         /* var:sticky */
         /* file:83:13 */
         zig_u8 const t45 = (zig_u8 )t35;
         zig_u64 const t46 = zig_shr_u64(t37, t45);
         zig_u64 const t47 = t46 | t44;
         /* var:denormalizedSignificand */
         /* file:84:13 */
         zig_u64 const t48 = zig_shr_u64(t47, zig_as_u8(42));
         zig_u16 const t49 = (zig_u16 )t48;
         t4 = t49;
         /* file:85:13 */
         zig_u64 const t50 = t47 & zig_as_u64(4398046511103);
         /* var:roundBits */
         /* file:86:17 */
         {
          zig_bool const t51 = t50 > zig_as_u64(2199023255552);
          if (t51) {
           /* file:88:17 */
           zig_u16 const t52 = t4;
           zig_u16 const t53 = t52 + zig_as_u16(1);
           t4 = t53;
           goto zig_block_6;
          } else {
           {
            /* file:89:24 */
            zig_bool const t54 = t50 == zig_as_u64(2199023255552);
            if (t54) {
             /* file:91:17 */
             zig_u16 const t55 = t4;
             zig_u16 const t56 = t4;
             zig_u16 const t57 = t56 & zig_as_u16(1);
             zig_u16 const t58 = t55 + t57;
             t4 = t58;
             goto zig_block_7;
            } else {
             goto zig_block_7;
            }
           }
           zig_block_7:;
           goto zig_block_6;
          }
         }
         zig_block_6:;
         goto zig_block_5;
        }
       }
       zig_block_5:;
       goto zig_block_4;
      }
     }
     zig_block_4:;
     goto zig_block_3;
    }
   }
   zig_block_3:;
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:96:5 */
 zig_u16 t59;
 zig_u16 const t60 = t4;
 zig_u64 const t61 = zig_shr_u64(t3, zig_as_u8(48));
 zig_u16 const t62 = (zig_u16 )t61;
 zig_u16 const t63 = t60 | t62;
 t59 = t63;
 zig_u16 const * const t64 = (zig_u16 const * )&t59;
 /* var:result */
 /* file:98:5 */
 zig_u16 const t65 = (*t64);
 zig_f16 t66;
 memcpy(&t66, &t65, sizeof(zig_f16 ));
 /* file:98:5 */
 /* dbg func:__truncdfhf2 */
 zig_f16 t67;
 memcpy(&t67, &t66, sizeof(zig_f16 ));
 t0 = t67;
 /* file:2:5 */
 return t0;
}

zig_f128 fmodq(zig_f128 const a0, zig_f128 const a1) {
 /* file:2:5 */
 zig_f128 t0;
 zig_f128 * const t1 = (zig_f128 * )&t0;
 (*t1) = a0;
 /* var:amod */
 /* file:3:5 */
 zig_f128 t2;
 zig_f128 * const t3 = (zig_f128 * )&t2;
 (*t3) = a1;
 /* var:bmod */
 /* file:4:5 */
 zig_u64 * const t4 = (zig_u64 * )&t0;
 zig_u64 * t5;
 t5 = t4;
 zig_u64 * const * const t6 = (zig_u64 * const * )&t5;
 /* var:aPtr_u64 */
 /* file:5:5 */
 zig_u64 * const t7 = (zig_u64 * )&t2;
 /* var:bPtr_u64 */
 /* file:6:5 */
 zig_u16 * const t8 = (zig_u16 * )&t0;
 zig_u16 * t9;
 t9 = t8;
 zig_u16 * const * const t10 = (zig_u16 * const * )&t9;
 /* var:aPtr_u16 */
 /* file:7:5 */
 zig_u16 * const t11 = (zig_u16 * )&t2;
 zig_u16 * t12;
 t12 = t11;
 zig_u16 * const * const t13 = (zig_u16 * const * )&t12;
 /* var:bPtr_u16 */
 /* file:9:5 */
 /* file:9:79 */
 /* file:13:5 */
 /* file:13:70 */
 /* file:17:5 */
 /* file:17:71 */
 /* file:22:5 */
 zig_u16 const t14 = t8[zig_as_u64(7)];
 zig_u16 const t15 = t14 & zig_as_u16(32768);
 /* var:signA */
 /* file:23:5 */
 zig_i32 t16;
 zig_u16 const t17 = t8[zig_as_u64(7)];
 zig_u16 const t18 = t17 & zig_as_u16(32767);
 zig_i32 const t19 = (zig_i32 )t18;
 zig_i32 * const t20 = (zig_i32 * )&t16;
 (*t20) = t19;
 /* var:expA */
 /* file:24:5 */
 zig_i32 t21;
 zig_u16 const t22 = t11[zig_as_u64(7)];
 zig_u16 const t23 = t22 & zig_as_u16(32767);
 zig_i32 const t24 = (zig_i32 )t23;
 zig_i32 * const t25 = (zig_i32 * )&t21;
 (*t25) = t24;
 /* var:expB */
 /* file:36:9 */
 {
  zig_bool const t26 = a1 == (zig_f128 )zig_suffix_f128(0x0.0p0);
  zig_bool t27;
  {
   if (t26) {
    t27 = zig_true;
    goto zig_block_1;
   } else {
    /* file:36:33 */
    zig_bool const t28 = math_isnan_isNan__anon_3498(a1);
    t27 = t28;
    goto zig_block_1;
   }
  }
  zig_block_1:;
  zig_bool t29;
  {
   if (t27) {
    t29 = zig_true;
    goto zig_block_2;
   } else {
    zig_i32 const t30 = t16;
    zig_bool const t31 = t30 == zig_as_i32(32767);
    t29 = t31;
    goto zig_block_2;
   }
  }
  zig_block_2:;
  if (t29) {
   /* file:37:9 */
   zig_f128 const t32 = a0 * a1;
   zig_f128 const t33 = a0 * a1;
   zig_f128 const t34 = t32 / t33;
   /* file:37:9 */
   return t34;
  } else {
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:41:5 */
 zig_u16 * const t35 = (*t10);
 zig_u16 * const t36 = &(t35)[zig_as_u64(7)];
 zig_i32 const t37 = t16;
 zig_i16 const t38 = (zig_i16 )t37;
 zig_u16 t39;
 memcpy(&t39, &t38, sizeof(zig_u16 ));
 (*t36) = t39;
 /* file:42:5 */
 zig_u16 * const t40 = (*t13);
 zig_u16 * const t41 = &(t40)[zig_as_u64(7)];
 zig_i32 const t42 = t21;
 zig_i16 const t43 = (zig_i16 )t42;
 zig_u16 t44;
 memcpy(&t44, &t43, sizeof(zig_u16 ));
 (*t41) = t44;
 /* file:43:9 */
 {
  zig_f128 const t45 = t0;
  zig_f128 const t46 = t2;
  zig_bool const t47 = t45 <= t46;
  if (t47) {
   /* file:44:13 */
   {
    zig_f128 const t48 = t0;
    zig_f128 const t49 = t2;
    zig_bool const t50 = t48 == t49;
    if (t50) {
     /* file:45:13 */
     /* file:45:13 */
     return (zig_f128 )zig_suffix_f128(0x0.0p0);
    } else {
     goto zig_block_4;
    }
   }
   zig_block_4:;
   /* file:47:9 */
   /* file:47:9 */
   return a0;
  } else {
   goto zig_block_3;
  }
 }
 zig_block_3:;
 /* file:50:9 */
 {
  zig_i32 const t51 = t16;
  zig_bool const t52 = t51 == zig_as_i32(0);
  if (t52) {
   /* file:51:9 */
   zig_f128 const t53 = t0;
   zig_f128 const t54 = t53 * (zig_f128 )zig_suffix_f128(0x1p120);
   t0 = t54;
   /* file:52:9 */
   zig_u16 const t55 = t8[zig_as_u64(7)];
   zig_i32 const t56 = (zig_i32 )t55;
   zig_i32 const t57 = t56 - zig_as_i32(120);
   t16 = t57;
   goto zig_block_5;
  } else {
   goto zig_block_5;
  }
 }
 zig_block_5:;
 /* file:55:9 */
 {
  zig_i32 const t58 = t21;
  zig_bool const t59 = t58 == zig_as_i32(0);
  if (t59) {
   /* file:56:9 */
   zig_f128 const t60 = t2;
   zig_f128 const t61 = t60 * (zig_f128 )zig_suffix_f128(0x1p120);
   t2 = t61;
   /* file:57:9 */
   zig_u16 const t62 = t11[zig_as_u64(7)];
   zig_i32 const t63 = (zig_i32 )t62;
   zig_i32 const t64 = t63 - zig_as_i32(120);
   t21 = t64;
   goto zig_block_6;
  } else {
   goto zig_block_6;
  }
 }
 zig_block_6:;
 /* file:61:5 */
 zig_u64 t65;
 zig_u64 const t66 = t4[zig_as_u64(1)];
 /* file:61:62 */
 zig_u64 const t67 = t66 & zig_as_u64(281474976710655);
 zig_u64 const t68 = t67 | zig_as_u64(281474976710656);
 t65 = t68;
 /* var:highA */
 /* file:62:5 */
 zig_u64 t69;
 zig_u64 const t70 = t7[zig_as_u64(1)];
 /* file:62:62 */
 zig_u64 const t71 = t70 & zig_as_u64(281474976710655);
 zig_u64 const t72 = t71 | zig_as_u64(281474976710656);
 t69 = t72;
 /* var:highB */
 /* file:63:5 */
 zig_u64 t73;
 zig_u64 const t74 = t4[zig_as_u64(0)];
 t73 = t74;
 /* var:lowA */
 /* file:64:5 */
 zig_u64 t75;
 zig_u64 const t76 = t7[zig_as_u64(0)];
 t75 = t76;
 /* var:lowB */
 {
  while (zig_true) {
   {
    /* file:66:12 */
    zig_i32 const t77 = t16;
    zig_i32 const t78 = t21;
    zig_bool const t79 = t77 > t78;
    if (t79) {
     /* file:66:39 */
     /* file:67:9 */
     zig_u64 t80;
     zig_u64 const t81 = t65;
     zig_u64 const t82 = t69;
     zig_u64 const t83 = zig_subw_u64(t81, t82, zig_as_u8(64));
     zig_u64 * const t84 = (zig_u64 * )&t80;
     (*t84) = t83;
     /* var:high */
     /* file:68:9 */
     zig_u64 t85;
     zig_u64 const t86 = t73;
     zig_u64 const t87 = t75;
     zig_u64 const t88 = zig_subw_u64(t86, t87, zig_as_u8(64));
     zig_u64 * const t89 = (zig_u64 * )&t85;
     (*t89) = t88;
     /* var:low */
     /* file:69:13 */
     {
      zig_u64 const t90 = t73;
      zig_u64 const t91 = t75;
      zig_bool const t92 = t90 < t91;
      if (t92) {
       /* file:70:13 */
       zig_u64 const t93 = t80;
       zig_u64 const t94 = zig_subw_u64(t93, zig_as_u64(1), zig_as_u8(64));
       t80 = t94;
       goto zig_block_9;
      } else {
       goto zig_block_9;
      }
     }
     zig_block_9:;
     /* file:72:13 */
     {
      zig_u64 const t95 = t80;
      zig_u64 const t96 = zig_shr_u64(t95, zig_as_u8(63));
      zig_bool const t97 = t96 == zig_as_u64(0);
      if (t97) {
       /* file:73:17 */
       {
        zig_u64 const t98 = t80;
        zig_u64 const t99 = t85;
        zig_u64 const t100 = t98 | t99;
        zig_bool const t101 = t100 == zig_as_u64(0);
        if (t101) {
         /* file:74:17 */
         /* file:74:17 */
         return (zig_f128 )zig_suffix_f128(0x0.0p0);
        } else {
         goto zig_block_11;
        }
       }
       zig_block_11:;
       /* file:76:13 */
       zig_u64 const t102 = t80;
       zig_u64 const t103 = zig_mulw_u64(zig_as_u64(2), t102, zig_as_u8(64));
       zig_u64 const t104 = t85;
       zig_u64 const t105 = zig_shr_u64(t104, zig_as_u8(63));
       zig_u64 const t106 = t103 + t105;
       t65 = t106;
       /* file:77:13 */
       zig_u64 const t107 = t85;
       zig_u64 const t108 = zig_mulw_u64(zig_as_u64(2), t107, zig_as_u8(64));
       t73 = t108;
       goto zig_block_10;
      } else {
       /* file:79:13 */
       zig_u64 const t109 = t65;
       zig_u64 const t110 = zig_mulw_u64(zig_as_u64(2), t109, zig_as_u8(64));
       zig_u64 const t111 = t73;
       zig_u64 const t112 = zig_shr_u64(t111, zig_as_u8(63));
       zig_u64 const t113 = t110 + t112;
       t65 = t113;
       /* file:80:13 */
       zig_u64 const t114 = t73;
       zig_u64 const t115 = zig_mulw_u64(zig_as_u64(2), t114, zig_as_u8(64));
       t73 = t115;
       goto zig_block_10;
      }
     }
     zig_block_10:;
     /* file:66:28 */
     zig_i32 const t116 = t16;
     zig_i32 const t117 = t116 - zig_as_i32(1);
     t16 = t117;
     goto zig_block_8;
    } else {
     goto zig_block_7;
    }
   }
   zig_block_8:;
  }
 }
 zig_block_7:;
 /* file:84:5 */
 zig_u64 t118;
 zig_u64 const t119 = t65;
 zig_u64 const t120 = t69;
 zig_u64 const t121 = zig_subw_u64(t119, t120, zig_as_u8(64));
 zig_u64 * const t122 = (zig_u64 * )&t118;
 (*t122) = t121;
 /* var:high */
 /* file:85:5 */
 zig_u64 t123;
 zig_u64 const t124 = t73;
 zig_u64 const t125 = t75;
 zig_u64 const t126 = zig_subw_u64(t124, t125, zig_as_u8(64));
 zig_u64 * const t127 = (zig_u64 * )&t123;
 (*t127) = t126;
 /* var:low */
 /* file:86:9 */
 {
  zig_u64 const t128 = t73;
  zig_u64 const t129 = t75;
  zig_bool const t130 = t128 < t129;
  if (t130) {
   /* file:87:9 */
   zig_u64 const t131 = t118;
   zig_u64 const t132 = t131 - zig_as_u64(1);
   t118 = t132;
   goto zig_block_12;
  } else {
   goto zig_block_12;
  }
 }
 zig_block_12:;
 /* file:89:9 */
 {
  zig_u64 const t133 = t118;
  zig_u64 const t134 = zig_shr_u64(t133, zig_as_u8(63));
  zig_bool const t135 = t134 == zig_as_u64(0);
  if (t135) {
   /* file:90:13 */
   {
    zig_u64 const t136 = t118;
    zig_u64 const t137 = t123;
    zig_u64 const t138 = t136 | t137;
    zig_bool const t139 = t138 == zig_as_u64(0);
    if (t139) {
     /* file:91:13 */
     /* file:91:13 */
     return (zig_f128 )zig_suffix_f128(0x0.0p0);
    } else {
     goto zig_block_14;
    }
   }
   zig_block_14:;
   /* file:93:9 */
   zig_u64 const t140 = t118;
   t65 = t140;
   /* file:94:9 */
   zig_u64 const t141 = t123;
   t73 = t141;
   goto zig_block_13;
  } else {
   goto zig_block_13;
  }
 }
 zig_block_13:;
 {
  while (zig_true) {
   {
    /* file:97:12 */
    zig_u64 const t142 = t65;
    zig_u64 const t143 = zig_shr_u64(t142, zig_as_u8(48));
    zig_bool const t144 = t143 == zig_as_u64(0);
    if (t144) {
     /* file:97:30 */
     /* file:98:9 */
     zig_u64 const t145 = t65;
     zig_u64 const t146 = zig_mulw_u64(zig_as_u64(2), t145, zig_as_u8(64));
     zig_u64 const t147 = t73;
     zig_u64 const t148 = zig_shr_u64(t147, zig_as_u8(63));
     zig_u64 const t149 = t146 + t148;
     t65 = t149;
     /* file:99:9 */
     zig_u64 const t150 = t73;
     zig_u64 const t151 = zig_mulw_u64(zig_as_u64(2), t150, zig_as_u8(64));
     t73 = t151;
     /* file:100:9 */
     zig_i32 const t152 = t16;
     zig_i32 const t153 = t152 - zig_as_i32(1);
     t16 = t153;
     goto zig_block_16;
    } else {
     goto zig_block_15;
    }
   }
   zig_block_16:;
  }
 }
 zig_block_15:;
 /* file:104:5 */
 zig_u64 * const t154 = (*t6);
 zig_u64 * const t155 = &(t154)[zig_as_u64(1)];
 zig_u64 const t156 = t65;
 (*t155) = t156;
 /* file:105:5 */
 zig_u64 * const t157 = (*t6);
 zig_u64 * const t158 = &(t157)[zig_as_u64(0)];
 zig_u64 const t159 = t73;
 (*t158) = t159;
 /* file:108:9 */
 {
  zig_i32 const t160 = t16;
  zig_bool const t161 = t160 <= zig_as_i32(0);
  if (t161) {
   /* file:109:9 */
   zig_u16 * const t162 = (*t10);
   zig_u16 * const t163 = &(t162)[zig_as_u64(7)];
   zig_i32 const t164 = t16;
   zig_i32 const t165 = zig_addw_i32(t164, zig_as_i32(120), zig_as_u8(32));
   zig_u32 t166;
   memcpy(&t166, &t165, sizeof(zig_u32 ));
   zig_u16 const t167 = (zig_u16 )t166;
   zig_u16 const t168 = t167 | t15;
   (*t163) = t168;
   /* file:110:9 */
   zig_f128 const t169 = t0;
   zig_f128 const t170 = t169 * (zig_f128 )zig_suffix_f128(0x1p-120);
   t0 = t170;
   goto zig_block_17;
  } else {
   /* file:112:9 */
   zig_u16 * const t171 = (*t10);
   zig_u16 * const t172 = &(t171)[zig_as_u64(7)];
   zig_i32 const t173 = t16;
   zig_u32 t174;
   memcpy(&t174, &t173, sizeof(zig_u32 ));
   zig_u16 const t175 = (zig_u16 )t174;
   zig_u16 const t176 = t175 | t15;
   (*t172) = t176;
   goto zig_block_17;
  }
 }
 zig_block_17:;
 /* file:115:5 */
 zig_f128 const t177 = t0;
 /* file:115:5 */
 return t177;
}

zig_f128 floorq(zig_f128 const a0) {
 /* file:2:5 */
 /* file:2:43 */
 /* dbg func:floatEps */
 /* file:2:5 */
 zig_f128 t0;
 /* file:2:28 */
 /* dbg func:reconstructFloat */
 /* file:2:5 */
 /* file:3:5 */
 /* file:3:67 */
 /* var:biased_exponent */
 /* file:4:5 */
 /* file:4:61 */
 /* file:4:5 */
 /* dbg func:floatEps */
 t0 = (zig_f128 )zig_suffix_f128(0x1p-112);
 /* file:2:5 */
 zig_f128 const t1 = t0;
 /* dbg func:floorq */
 zig_f128 const t2 = (zig_f128 )zig_suffix_f128(0x1p0) / t1;
 /* var:f128_toint */
 /* file:4:5 */
 zig_u128 t3;
 memcpy(&t3, &a0, sizeof(zig_u128 ));
 /* var:u */
 /* file:5:5 */
 zig_u128 const t4 = zig_shr_u128(t3, zig_as_u8(112));
 zig_u128 const t5 = zig_and_u128(t4, zig_as_u128(zig_as_u64(0), zig_as_u64(32767)));
 /* var:e */
 /* file:6:5 */
 zig_f128 t6;
 /* var:y */
 /* file:8:9 */
 {
  zig_bool const t7 = zig_cmp_u128(t5, zig_as_u128(zig_as_u64(0), zig_as_u64(16495))) >= zig_as_i8(0);
  zig_bool t8;
  {
   if (t7) {
    t8 = zig_true;
    goto zig_block_1;
   } else {
    zig_bool const t9 = a0 == (zig_f128 )zig_suffix_f128(0x0.0p0);
    t8 = t9;
    goto zig_block_1;
   }
  }
  zig_block_1:;
  if (t8) {
   /* file:8:38 */
   /* file:8:38 */
   return a0;
  } else {
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:10:9 */
 {
  zig_u128 const t10 = zig_shr_u128(t3, zig_as_u8(127));
  zig_bool const t11 = t10 != zig_as_u128(zig_as_u64(0), zig_as_u64(0));
  if (t11) {
   /* file:11:9 */
   zig_f128 const t12 = a0 - t2;
   zig_f128 const t13 = t12 + t2;
   zig_f128 const t14 = t13 - a0;
   t6 = t14;
   goto zig_block_2;
  } else {
   /* file:13:9 */
   zig_f128 const t15 = a0 + t2;
   zig_f128 const t16 = t15 - t2;
   zig_f128 const t17 = t16 - a0;
   t6 = t17;
   goto zig_block_2;
  }
 }
 zig_block_2:;
 /* file:16:9 */
 zig_bool const t18 = zig_cmp_u128(t5, zig_as_u128(zig_as_u64(0), zig_as_u64(16382))) <= zig_as_i8(0);
 if (t18) {
  /* file:17:9 */
  /* file:17:31 */
  zig_f128 const t19 = t6;
  math_doNotOptimizeAway__anon_3615(t19);
  /* file:18:13 */
  zig_u128 const t20 = zig_shr_u128(t3, zig_as_u8(127));
  zig_bool const t21 = t20 != zig_as_u128(zig_as_u64(0), zig_as_u64(0));
  if (t21) {
   /* file:19:13 */
   /* file:19:13 */
   return (zig_f128 )-zig_suffix_f128(0x1p0);
  } else {
   /* file:21:13 */
   /* file:21:13 */
   return (zig_f128 )zig_suffix_f128(0x0.0p0);
  }
 } else {
  /* file:23:16 */
  zig_f128 const t22 = t6;
  zig_bool const t23 = t22 > (zig_f128 )zig_suffix_f128(0x0.0p0);
  if (t23) {
   /* file:24:9 */
   zig_f128 const t24 = t6;
   zig_f128 const t25 = a0 + t24;
   zig_f128 const t26 = t25 - (zig_f128 )zig_suffix_f128(0x1p0);
   /* file:24:9 */
   return t26;
  } else {
   /* file:26:9 */
   zig_f128 const t27 = t6;
   zig_f128 const t28 = a0 + t27;
   /* file:26:9 */
   return t28;
  }
 }
}

zig_f80 __fmax(zig_f80 const a0, zig_f80 const a1, zig_f80 const a2) {
 /* file:3:5 */
 /* file:3:32 */
 zig_f128 const t0 = a0;
 zig_f128 const t1 = a1;
 zig_f128 const t2 = a2;
 zig_f128 const t3 = fmaq(t0, t1, t2);
 zig_f80 const t4 = t3;
 /* file:3:5 */
 return t4;
}

zig_f80 __sqrtx(zig_f80 const a0) {
 /* file:3:5 */
 /* file:3:33 */
 zig_f128 const t0 = a0;
 zig_f128 const t1 = sqrtq(t0);
 zig_f80 const t2 = t1;
 /* file:3:5 */
 return t2;
}

zig_f80 __sinx(zig_f80 const a0) {
 /* file:3:5 */
 /* file:3:32 */
 zig_f128 const t0 = a0;
 zig_f128 const t1 = sinq(t0);
 zig_f80 const t2 = t1;
 /* file:3:5 */
 return t2;
}

zig_f80 __cosx(zig_f80 const a0) {
 /* file:3:5 */
 /* file:3:32 */
 zig_f128 const t0 = a0;
 zig_f128 const t1 = cosq(t0);
 zig_f80 const t2 = t1;
 /* file:3:5 */
 return t2;
}

zig_f80 __tanx(zig_f80 const a0) {
 /* file:3:5 */
 /* file:3:32 */
 zig_f128 const t0 = a0;
 zig_f128 const t1 = tanq(t0);
 zig_f80 const t2 = t1;
 /* file:3:5 */
 return t2;
}

zig_f16 __exph(zig_f16 const a0) {
 /* file:3:5 */
 /* file:3:32 */
 zig_f32 const t0 = a0;
 zig_f32 const t1 = expf(t0);
 zig_f16 const t2 = t1;
 /* file:3:5 */
 return t2;
}

zig_f16 __logh(zig_f16 const a0) {
 /* file:3:5 */
 /* file:3:32 */
 zig_f32 const t0 = a0;
 zig_f32 const t1 = logf(t0);
 zig_f16 const t2 = t1;
 /* file:3:5 */
 return t2;
}

zig_f16 __log10h(zig_f16 const a0) {
 /* file:3:5 */
 /* file:3:34 */
 zig_f32 const t0 = a0;
 zig_f32 const t1 = log10f(t0);
 zig_f16 const t2 = t1;
 /* file:3:5 */
 return t2;
}

zig_f16 __floorh(zig_f16 const a0) {
 /* file:2:5 */
 zig_u16 t0;
 zig_u16 t1;
 memcpy(&t1, &a0, sizeof(zig_u16 ));
 zig_u16 * const t2 = (zig_u16 * )&t0;
 (*t2) = t1;
 /* var:u */
 /* file:3:5 */
 zig_u16 const t3 = t0;
 zig_u16 const t4 = zig_shr_u16(t3, zig_as_u8(10));
 zig_u16 const t5 = t4 & zig_as_u16(31);
 zig_i16 const t6 = (zig_i16 )t5;
 zig_i16 const t7 = t6 - zig_as_i16(15);
 /* var:e */
 /* file:4:5 */
 zig_u16 t8;
 /* var:m */
 /* file:7:9 */
 {
  zig_bool const t9 = a0 == (zig_f16 )zig_suffix_f16(0x0.0p0);
  if (t9) {
   /* file:8:9 */
   /* file:8:9 */
   return a0;
  } else {
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:11:9 */
 {
  zig_bool const t10 = t7 >= zig_as_i16(10);
  if (t10) {
   /* file:12:9 */
   /* file:12:9 */
   return a0;
  } else {
   goto zig_block_1;
  }
 }
 zig_block_1:;
 /* file:15:9 */
 zig_bool const t11 = t7 >= zig_as_i16(0);
 if (t11) {
  /* file:16:9 */
  zig_u8 const t12 = (zig_u8 )t7;
  zig_u16 const t13 = zig_shr_u16(zig_as_u16(1023), t12);
  t8 = t13;
  /* file:17:13 */
  {
   zig_u16 const t14 = t0;
   zig_u16 const t15 = t8;
   zig_u16 const t16 = t14 & t15;
   zig_bool const t17 = t16 == zig_as_u16(0);
   if (t17) {
    /* file:18:13 */
    /* file:18:13 */
    return a0;
   } else {
    goto zig_block_2;
   }
  }
  zig_block_2:;
  /* file:20:9 */
  /* file:20:31 */
  zig_f16 const t18 = a0 + (zig_f16 )zig_builtin_constant_f16(inf)();
  math_doNotOptimizeAway__anon_3618(t18);
  /* file:21:13 */
  {
   zig_u16 const t19 = t0;
   zig_u16 const t20 = zig_shr_u16(t19, zig_as_u8(15));
   zig_bool const t21 = t20 != zig_as_u16(0);
   if (t21) {
    /* file:22:13 */
    zig_u16 const t22 = t0;
    zig_u16 const t23 = t8;
    zig_u16 const t24 = t22 + t23;
    t0 = t24;
    goto zig_block_3;
   } else {
    goto zig_block_3;
   }
  }
  zig_block_3:;
  /* file:24:9 */
  zig_u16 const t25 = t0;
  zig_u16 const t26 = t8;
  zig_u16 const t27 = ~t26;
  zig_u16 const t28 = t25 & t27;
  zig_f16 t29;
  memcpy(&t29, &t28, sizeof(zig_f16 ));
  /* file:24:9 */
  return t29;
 } else {
  /* file:26:9 */
  /* file:26:31 */
  zig_f16 const t30 = a0 + (zig_f16 )zig_builtin_constant_f16(inf)();
  math_doNotOptimizeAway__anon_3618(t30);
  /* file:27:13 */
  zig_u16 const t31 = t0;
  zig_u16 const t32 = zig_shr_u16(t31, zig_as_u8(15));
  zig_bool const t33 = t32 == zig_as_u16(0);
  if (t33) {
   /* file:28:13 */
   /* file:28:13 */
   return (zig_f16 )zig_suffix_f16(0x0.0p0);
  } else {
   /* file:30:13 */
   /* file:30:13 */
   return (zig_f16 )-zig_suffix_f16(0x1p0);
  }
 }
}

zig_f16 __truncxfhf2(zig_f80 const a0) {
 /* file:2:5 */
 zig_f16 t0;
 /* file:2:43 */
 /* dbg func:trunc_f80 */
 /* var:a */
 /* file:2:5 */
 /* file:2:35 */
 /* file:3:5 */
 /* file:3:52 */
 /* file:4:5 */
 /* file:4:52 */
 /* file:6:5 */
 /* file:8:5 */
 /* file:9:5 */
 /* file:11:5 */
 /* file:12:5 */
 /* file:13:5 */
 /* file:14:5 */
 /* file:16:5 */
 /* file:17:5 */
 /* file:19:5 */
 /* file:20:5 */
 /* file:23:5 */
 zig_S_math_F80__3431 t1;
 /* file:23:35 */
 zig_S_math_F80__3431 const t2 = math_break_f80(a0);
 zig_S_math_F80__3431 * const t3 = (zig_S_math_F80__3431 * )&t1;
 (*t3) = t2;
 /* var:a_rep */
 /* file:24:5 */
 zig_S_math_F80__3431 const t4 = t1;
 zig_u16 const t5 = t4.exp;
 zig_u16 const t6 = t5 & zig_as_u16(32768);
 /* var:sign */
 /* file:25:5 */
 zig_u16 * const t7 = (zig_u16 * )&t1.exp;
 zig_u16 const t8 = (*t7);
 zig_u16 const t9 = t8 & zig_as_u16(32767);
 (*t7) = t9;
 /* file:26:5 */
 zig_u64 * const t10 = (zig_u64 * )&t1.fraction;
 zig_u64 const t11 = (*t10);
 zig_u64 const t12 = t11 & zig_as_u64(9223372036854775807);
 (*t10) = t12;
 /* file:27:5 */
 zig_u16 t13;
 /* var:abs_result */
 /* file:29:9 */
 {
  zig_S_math_F80__3431 const t14 = t1;
  zig_u16 const t15 = t14.exp;
  zig_u16 const t16 = zig_subw_u16(t15, zig_as_u16(16369), zig_as_u8(16));
  zig_S_math_F80__3431 const t17 = t1;
  zig_u16 const t18 = t17.exp;
  zig_u16 const t19 = zig_subw_u16(t18, zig_as_u16(16399), zig_as_u8(16));
  zig_bool const t20 = t16 < t19;
  if (t20) {
   /* file:33:9 */
   zig_S_math_F80__3431 const t21 = t1;
   zig_u16 const t22 = t21.exp;
   zig_u16 const t23 = zig_shl_u16(t22, zig_as_u8(10));
   t13 = t23;
   /* file:34:9 */
   zig_u16 const t24 = t13;
   zig_S_math_F80__3431 const t25 = t1;
   zig_u64 const t26 = t25.fraction;
   zig_u64 const t27 = zig_shr_u64(t26, zig_as_u8(53));
   zig_u16 const t28 = (zig_u16 )t27;
   zig_u16 const t29 = t24 | t28;
   t13 = t29;
   /* file:35:9 */
   zig_u16 const t30 = t13;
   zig_u16 const t31 = zig_subw_u16(t30, zig_as_u16(49152), zig_as_u8(16));
   t13 = t31;
   /* file:37:9 */
   zig_S_math_F80__3431 const t32 = t1;
   zig_u64 const t33 = t32.fraction;
   zig_u64 const t34 = t33 & zig_as_u64(9007199254740991);
   /* var:round_bits */
   /* file:38:13 */
   {
    zig_bool const t35 = t34 > zig_as_u64(4503599627370496);
    if (t35) {
     /* file:40:13 */
     zig_u16 const t36 = t13;
     zig_u16 const t37 = t36 + zig_as_u16(1);
     t13 = t37;
     goto zig_block_1;
    } else {
     {
      /* file:41:20 */
      zig_bool const t38 = t34 == zig_as_u64(4503599627370496);
      if (t38) {
       /* file:43:13 */
       zig_u16 const t39 = t13;
       zig_u16 const t40 = t13;
       zig_u16 const t41 = t40 & zig_as_u16(1);
       zig_u16 const t42 = t39 + t41;
       t13 = t42;
       goto zig_block_2;
      } else {
       goto zig_block_2;
      }
     }
     zig_block_2:;
     goto zig_block_1;
    }
   }
   zig_block_1:;
   goto zig_block_0;
  } else {
   {
    /* file:45:16 */
    zig_S_math_F80__3431 const t43 = t1;
    zig_u16 const t44 = t43.exp;
    zig_bool const t45 = t44 == zig_as_u16(32767);
    zig_bool t46;
    {
     if (t45) {
      zig_S_math_F80__3431 const t47 = t1;
      zig_u64 const t48 = t47.fraction;
      zig_bool const t49 = t48 != zig_as_u64(0);
      t46 = t49;
      goto zig_block_4;
     } else {
      t46 = zig_false;
      goto zig_block_4;
     }
    }
    zig_block_4:;
    if (t46) {
     /* file:49:9 */
     t13 = zig_as_u16(31744);
     /* file:50:9 */
     zig_u16 const t50 = t13;
     zig_u16 const t51 = t50 | zig_as_u16(512);
     t13 = t51;
     /* file:51:9 */
     zig_u16 const t52 = t13;
     zig_S_math_F80__3431 const t53 = t1;
     zig_u64 const t54 = t53.fraction;
     zig_u64 const t55 = zig_shr_u64(t54, zig_as_u8(53));
     zig_u64 const t56 = t55 & zig_as_u64(511);
     zig_u16 const t57 = (zig_u16 )t56;
     zig_u16 const t58 = t52 | t57;
     t13 = t58;
     goto zig_block_3;
    } else {
     {
      /* file:52:16 */
      zig_S_math_F80__3431 const t59 = t1;
      zig_u16 const t60 = t59.exp;
      zig_bool const t61 = t60 >= zig_as_u16(16399);
      if (t61) {
       /* file:54:9 */
       t13 = zig_as_u16(31744);
       goto zig_block_5;
      } else {
       /* file:59:9 */
       zig_S_math_F80__3431 const t62 = t1;
       zig_u16 const t63 = t62.exp;
       zig_u16 const t64 = zig_as_u16(16368) - t63;
       /* var:shift */
       /* file:62:13 */
       {
        zig_bool const t65 = t64 > zig_as_u16(63);
        if (t65) {
         /* file:63:13 */
         t13 = zig_as_u16(0);
         goto zig_block_6;
        } else {
         /* file:65:13 */
         zig_S_math_F80__3431 const t66 = t1;
         zig_u64 const t67 = t66.fraction;
         zig_u8 const t68 = (zig_u8 )t64;
         zig_u64 const t69 = zig_shl_u64(t67, t68);
         zig_bool const t70 = t69 != zig_as_u64(0);
         zig_u8 const t71 = t70;
         /* var:sticky */
         /* file:66:13 */
         zig_S_math_F80__3431 const t72 = t1;
         zig_u64 const t73 = t72.fraction;
         zig_u8 const t74 = (zig_u8 )t64;
         zig_u64 const t75 = zig_shr_u64(t73, t74);
         zig_u64 const t76 = (zig_u64 )t71;
         zig_u64 const t77 = t75 | t76;
         /* var:denormalized_significand */
         /* file:67:13 */
         zig_u64 const t78 = zig_shr_u64(t77, zig_as_u8(53));
         zig_u16 const t79 = (zig_u16 )t78;
         t13 = t79;
         /* file:68:13 */
         zig_u64 const t80 = t77 & zig_as_u64(9007199254740991);
         /* var:round_bits */
         /* file:69:17 */
         {
          zig_bool const t81 = t80 > zig_as_u64(4503599627370496);
          if (t81) {
           /* file:71:17 */
           zig_u16 const t82 = t13;
           zig_u16 const t83 = t82 + zig_as_u16(1);
           t13 = t83;
           goto zig_block_7;
          } else {
           {
            /* file:72:24 */
            zig_bool const t84 = t80 == zig_as_u64(4503599627370496);
            if (t84) {
             /* file:74:17 */
             zig_u16 const t85 = t13;
             zig_u16 const t86 = t13;
             zig_u16 const t87 = t86 & zig_as_u16(1);
             zig_u16 const t88 = t85 + t87;
             t13 = t88;
             goto zig_block_8;
            } else {
             goto zig_block_8;
            }
           }
           zig_block_8:;
           goto zig_block_7;
          }
         }
         zig_block_7:;
         goto zig_block_6;
        }
       }
       zig_block_6:;
       goto zig_block_5;
      }
     }
     zig_block_5:;
     goto zig_block_3;
    }
   }
   zig_block_3:;
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:79:5 */
 zig_u16 const t89;
 zig_u16 const t90 = t13;
 zig_u16 const t91 = t90 | t6;
 zig_u16 * const t92 = (zig_u16 * )&t89;
 (*t92) = t91;
 zig_u16 const * const t93 = (zig_u16 const * )&t89;
 /* var:result */
 /* file:80:5 */
 zig_u16 const t94 = (*t93);
 zig_f16 t95;
 memcpy(&t95, &t94, sizeof(zig_f16 ));
 /* file:80:5 */
 /* dbg func:__truncxfhf2 */
 zig_f16 t96;
 memcpy(&t96, &t95, sizeof(zig_f16 ));
 t0 = t96;
 /* file:2:5 */
 return t0;
}

zig_f80 __extendhfxf2(zig_f16 const a0) {
 /* file:2:5 */
 zig_f80 t0;
 /* file:2:22 */
 zig_u16 t1;
 memcpy(&t1, &a0, sizeof(zig_u16 ));
 /* dbg func:extend_f80 */
 /* file:1:63 */
 /* var:a */
 /* file:2:5 */
 /* file:2:35 */
 /* file:3:5 */
 /* file:3:52 */
 /* file:4:5 */
 /* file:5:5 */
 /* file:5:52 */
 /* file:7:5 */
 /* file:9:5 */
 /* file:10:5 */
 /* file:11:5 */
 /* file:12:5 */
 /* file:14:5 */
 /* file:15:5 */
 /* file:16:5 */
 /* file:17:5 */
 /* file:18:5 */
 /* file:19:5 */
 /* file:21:5 */
 /* file:21:38 */
 /* file:23:5 */
 zig_S_math_F80__3431 t2;
 /* var:dst */
 /* file:26:5 */
 zig_u16 const t3 = t1 & zig_as_u16(32767);
 /* var:a_abs */
 /* file:27:5 */
 zig_u16 t4;
 {
  /* file:27:27 */
  zig_u16 const t5 = t1 & zig_as_u16(32768);
  zig_bool const t6 = t5 != zig_as_u16(0);
  if (t6) {
   t4 = zig_as_u16(32768);
   goto zig_block_0;
  } else {
   t4 = zig_as_u16(0);
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* var:sign */
 /* file:29:9 */
 {
  zig_u16 const t7 = zig_subw_u16(t3, zig_as_u16(1024), zig_as_u8(16));
  zig_bool const t8 = t7 < zig_as_u16(30720);
  if (t8) {
   /* file:33:9 */
   zig_u16 * const t9 = (zig_u16 * )&t2.exp;
   zig_u16 const t10 = zig_shr_u16(t3, zig_as_u8(10));
   zig_u16 const t11 = (zig_u16 )t10;
   (*t9) = t11;
   /* file:34:9 */
   zig_u16 * const t12 = (zig_u16 * )&t2.exp;
   zig_u16 const t13 = (*t12);
   zig_u16 const t14 = t13 + zig_as_u16(16368);
   (*t12) = t14;
   /* file:35:9 */
   zig_u64 * const t15 = (zig_u64 * )&t2.fraction;
   zig_u64 const t16 = (zig_u64 )t3;
   zig_u64 const t17 = zig_shl_u64(t16, zig_as_u8(53));
   (*t15) = t17;
   /* file:36:9 */
   zig_u64 * const t18 = (zig_u64 * )&t2.fraction;
   zig_u64 const t19 = (*t18);
   zig_u64 const t20 = t19 | zig_as_u64(9223372036854775808);
   (*t18) = t20;
   goto zig_block_1;
  } else {
   {
    /* file:37:16 */
    zig_bool const t21 = t3 >= zig_as_u16(31744);
    if (t21) {
     /* file:42:9 */
     zig_u16 * const t22 = (zig_u16 * )&t2.exp;
     (*t22) = zig_as_u16(32767);
     /* file:43:9 */
     zig_u64 * const t23 = (zig_u64 * )&t2.fraction;
     (*t23) = zig_as_u64(9223372036854775808);
     /* file:44:9 */
     zig_u64 * const t24 = (zig_u64 * )&t2.fraction;
     zig_u64 const t25 = (*t24);
     zig_u16 const t26 = t3 & zig_as_u16(512);
     zig_u64 const t27 = (zig_u64 )t26;
     zig_u64 const t28 = zig_shl_u64(t27, zig_as_u8(53));
     zig_u64 const t29 = t25 | t28;
     (*t24) = t29;
     /* file:45:9 */
     zig_u64 * const t30 = (zig_u64 * )&t2.fraction;
     zig_u64 const t31 = (*t30);
     zig_u16 const t32 = t3 & zig_as_u16(511);
     zig_u64 const t33 = (zig_u64 )t32;
     zig_u64 const t34 = zig_shl_u64(t33, zig_as_u8(53));
     zig_u64 const t35 = t31 | t34;
     (*t30) = t35;
     goto zig_block_2;
    } else {
     {
      /* file:46:16 */
      zig_bool const t36 = t3 != zig_as_u16(0);
      if (t36) {
       /* file:50:9 */
       zig_u8 const t37 = zig_clz_u16(t3, zig_as_u8(16));
       zig_u8 const t38 = t37 - zig_as_u8(5);
       zig_u16 const t39 = (zig_u16 )t38;
       /* var:scale */
       /* file:53:9 */
       zig_u64 * const t40 = (zig_u64 * )&t2.fraction;
       zig_u64 const t41 = (zig_u64 )t3;
       zig_u16 const t42 = zig_as_u16(53) + t39;
       zig_u8 const t43 = (zig_u8 )t42;
       zig_u64 const t44 = zig_shl_u64(t41, t43);
       (*t40) = t44;
       /* file:54:9 */
       zig_u64 * const t45 = (zig_u64 * )&t2.fraction;
       zig_u64 const t46 = (*t45);
       zig_u64 const t47 = t46 | zig_as_u64(9223372036854775808);
       (*t45) = t47;
       /* file:55:9 */
       zig_u16 * const t48 = (zig_u16 * )&t2.exp;
       zig_u16 const t49 = zig_as_u16(10) - t39;
       zig_u8 const t50 = (zig_u8 )t49;
       zig_u16 const t51 = zig_shr_u16(t3, t50);
       zig_u16 const t52 = (zig_u16 )t51;
       (*t48) = t52;
       /* file:56:9 */
       zig_u16 * const t53 = (zig_u16 * )&t2.exp;
       zig_u16 const t54 = (*t53);
       zig_u16 const t55 = t54 ^ zig_as_u16(1);
       (*t53) = t55;
       /* file:57:9 */
       zig_u16 * const t56 = (zig_u16 * )&t2.exp;
       zig_u16 const t57 = (*t56);
       zig_u16 const t58 = zig_as_u16(16368) - t39;
       zig_u16 const t59 = t58 + zig_as_u16(1);
       zig_u16 const t60 = t57 | t59;
       (*t56) = t60;
       goto zig_block_3;
      } else {
       /* file:60:9 */
       zig_u16 * const t61 = (zig_u16 * )&t2.exp;
       (*t61) = zig_as_u16(0);
       /* file:61:9 */
       zig_u64 * const t62 = (zig_u64 * )&t2.fraction;
       (*t62) = zig_as_u64(0);
       goto zig_block_3;
      }
     }
     zig_block_3:;
     goto zig_block_2;
    }
   }
   zig_block_2:;
   goto zig_block_1;
  }
 }
 zig_block_1:;
 /* file:64:5 */
 zig_u16 * const t63 = (zig_u16 * )&t2.exp;
 zig_u16 const t64 = (*t63);
 zig_u16 const t65 = t64 | t4;
 (*t63) = t65;
 /* file:65:5 */
 zig_f80 t66;
 /* file:65:29 */
 zig_S_math_F80__3431 const t67 = t2;
 zig_f80 const t68 = math_make_f80(t67);
 t66 = t68;
 /* file:65:5 */
 zig_f80 const t69 = t66;
 /* dbg func:__extendhfxf2 */
 t0 = t69;
 /* file:2:5 */
 return t0;
}

zig_f128 __extendhftf2(zig_f16 const a0) {
 /* file:2:5 */
 zig_f128 t0;
 /* file:2:19 */
 zig_u16 t1;
 memcpy(&t1, &a0, sizeof(zig_u16 ));
 /* dbg func:extendf */
 /* file:4:20 */
 /* var:a */
 /* file:6:5 */
 /* file:6:35 */
 /* file:7:5 */
 /* file:7:35 */
 /* file:8:5 */
 /* file:8:50 */
 /* file:9:5 */
 /* file:9:50 */
 /* file:10:5 */
 /* file:10:38 */
 /* file:14:5 */
 /* file:15:5 */
 /* file:16:5 */
 /* file:17:5 */
 /* file:19:5 */
 /* file:20:5 */
 /* file:21:5 */
 /* file:22:5 */
 /* file:23:5 */
 /* file:24:5 */
 /* file:26:5 */
 /* file:27:5 */
 /* file:28:5 */
 /* file:29:5 */
 /* file:31:5 */
 /* var:dstMinNormal */
 /* file:34:5 */
 zig_u16 t2;
 memcpy(&t2, &t1, sizeof(zig_u16 ));
 /* var:aRep */
 /* file:35:5 */
 zig_u16 const t3 = t2 & zig_as_u16(32767);
 /* var:aAbs */
 /* file:36:5 */
 zig_u16 const t4 = t2 & zig_as_u16(32768);
 /* var:sign */
 /* file:37:5 */
 zig_u128 t5;
 /* var:absResult */
 /* file:39:9 */
 {
  zig_u16 const t6 = zig_subw_u16(t3, zig_as_u16(1024), zig_as_u8(16));
  zig_bool const t7 = t6 < zig_as_u16(30720);
  if (t7) {
   /* file:43:9 */
   zig_u128 const t8 = (zig_u128 )t3;
   zig_u128 const t9 = zig_shl_u128(t8, zig_as_u8(102));
   t5 = t9;
   /* file:44:9 */
   zig_u128 const t10 = t5;
   zig_u128 const t11 = zig_add_u128(t10, zig_as_u128(zig_as_u64(4607182418800017408), zig_as_u64(0)));
   t5 = t11;
   goto zig_block_0;
  } else {
   {
    /* file:45:16 */
    zig_bool const t12 = t3 >= zig_as_u16(31744);
    if (t12) {
     /* file:50:9 */
     t5 = zig_as_u128(zig_as_u64(9223090561878065152), zig_as_u64(0));
     /* file:51:9 */
     zig_u128 const t13 = t5;
     zig_u16 const t14 = t3 & zig_as_u16(512);
     zig_u128 const t15 = (zig_u128 )t14;
     zig_u128 const t16 = zig_shl_u128(t15, zig_as_u8(102));
     zig_u128 const t17 = zig_or_u128(t13, t16);
     t5 = t17;
     /* file:52:9 */
     zig_u128 const t18 = t5;
     zig_u16 const t19 = t3 & zig_as_u16(511);
     zig_u128 const t20 = (zig_u128 )t19;
     zig_u128 const t21 = zig_shl_u128(t20, zig_as_u8(102));
     zig_u128 const t22 = zig_or_u128(t18, t21);
     t5 = t22;
     goto zig_block_1;
    } else {
     {
      /* file:53:16 */
      zig_bool const t23 = t3 != zig_as_u16(0);
      if (t23) {
       /* file:57:9 */
       zig_u8 const t24 = zig_clz_u16(t3, zig_as_u8(16));
       zig_u8 const t25 = t24 - zig_as_u8(5);
       zig_u32 const t26 = (zig_u32 )t25;
       /* var:scale */
       /* file:59:9 */
       zig_u128 const t27 = (zig_u128 )t3;
       zig_u32 const t28 = zig_as_u32(102) + t26;
       zig_u8 const t29 = (zig_u8 )t28;
       zig_u128 const t30 = zig_shl_u128(t27, t29);
       t5 = t30;
       /* file:60:9 */
       zig_u128 const t31 = t5;
       zig_u128 const t32 = zig_xor_u128(t31, zig_as_u128(zig_as_u64(281474976710656), zig_as_u64(0)));
       t5 = t32;
       /* file:61:9 */
       zig_u32 const t33 = zig_as_u32(16368) - t26;
       zig_u32 const t34 = t33 + zig_as_u32(1);
       /* var:resultExponent */
       /* file:62:9 */
       zig_u128 const t35 = t5;
       zig_u128 const t36 = (zig_u128 )t34;
       zig_u128 const t37 = zig_shl_u128(t36, zig_as_u8(112));
       zig_u128 const t38 = zig_or_u128(t35, t37);
       t5 = t38;
       goto zig_block_2;
      } else {
       /* file:65:9 */
       t5 = zig_as_u128(zig_as_u64(0), zig_as_u64(0));
       goto zig_block_2;
      }
     }
     zig_block_2:;
     goto zig_block_1;
    }
   }
   zig_block_1:;
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:69:5 */
 zig_u128 t39;
 zig_u128 const t40 = t5;
 zig_u128 const t41 = (zig_u128 )t4;
 zig_u128 const t42 = zig_shl_u128(t41, zig_as_u8(112));
 zig_u128 const t43 = zig_or_u128(t40, t42);
 t39 = t43;
 zig_u128 const * const t44 = (zig_u128 const * )&t39;
 /* var:result */
 /* file:70:5 */
 zig_u128 const t45 = (*t44);
 zig_f128 t46;
 memcpy(&t46, &t45, sizeof(zig_f128 ));
 /* file:70:5 */
 /* dbg func:__extendhftf2 */
 t0 = t46;
 /* file:2:5 */
 return t0;
}

zig_f16 __trunctfhf2(zig_f128 const a0) {
 /* file:2:5 */
 zig_f16 t0;
 /* file:2:40 */
 /* dbg func:truncf */
 /* var:a */
 /* file:2:5 */
 /* file:2:35 */
 /* file:3:5 */
 /* file:3:35 */
 /* file:4:5 */
 /* file:4:50 */
 /* file:5:5 */
 /* file:5:50 */
 /* file:6:5 */
 /* file:6:38 */
 /* file:10:5 */
 /* file:11:5 */
 /* file:12:5 */
 /* file:13:5 */
 /* file:15:5 */
 /* file:16:5 */
 /* file:17:5 */
 /* file:18:5 */
 /* file:19:5 */
 /* file:20:5 */
 /* file:21:5 */
 /* file:22:5 */
 /* file:23:5 */
 /* file:25:5 */
 /* file:26:5 */
 /* file:27:5 */
 /* file:28:5 */
 /* file:30:5 */
 /* file:31:5 */
 /* file:32:5 */
 /* file:33:5 */
 /* file:35:5 */
 /* file:36:5 */
 /* file:39:5 */
 zig_u128 t1;
 memcpy(&t1, &a0, sizeof(zig_u128 ));
 /* var:aRep */
 /* file:40:5 */
 zig_u128 const t2 = zig_and_u128(t1, zig_as_u128(zig_as_u64(9223372036854775807), zig_maxInt_u64));
 /* var:aAbs */
 /* file:41:5 */
 zig_u128 const t3 = zig_and_u128(t1, zig_as_u128(zig_as_u64(9223372036854775808), zig_as_u64(0)));
 /* var:sign */
 /* file:42:5 */
 zig_u16 t4;
 /* var:absResult */
 /* file:44:9 */
 {
  zig_u128 const t5 = zig_subw_u128(t2, zig_as_u128(zig_as_u64(4607463893776728064), zig_as_u64(0)), zig_as_u8(128));
  zig_u128 const t6 = zig_subw_u128(t2, zig_as_u128(zig_as_u64(4615908143078047744), zig_as_u64(0)), zig_as_u8(128));
  zig_bool const t7 = zig_cmp_u128(t5, t6) < zig_as_i8(0);
  if (t7) {
   /* file:48:9 */
   zig_u128 const t8 = zig_shr_u128(t2, zig_as_u8(102));
   zig_u16 const t9 = (zig_u16 )t8;
   t4 = t9;
   /* file:49:9 */
   zig_u16 const t10 = t4;
   zig_u16 const t11 = zig_subw_u16(t10, zig_as_u16(49152), zig_as_u8(16));
   t4 = t11;
   /* file:51:9 */
   zig_u128 const t12 = zig_and_u128(t2, zig_as_u128(zig_as_u64(274877906943), zig_maxInt_u64));
   /* var:roundBits */
   /* file:52:13 */
   {
    zig_bool const t13 = zig_cmp_u128(t12, zig_as_u128(zig_as_u64(137438953472), zig_as_u64(0))) > zig_as_i8(0);
    if (t13) {
     /* file:54:13 */
     zig_u16 const t14 = t4;
     zig_u16 const t15 = t14 + zig_as_u16(1);
     t4 = t15;
     goto zig_block_1;
    } else {
     {
      /* file:55:20 */
      zig_bool const t16 = t12 == zig_as_u128(zig_as_u64(137438953472), zig_as_u64(0));
      if (t16) {
       /* file:57:13 */
       zig_u16 const t17 = t4;
       zig_u16 const t18 = t4;
       zig_u16 const t19 = t18 & zig_as_u16(1);
       zig_u16 const t20 = t17 + t19;
       t4 = t20;
       goto zig_block_2;
      } else {
       goto zig_block_2;
      }
     }
     zig_block_2:;
     goto zig_block_1;
    }
   }
   zig_block_1:;
   goto zig_block_0;
  } else {
   {
    /* file:59:16 */
    zig_bool const t21 = zig_cmp_u128(t2, zig_as_u128(zig_as_u64(9223090561878065152), zig_as_u64(0))) > zig_as_i8(0);
    if (t21) {
     /* file:63:9 */
     t4 = zig_as_u16(31744);
     /* file:64:9 */
     zig_u16 const t22 = t4;
     zig_u16 const t23 = t22 | zig_as_u16(512);
     t4 = t23;
     /* file:65:9 */
     zig_u16 const t24 = t4;
     zig_u128 const t25 = zig_and_u128(t2, zig_as_u128(zig_as_u64(140737488355327), zig_maxInt_u64));
     zig_u128 const t26 = zig_shr_u128(t25, zig_as_u8(102));
     zig_u128 const t27 = zig_and_u128(t26, zig_as_u128(zig_as_u64(0), zig_as_u64(511)));
     zig_u16 const t28 = (zig_u16 )t27;
     zig_u16 const t29 = t24 | t28;
     t4 = t29;
     goto zig_block_3;
    } else {
     {
      /* file:66:16 */
      zig_bool const t30 = zig_cmp_u128(t2, zig_as_u128(zig_as_u64(4615908143078047744), zig_as_u64(0))) >= zig_as_i8(0);
      if (t30) {
       /* file:68:9 */
       t4 = zig_as_u16(31744);
       goto zig_block_4;
      } else {
       /* file:73:9 */
       zig_u128 const t31 = zig_shr_u128(t2, zig_as_u8(112));
       zig_u32 const t32 = (zig_u32 )t31;
       /* var:aExp */
       /* file:74:9 */
       zig_u32 const t33 = zig_as_u32(16368) - t32;
       zig_u32 const t34 = t33 + zig_as_u32(1);
       zig_u32 const t35 = (zig_u32 )t34;
       /* var:shift */
       /* file:76:9 */
       zig_u128 const t36 = zig_and_u128(t1, zig_as_u128(zig_as_u64(281474976710655), zig_maxInt_u64));
       zig_u128 const t37 = zig_or_u128(t36, zig_as_u128(zig_as_u64(281474976710656), zig_as_u64(0)));
       /* var:significand */
       /* file:79:13 */
       {
        zig_bool const t38 = t35 > zig_as_u32(112);
        if (t38) {
         /* file:80:13 */
         t4 = zig_as_u16(0);
         goto zig_block_5;
        } else {
         /* file:82:13 */
         zig_u32 const t39 = zig_as_u32(128) - t35;
         zig_u8 const t40 = (zig_u8 )t39;
         zig_u128 const t41 = zig_shl_u128(t37, t40);
         zig_bool const t42 = t41 != zig_as_u128(zig_as_u64(0), zig_as_u64(0));
         zig_u8 const t43 = t42;
         zig_u128 const t44 = (zig_u128 )t43;
         /* var:sticky */
         /* file:83:13 */
         zig_u8 const t45 = (zig_u8 )t35;
         zig_u128 const t46 = zig_shr_u128(t37, t45);
         zig_u128 const t47 = zig_or_u128(t46, t44);
         /* var:denormalizedSignificand */
         /* file:84:13 */
         zig_u128 const t48 = zig_shr_u128(t47, zig_as_u8(102));
         zig_u16 const t49 = (zig_u16 )t48;
         t4 = t49;
         /* file:85:13 */
         zig_u128 const t50 = zig_and_u128(t47, zig_as_u128(zig_as_u64(274877906943), zig_maxInt_u64));
         /* var:roundBits */
         /* file:86:17 */
         {
          zig_bool const t51 = zig_cmp_u128(t50, zig_as_u128(zig_as_u64(137438953472), zig_as_u64(0))) > zig_as_i8(0);
          if (t51) {
           /* file:88:17 */
           zig_u16 const t52 = t4;
           zig_u16 const t53 = t52 + zig_as_u16(1);
           t4 = t53;
           goto zig_block_6;
          } else {
           {
            /* file:89:24 */
            zig_bool const t54 = t50 == zig_as_u128(zig_as_u64(137438953472), zig_as_u64(0));
            if (t54) {
             /* file:91:17 */
             zig_u16 const t55 = t4;
             zig_u16 const t56 = t4;
             zig_u16 const t57 = t56 & zig_as_u16(1);
             zig_u16 const t58 = t55 + t57;
             t4 = t58;
             goto zig_block_7;
            } else {
             goto zig_block_7;
            }
           }
           zig_block_7:;
           goto zig_block_6;
          }
         }
         zig_block_6:;
         goto zig_block_5;
        }
       }
       zig_block_5:;
       goto zig_block_4;
      }
     }
     zig_block_4:;
     goto zig_block_3;
    }
   }
   zig_block_3:;
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:96:5 */
 zig_u16 t59;
 zig_u16 const t60 = t4;
 zig_u128 const t61 = zig_shr_u128(t3, zig_as_u8(112));
 zig_u16 const t62 = (zig_u16 )t61;
 zig_u16 const t63 = t60 | t62;
 t59 = t63;
 zig_u16 const * const t64 = (zig_u16 const * )&t59;
 /* var:result */
 /* file:98:5 */
 zig_u16 const t65 = (*t64);
 zig_f16 t66;
 memcpy(&t66, &t65, sizeof(zig_f16 ));
 /* file:98:5 */
 /* dbg func:__trunctfhf2 */
 zig_f16 t67;
 memcpy(&t67, &t66, sizeof(zig_f16 ));
 t0 = t67;
 /* file:2:5 */
 return t0;
}

zig_f128 sqrtq(zig_f128 const a0) {
 /* file:3:5 */
 zig_f128 t0;
 /* file:3:16 */
 zig_f64 const t1 = a0;
 zig_f64 const t2 = sqrt(t1);
 zig_f128 const t3 = t2;
 t0 = t3;
 /* file:3:5 */
 return t0;
}

zig_f128 sinq(zig_f128 const a0) {
 /* file:3:5 */
 zig_f128 t0;
 /* file:3:15 */
 zig_f64 const t1 = a0;
 zig_f64 const t2 = sin(t1);
 zig_f128 const t3 = t2;
 t0 = t3;
 /* file:3:5 */
 return t0;
}


zig_f128 cosq(zig_f128 const a0) {
 /* file:3:5 */
 zig_f128 t0;
 /* file:3:15 */
 zig_f64 const t1 = a0;
 zig_f64 const t2 = cos(t1);
 zig_f128 const t3 = t2;
 t0 = t3;
 /* file:3:5 */
 return t0;
}

zig_f128 tanq(zig_f128 const a0) {
 /* file:3:5 */
 zig_f128 t0;
 /* file:3:15 */
 zig_f64 const t1 = a0;
 zig_f64 const t2 = tan(t1);
 zig_f128 const t3 = t2;
 t0 = t3;
 /* file:3:5 */
 return t0;
}

zig_f80 __expx(zig_f80 const a0) {
 /* file:3:5 */
 /* file:3:32 */
 zig_f128 const t0 = a0;
 zig_f128 const t1 = expq(t0);
 zig_f80 const t2 = t1;
 /* file:3:5 */
 return t2;
}

zig_f16 __exp2h(zig_f16 const a0) {
 /* file:3:5 */
 /* file:3:33 */
 zig_f32 const t0 = a0;
 zig_f32 const t1 = exp2f(t0);
 zig_f16 const t2 = t1;
 /* file:3:5 */
 return t2;
}

zig_f80 __logx(zig_f80 const a0) {
 /* file:3:5 */
 /* file:3:32 */
 zig_f128 const t0 = a0;
 zig_f128 const t1 = logq(t0);
 zig_f80 const t2 = t1;
 /* file:3:5 */
 return t2;
}

zig_f16 __log2h(zig_f16 const a0) {
 /* file:3:5 */
 /* file:3:33 */
 zig_f32 const t0 = a0;
 zig_f32 const t1 = log2f(t0);
 zig_f16 const t2 = t1;
 /* file:3:5 */
 return t2;
}

zig_f80 __log10x(zig_f80 const a0) {
 /* file:3:5 */
 /* file:3:34 */
 zig_f128 const t0 = a0;
 zig_f128 const t1 = log10q(t0);
 zig_f80 const t2 = t1;
 /* file:3:5 */
 return t2;
}

zig_f80 __floorx(zig_f80 const a0) {
 /* file:3:5 */
 /* file:3:34 */
 zig_f128 const t0 = a0;
 zig_f128 const t1 = floorq(t0);
 zig_f80 const t2 = t1;
 /* file:3:5 */
 return t2;
}

zig_f16 __ceilh(zig_f16 const a0) {
 /* file:3:5 */
 /* file:3:33 */
 zig_f32 const t0 = a0;
 zig_f32 const t1 = ceilf(t0);
 zig_f16 const t2 = t1;
 /* file:3:5 */
 return t2;
}

zig_f16 __roundh(zig_f16 const a0) {
 /* file:3:5 */
 /* file:3:34 */
 zig_f32 const t0 = a0;
 zig_f32 const t1 = roundf(t0);
 zig_f16 const t2 = t1;
 /* file:3:5 */
 return t2;
}

zig_f16 __trunch(zig_f16 const a0) {
 /* file:3:5 */
 /* file:3:34 */
 zig_f32 const t0 = a0;
 zig_f32 const t1 = truncf(t0);
 zig_f16 const t2 = t1;
 /* file:3:5 */
 return t2;
}

static zig_i32 compiler_rt_common_normalize__anon_3433(zig_u128 * const a0) {
 /* file:2:5 */
 /* file:2:27 */
 /* file:3:5 */
 /* file:3:65 */
 /* var:integerBit */
 /* file:5:5 */
 zig_u128 const t0 = (*a0);
 zig_u8 const t1 = zig_clz_u128(t0, zig_as_u8(80));
 zig_u8 const t2 = t1 - zig_as_u8(16);
 /* var:shift */
 /* file:6:5 */
 zig_u128 const t3 = (*a0);
 /* file:6:48 */
 zig_u8 const t4 = (zig_u8 )t2;
 zig_u128 const t5 = zig_shl_u128(t3, t4);
 (*a0) = t5;
 /* file:7:5 */
 zig_i32 const t6 = (zig_i32 )t2;
 zig_i32 const t7 = zig_as_i32(1) - t6;
 /* file:7:5 */
 return t7;
}

zig_f80 __fmodx(zig_f80 const a0, zig_f80 const a1) {
 /* file:2:5 */
 /* file:3:5 */
 /* file:3:27 */
 /* file:5:5 */
 /* file:5:51 */
 /* file:6:5 */
 /* file:6:52 */
 /* file:7:5 */
 /* file:7:48 */
 /* file:9:5 */
 /* var:signBit */
 /* file:10:5 */
 /* file:12:5 */
 zig_u128 t0;
 zig_u128 t1;
 memcpy(&t1, &a0, sizeof(zig_u128 ));
 zig_u128 * const t2 = (zig_u128 * )&t0;
 (*t2) = t1;
 /* var:aRep */
 /* file:13:5 */
 zig_u128 t3;
 zig_u128 t4;
 memcpy(&t4, &a1, sizeof(zig_u128 ));
 zig_u128 * const t5 = (zig_u128 * )&t3;
 (*t5) = t4;
 /* var:bRep */
 /* file:15:5 */
 zig_u128 const t6 = t0;
 zig_u128 const t7 = zig_and_u128(t6, zig_as_u128(zig_as_u64(32768), zig_as_u64(0)));
 /* var:signA */
 /* file:16:5 */
 zig_i32 t8;
 zig_u128 t9;
 memcpy(&t9, &a0, sizeof(zig_u128 ));
 zig_u128 const t10 = zig_shr_u128(t9, zig_as_u8(64));
 zig_u128 const t11 = zig_and_u128(t10, zig_as_u128(zig_as_u64(0), zig_as_u64(32767)));
 zig_i32 const t12 = (zig_i32 )t11;
 zig_i32 * const t13 = (zig_i32 * )&t8;
 (*t13) = t12;
 /* var:expA */
 /* file:17:5 */
 zig_i32 t14;
 zig_u128 t15;
 memcpy(&t15, &a1, sizeof(zig_u128 ));
 zig_u128 const t16 = zig_shr_u128(t15, zig_as_u8(64));
 zig_u128 const t17 = zig_and_u128(t16, zig_as_u128(zig_as_u64(0), zig_as_u64(32767)));
 zig_i32 const t18 = (zig_i32 )t17;
 zig_i32 * const t19 = (zig_i32 * )&t14;
 (*t19) = t18;
 /* var:expB */
 /* file:29:9 */
 {
  zig_bool const t20 = a1 == (zig_f80 )zig_suffix_f80(0x0.0p0);
  zig_bool t21;
  {
   if (t20) {
    t21 = zig_true;
    goto zig_block_1;
   } else {
    /* file:29:29 */
    zig_bool const t22 = math_isnan_isNan__anon_3496(a1);
    t21 = t22;
    goto zig_block_1;
   }
  }
  zig_block_1:;
  zig_bool t23;
  {
   if (t21) {
    t23 = zig_true;
    goto zig_block_2;
   } else {
    zig_i32 const t24 = t8;
    zig_bool const t25 = t24 == zig_as_i32(32767);
    t23 = t25;
    goto zig_block_2;
   }
  }
  zig_block_2:;
  if (t23) {
   /* file:30:9 */
   zig_f80 const t26 = a0 * a1;
   zig_f80 const t27 = a0 * a1;
   zig_f80 const t28 = t26 / t27;
   /* file:30:9 */
   return t28;
  } else {
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:34:5 */
 zig_u128 const t29 = t0;
 zig_u128 const t30 = zig_and_u128(t29, zig_as_u128(zig_as_u64(32767), zig_maxInt_u64));
 t0 = t30;
 /* file:35:5 */
 zig_u128 const t31 = t3;
 zig_u128 const t32 = zig_and_u128(t31, zig_as_u128(zig_as_u64(32767), zig_maxInt_u64));
 t3 = t32;
 /* file:36:9 */
 {
  zig_u128 const t33 = t0;
  zig_u128 const t34 = t3;
  zig_bool const t35 = zig_cmp_u128(t33, t34) <= zig_as_i8(0);
  if (t35) {
   /* file:37:13 */
   {
    zig_u128 const t36 = t0;
    zig_u128 const t37 = t3;
    zig_bool const t38 = t36 == t37;
    if (t38) {
     /* file:38:13 */
     /* file:38:13 */
     return (zig_f80 )zig_suffix_f80(0x0.0p0);
    } else {
     goto zig_block_4;
    }
   }
   zig_block_4:;
   /* file:40:9 */
   /* file:40:9 */
   return a0;
  } else {
   goto zig_block_3;
  }
 }
 zig_block_3:;
 /* file:43:9 */
 {
  zig_i32 const t39 = t8;
  zig_bool const t40 = t39 == zig_as_i32(0);
  if (t40) {
   /* file:43:20 */
   /* file:43:36 */
   zig_i32 const t41 = compiler_rt_common_normalize__anon_3433(&t0);
   t8 = t41;
   goto zig_block_5;
  } else {
   goto zig_block_5;
  }
 }
 zig_block_5:;
 /* file:44:9 */
 {
  zig_i32 const t42 = t14;
  zig_bool const t43 = t42 == zig_as_i32(0);
  if (t43) {
   /* file:44:20 */
   /* file:44:36 */
   zig_i32 const t44 = compiler_rt_common_normalize__anon_3433(&t3);
   t14 = t44;
   goto zig_block_6;
  } else {
   goto zig_block_6;
  }
 }
 zig_block_6:;
 /* file:46:5 */
 zig_u64 t45;
 t45 = zig_as_u64(0);
 /* var:highA */
 /* file:47:5 */
 zig_u64 t46;
 t46 = zig_as_u64(0);
 /* var:highB */
 /* file:48:5 */
 zig_u64 t47;
 zig_u128 const t48 = t0;
 zig_u64 const t49 = (zig_u64 )t48;
 t47 = t49;
 /* var:lowA */
 /* file:49:5 */
 zig_u64 t50;
 zig_u128 const t51 = t3;
 zig_u64 const t52 = (zig_u64 )t51;
 t50 = t52;
 /* var:lowB */
 {
  while (zig_true) {
   {
    /* file:51:12 */
    zig_i32 const t53 = t8;
    zig_i32 const t54 = t14;
    zig_bool const t55 = t53 > t54;
    if (t55) {
     /* file:51:39 */
     /* file:52:9 */
     zig_u64 t56;
     zig_u64 const t57 = t45;
     zig_u64 const t58 = t46;
     zig_u64 const t59 = zig_subw_u64(t57, t58, zig_as_u8(64));
     zig_u64 * const t60 = (zig_u64 * )&t56;
     (*t60) = t59;
     /* var:high */
     /* file:53:9 */
     zig_u64 t61;
     zig_u64 const t62 = t47;
     zig_u64 const t63 = t50;
     zig_u64 const t64 = zig_subw_u64(t62, t63, zig_as_u8(64));
     zig_u64 * const t65 = (zig_u64 * )&t61;
     (*t65) = t64;
     /* var:low */
     /* file:54:13 */
     {
      zig_u64 const t66 = t47;
      zig_u64 const t67 = t50;
      zig_bool const t68 = t66 < t67;
      if (t68) {
       /* file:55:13 */
       zig_u64 const t69 = t56;
       zig_u64 const t70 = zig_subw_u64(t69, zig_as_u64(1), zig_as_u8(64));
       t56 = t70;
       goto zig_block_9;
      } else {
       goto zig_block_9;
      }
     }
     zig_block_9:;
     /* file:57:13 */
     {
      zig_u64 const t71 = t56;
      zig_u64 const t72 = zig_shr_u64(t71, zig_as_u8(63));
      zig_bool const t73 = t72 == zig_as_u64(0);
      if (t73) {
       /* file:58:17 */
       {
        zig_u64 const t74 = t56;
        zig_u64 const t75 = t61;
        zig_u64 const t76 = t74 | t75;
        zig_bool const t77 = t76 == zig_as_u64(0);
        if (t77) {
         /* file:59:17 */
         /* file:59:17 */
         return (zig_f80 )zig_suffix_f80(0x0.0p0);
        } else {
         goto zig_block_11;
        }
       }
       zig_block_11:;
       /* file:61:13 */
       zig_u64 const t78 = t56;
       zig_u64 const t79 = zig_mulw_u64(zig_as_u64(2), t78, zig_as_u8(64));
       zig_u64 const t80 = t61;
       zig_u64 const t81 = zig_shr_u64(t80, zig_as_u8(63));
       zig_u64 const t82 = t79 + t81;
       t45 = t82;
       /* file:62:13 */
       zig_u64 const t83 = t61;
       zig_u64 const t84 = zig_mulw_u64(zig_as_u64(2), t83, zig_as_u8(64));
       t47 = t84;
       goto zig_block_10;
      } else {
       /* file:64:13 */
       zig_u64 const t85 = t45;
       zig_u64 const t86 = zig_mulw_u64(zig_as_u64(2), t85, zig_as_u8(64));
       zig_u64 const t87 = t47;
       zig_u64 const t88 = zig_shr_u64(t87, zig_as_u8(63));
       zig_u64 const t89 = t86 + t88;
       t45 = t89;
       /* file:65:13 */
       zig_u64 const t90 = t47;
       zig_u64 const t91 = zig_mulw_u64(zig_as_u64(2), t90, zig_as_u8(64));
       t47 = t91;
       goto zig_block_10;
      }
     }
     zig_block_10:;
     /* file:51:28 */
     zig_i32 const t92 = t8;
     zig_i32 const t93 = t92 - zig_as_i32(1);
     t8 = t93;
     goto zig_block_8;
    } else {
     goto zig_block_7;
    }
   }
   zig_block_8:;
  }
 }
 zig_block_7:;
 /* file:69:5 */
 zig_u64 t94;
 zig_u64 const t95 = t45;
 zig_u64 const t96 = t46;
 zig_u64 const t97 = zig_subw_u64(t95, t96, zig_as_u8(64));
 zig_u64 * const t98 = (zig_u64 * )&t94;
 (*t98) = t97;
 /* var:high */
 /* file:70:5 */
 zig_u64 t99;
 zig_u64 const t100 = t47;
 zig_u64 const t101 = t50;
 zig_u64 const t102 = zig_subw_u64(t100, t101, zig_as_u8(64));
 zig_u64 * const t103 = (zig_u64 * )&t99;
 (*t103) = t102;
 /* var:low */
 /* file:71:9 */
 {
  zig_u64 const t104 = t47;
  zig_u64 const t105 = t50;
  zig_bool const t106 = t104 < t105;
  if (t106) {
   /* file:72:9 */
   zig_u64 const t107 = t94;
   zig_u64 const t108 = zig_subw_u64(t107, zig_as_u64(1), zig_as_u8(64));
   t94 = t108;
   goto zig_block_12;
  } else {
   goto zig_block_12;
  }
 }
 zig_block_12:;
 /* file:74:9 */
 {
  zig_u64 const t109 = t94;
  zig_u64 const t110 = zig_shr_u64(t109, zig_as_u8(63));
  zig_bool const t111 = t110 == zig_as_u64(0);
  if (t111) {
   /* file:75:13 */
   {
    zig_u64 const t112 = t94;
    zig_u64 const t113 = t99;
    zig_u64 const t114 = t112 | t113;
    zig_bool const t115 = t114 == zig_as_u64(0);
    if (t115) {
     /* file:76:13 */
     /* file:76:13 */
     return (zig_f80 )zig_suffix_f80(0x0.0p0);
    } else {
     goto zig_block_14;
    }
   }
   zig_block_14:;
   /* file:78:9 */
   zig_u64 const t116 = t94;
   t45 = t116;
   /* file:79:9 */
   zig_u64 const t117 = t99;
   t47 = t117;
   goto zig_block_13;
  } else {
   goto zig_block_13;
  }
 }
 zig_block_13:;
 {
  while (zig_true) {
   {
    /* file:82:12 */
    zig_u64 const t118 = t47;
    zig_u64 const t119 = zig_shr_u64(t118, zig_as_u8(63));
    zig_bool const t120 = t119 == zig_as_u64(0);
    if (t120) {
     /* file:82:43 */
     /* file:83:9 */
     zig_u64 const t121 = t47;
     zig_u64 const t122 = zig_mulw_u64(zig_as_u64(2), t121, zig_as_u8(64));
     t47 = t122;
     /* file:84:9 */
     zig_i32 const t123 = t8;
     zig_i32 const t124 = t123 - zig_as_i32(1);
     t8 = t124;
     goto zig_block_16;
    } else {
     goto zig_block_15;
    }
   }
   zig_block_16:;
  }
 }
 zig_block_15:;
 /* file:88:9 */
 zig_i32 const t125 = t8;
 zig_bool const t126 = t125 < -zig_as_i32(63);
 if (t126) {
  /* file:89:9 */
  zig_f80 t127;
  memcpy(&t127, &t7, sizeof(zig_f80 ));
  /* file:89:9 */
  return t127;
 } else {
  /* file:90:16 */
  zig_i32 const t128 = t8;
  zig_bool const t129 = t128 <= zig_as_i32(0);
  if (t129) {
   /* file:91:9 */
   zig_u64 const t130 = t47;
   /* file:91:58 */
   zig_i32 const t131 = t8;
   zig_i32 const t132 = zig_as_i32(1) - t131;
   zig_u8 const t133 = (zig_u8 )t132;
   zig_u64 const t134 = zig_shr_u64(t130, t133);
   zig_u128 const t135 = (zig_u128 )t134;
   zig_u128 const t136 = zig_or_u128(t135, t7);
   zig_f80 t137;
   memcpy(&t137, &t136, sizeof(zig_f80 ));
   /* file:91:9 */
   return t137;
  } else {
   /* file:93:9 */
   zig_u64 const t138 = t47;
   zig_i32 const t139 = t8;
   zig_u16 const t140 = (zig_u16 )t139;
   zig_u128 const t141 = (zig_u128 )t140;
   zig_u128 const t142 = zig_shl_u128(t141, zig_as_u8(64));
   zig_u128 const t143 = (zig_u128 )t138;
   zig_u128 const t144 = zig_or_u128(t143, t142);
   zig_u128 const t145 = zig_or_u128(t144, t7);
   zig_f80 t146;
   memcpy(&t146, &t145, sizeof(zig_f80 ));
   /* file:93:9 */
   return t146;
  }
 }
}

zig_f128 expq(zig_f128 const a0) {
 /* file:3:5 */
 zig_f128 t0;
 /* file:3:15 */
 zig_f64 const t1 = a0;
 zig_f64 const t2 = exp(t1);
 zig_f128 const t3 = t2;
 t0 = t3;
 /* file:3:5 */
 return t0;
}

zig_f80 __exp2x(zig_f80 const a0) {
 /* file:3:5 */
 /* file:3:33 */
 zig_f128 const t0 = a0;
 zig_f128 const t1 = exp2q(t0);
 zig_f80 const t2 = t1;
 /* file:3:5 */
 return t2;
}

zig_f128 logq(zig_f128 const a0) {
 /* file:3:5 */
 zig_f128 t0;
 /* file:3:15 */
 zig_f64 const t1 = a0;
 zig_f64 const t2 = log(t1);
 zig_f128 const t3 = t2;
 t0 = t3;
 /* file:3:5 */
 return t0;
}

zig_f80 __log2x(zig_f80 const a0) {
 /* file:3:5 */
 /* file:3:33 */
 zig_f128 const t0 = a0;
 zig_f128 const t1 = log2q(t0);
 zig_f80 const t2 = t1;
 /* file:3:5 */
 return t2;
}

zig_f128 log10q(zig_f128 const a0) {
 /* file:3:5 */
 zig_f128 t0;
 /* file:3:17 */
 zig_f64 const t1 = a0;
 zig_f64 const t2 = log10(t1);
 zig_f128 const t3 = t2;
 t0 = t3;
 /* file:3:5 */
 return t0;
}

zig_f80 __ceilx(zig_f80 const a0) {
 /* file:3:5 */
 /* file:3:33 */
 zig_f128 const t0 = a0;
 zig_f128 const t1 = ceilq(t0);
 zig_f80 const t2 = t1;
 /* file:3:5 */
 return t2;
}

zig_f80 __roundx(zig_f80 const a0) {
 /* file:3:5 */
 /* file:3:34 */
 zig_f128 const t0 = a0;
 zig_f128 const t1 = roundq(t0);
 zig_f80 const t2 = t1;
 /* file:3:5 */
 return t2;
}

zig_f80 __truncx(zig_f80 const a0) {
 /* file:3:5 */
 /* file:3:34 */
 zig_f128 const t0 = a0;
 zig_f128 const t1 = truncq(t0);
 zig_f80 const t2 = t1;
 /* file:3:5 */
 return t2;
}

zig_f128 truncq(zig_f128 const a0) {
 /* file:2:5 */
 zig_u128 t0;
 memcpy(&t0, &a0, sizeof(zig_u128 ));
 /* var:u */
 /* file:3:5 */
 zig_i32 t1;
 zig_u128 const t2 = zig_shr_u128(t0, zig_as_u8(112));
 zig_u128 const t3 = zig_and_u128(t2, zig_as_u128(zig_as_u64(0), zig_as_u64(32767)));
 zig_i32 const t4 = (zig_i32 )t3;
 zig_i32 const t5 = t4 - zig_as_i32(16383);
 zig_i32 const t6 = t5 + zig_as_i32(16);
 zig_i32 * const t7 = (zig_i32 * )&t1;
 (*t7) = t6;
 /* var:e */
 /* file:4:5 */
 zig_u128 t8;
 /* var:m */
 /* file:6:9 */
 {
  zig_i32 const t9 = t1;
  zig_bool const t10 = t9 >= zig_as_i32(128);
  if (t10) {
   /* file:7:9 */
   /* file:7:9 */
   return a0;
  } else {
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:9:9 */
 {
  zig_i32 const t11 = t1;
  zig_bool const t12 = t11 < zig_as_i32(16);
  if (t12) {
   /* file:10:9 */
   t1 = zig_as_i32(1);
   goto zig_block_1;
  } else {
   goto zig_block_1;
  }
 }
 zig_block_1:;
 /* file:13:5 */
 /* file:13:30 */
 zig_i32 const t13 = t1;
 zig_u8 const t14 = (zig_u8 )t13;
 zig_u128 const t15 = zig_shr_u128(zig_maxInt_u128, t14);
 t8 = t15;
 /* file:14:9 */
 zig_u128 const t16 = t8;
 zig_u128 const t17 = zig_and_u128(t0, t16);
 zig_bool const t18 = t17 == zig_as_u128(zig_as_u64(0), zig_as_u64(0));
 if (t18) {
  /* file:15:9 */
  /* file:15:9 */
  return a0;
 } else {
  /* file:17:9 */
  /* file:17:31 */
  zig_f128 const t19 = a0 + (zig_f128 )zig_suffix_f128(0x1p120);
  math_doNotOptimizeAway__anon_3615(t19);
  /* file:18:9 */
  zig_u128 const t20 = t8;
  zig_u128 const t21 = ~t20;
  zig_u128 const t22 = zig_and_u128(t0, t21);
  zig_f128 t23;
  memcpy(&t23, &t22, sizeof(zig_f128 ));
  /* file:18:9 */
  return t23;
 }
}

zig_f128 exp2q(zig_f128 const a0) {
 /* file:3:5 */
 zig_f128 t0;
 /* file:3:16 */
 zig_f64 const t1 = a0;
 zig_f64 const t2 = exp2(t1);
 zig_f128 const t3 = t2;
 t0 = t3;
 /* file:3:5 */
 return t0;
}

zig_f128 log2q(zig_f128 const a0) {
 /* file:3:5 */
 zig_f128 t0;
 /* file:3:16 */
 zig_f64 const t1 = a0;
 zig_f64 const t2 = log2(t1);
 zig_f128 const t3 = t2;
 t0 = t3;
 /* file:3:5 */
 return t0;
}

zig_f128 ceilq(zig_f128 const a0) {
 /* file:2:5 */
 /* file:2:43 */
 /* dbg func:floatEps */
 /* file:2:5 */
 zig_f128 t0;
 /* file:2:28 */
 /* dbg func:reconstructFloat */
 /* file:2:5 */
 /* file:3:5 */
 /* file:3:67 */
 /* var:biased_exponent */
 /* file:4:5 */
 /* file:4:61 */
 /* file:4:5 */
 /* dbg func:floatEps */
 t0 = (zig_f128 )zig_suffix_f128(0x1p-112);
 /* file:2:5 */
 zig_f128 const t1 = t0;
 /* dbg func:ceilq */
 zig_f128 const t2 = (zig_f128 )zig_suffix_f128(0x1p0) / t1;
 /* var:f128_toint */
 /* file:4:5 */
 zig_u128 t3;
 memcpy(&t3, &a0, sizeof(zig_u128 ));
 /* var:u */
 /* file:5:5 */
 zig_u128 const t4 = zig_shr_u128(t3, zig_as_u8(112));
 zig_u128 const t5 = zig_and_u128(t4, zig_as_u128(zig_as_u64(0), zig_as_u64(32767)));
 /* var:e */
 /* file:6:5 */
 zig_f128 t6;
 /* var:y */
 /* file:8:9 */
 {
  zig_bool const t7 = zig_cmp_u128(t5, zig_as_u128(zig_as_u64(0), zig_as_u64(16495))) >= zig_as_i8(0);
  zig_bool t8;
  {
   if (t7) {
    t8 = zig_true;
    goto zig_block_1;
   } else {
    zig_bool const t9 = a0 == (zig_f128 )zig_suffix_f128(0x0.0p0);
    t8 = t9;
    goto zig_block_1;
   }
  }
  zig_block_1:;
  if (t8) {
   /* file:8:38 */
   /* file:8:38 */
   return a0;
  } else {
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:10:9 */
 {
  zig_u128 const t10 = zig_shr_u128(t3, zig_as_u8(127));
  zig_bool const t11 = t10 != zig_as_u128(zig_as_u64(0), zig_as_u64(0));
  if (t11) {
   /* file:11:9 */
   zig_f128 const t12 = a0 - t2;
   zig_f128 const t13 = t12 + t2;
   zig_f128 const t14 = t13 - a0;
   t6 = t14;
   goto zig_block_2;
  } else {
   /* file:13:9 */
   zig_f128 const t15 = a0 + t2;
   zig_f128 const t16 = t15 - t2;
   zig_f128 const t17 = t16 - a0;
   t6 = t17;
   goto zig_block_2;
  }
 }
 zig_block_2:;
 /* file:16:9 */
 zig_bool const t18 = zig_cmp_u128(t5, zig_as_u128(zig_as_u64(0), zig_as_u64(16382))) <= zig_as_i8(0);
 if (t18) {
  /* file:17:9 */
  /* file:17:31 */
  zig_f128 const t19 = t6;
  math_doNotOptimizeAway__anon_3615(t19);
  /* file:18:13 */
  zig_u128 const t20 = zig_shr_u128(t3, zig_as_u8(127));
  zig_bool const t21 = t20 != zig_as_u128(zig_as_u64(0), zig_as_u64(0));
  if (t21) {
   /* file:19:13 */
   /* file:19:13 */
   return (zig_f128 )-zig_suffix_f128(0x0.0p0);
  } else {
   /* file:21:13 */
   /* file:21:13 */
   return (zig_f128 )zig_suffix_f128(0x1p0);
  }
 } else {
  /* file:23:16 */
  zig_f128 const t22 = t6;
  zig_bool const t23 = t22 < (zig_f128 )zig_suffix_f128(0x0.0p0);
  if (t23) {
   /* file:24:9 */
   zig_f128 const t24 = t6;
   zig_f128 const t25 = a0 + t24;
   zig_f128 const t26 = t25 + (zig_f128 )zig_suffix_f128(0x1p0);
   /* file:24:9 */
   return t26;
  } else {
   /* file:26:9 */
   zig_f128 const t27 = t6;
   zig_f128 const t28 = a0 + t27;
   /* file:26:9 */
   return t28;
  }
 }
}

zig_f128 roundq(zig_f128 const a0) {
 /* file:2:5 */
 /* file:2:43 */
 /* dbg func:floatEps */
 /* file:2:5 */
 zig_f128 t0;
 /* file:2:28 */
 /* dbg func:reconstructFloat */
 /* file:2:5 */
 /* file:3:5 */
 /* file:3:67 */
 /* var:biased_exponent */
 /* file:4:5 */
 /* file:4:61 */
 /* file:4:5 */
 /* dbg func:floatEps */
 t0 = (zig_f128 )zig_suffix_f128(0x1p-112);
 /* file:2:5 */
 zig_f128 const t1 = t0;
 /* dbg func:roundq */
 zig_f128 const t2 = (zig_f128 )zig_suffix_f128(0x1p0) / t1;
 /* var:f128_toint */
 /* file:4:5 */
 zig_f128 t3;
 zig_f128 * const t4 = (zig_f128 * )&t3;
 (*t4) = a0;
 /* var:x */
 /* file:5:5 */
 zig_f128 const t5 = t3;
 zig_u128 t6;
 memcpy(&t6, &t5, sizeof(zig_u128 ));
 /* var:u */
 /* file:6:5 */
 zig_u128 const t7 = zig_shr_u128(t6, zig_as_u8(112));
 zig_u128 const t8 = zig_and_u128(t7, zig_as_u128(zig_as_u64(0), zig_as_u64(32767)));
 /* var:e */
 /* file:7:5 */
 zig_f128 t9;
 /* var:y */
 /* file:9:9 */
 {
  zig_bool const t10 = zig_cmp_u128(t8, zig_as_u128(zig_as_u64(0), zig_as_u64(16495))) >= zig_as_i8(0);
  if (t10) {
   /* file:10:9 */
   zig_f128 const t11 = t3;
   /* file:10:9 */
   return t11;
  } else {
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:12:9 */
 {
  zig_u128 const t12 = zig_shr_u128(t6, zig_as_u8(127));
  zig_bool const t13 = t12 != zig_as_u128(zig_as_u64(0), zig_as_u64(0));
  if (t13) {
   /* file:13:9 */
   zig_f128 const t14 = t3;
   zig_f128 const t15 = -t14;
   t3 = t15;
   goto zig_block_1;
  } else {
   goto zig_block_1;
  }
 }
 zig_block_1:;
 /* file:15:9 */
 {
  zig_bool const t16 = zig_cmp_u128(t8, zig_as_u128(zig_as_u64(0), zig_as_u64(16382))) < zig_as_i8(0);
  if (t16) {
   /* file:16:9 */
   /* file:16:31 */
   zig_f128 const t17 = t3;
   zig_f128 const t18 = t17 + t2;
   math_doNotOptimizeAway__anon_3615(t18);
   /* file:17:9 */
   /* file:17:9 */
   return (zig_f128 )zig_suffix_f128(0x0.0p0);
  } else {
   goto zig_block_2;
  }
 }
 zig_block_2:;
 /* file:20:5 */
 zig_f128 const t19 = t3;
 zig_f128 const t20 = t19 + t2;
 zig_f128 const t21 = t20 - t2;
 zig_f128 const t22 = t3;
 zig_f128 const t23 = t21 - t22;
 t9 = t23;
 /* file:21:9 */
 {
  zig_f128 const t24 = t9;
  zig_bool const t25 = t24 > (zig_f128 )zig_suffix_f128(0x1p-1);
  if (t25) {
   /* file:22:9 */
   zig_f128 const t26 = t9;
   zig_f128 const t27 = t3;
   zig_f128 const t28 = t26 + t27;
   zig_f128 const t29 = t28 - (zig_f128 )zig_suffix_f128(0x1p0);
   t9 = t29;
   goto zig_block_3;
  } else {
   {
    /* file:23:16 */
    zig_f128 const t30 = t9;
    zig_bool const t31 = t30 <= (zig_f128 )-zig_suffix_f128(0x1p-1);
    if (t31) {
     /* file:24:9 */
     zig_f128 const t32 = t9;
     zig_f128 const t33 = t3;
     zig_f128 const t34 = t32 + t33;
     zig_f128 const t35 = t34 + (zig_f128 )zig_suffix_f128(0x1p0);
     t9 = t35;
     goto zig_block_4;
    } else {
     /* file:26:9 */
     zig_f128 const t36 = t9;
     zig_f128 const t37 = t3;
     zig_f128 const t38 = t36 + t37;
     t9 = t38;
     goto zig_block_4;
    }
   }
   zig_block_4:;
   goto zig_block_3;
  }
 }
 zig_block_3:;
 /* file:29:9 */
 zig_u128 const t39 = zig_shr_u128(t6, zig_as_u8(127));
 zig_bool const t40 = t39 != zig_as_u128(zig_as_u64(0), zig_as_u64(0));
 if (t40) {
  /* file:30:9 */
  zig_f128 const t41 = t9;
  zig_f128 const t42 = -t41;
  /* file:30:9 */
  return t42;
 } else {
  /* file:32:9 */
  zig_f128 const t43 = t9;
  /* file:32:9 */
  return t43;
 }
}
