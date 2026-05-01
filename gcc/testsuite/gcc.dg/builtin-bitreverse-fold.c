/* { dg-do compile } */
/* { dg-options "-std=gnu11" } */

_Static_assert (__builtin_bitreverse8 (0x01u) == 0x80u, "bitreverse8");
_Static_assert (__builtin_bitreverse16 (0x0001u) == 0x8000u, "bitreverse16");
_Static_assert (__builtin_bitreverse32 (0x12345678u) == 0x1e6a2c48u,
		"bitreverse32");
_Static_assert (__builtin_bitreverse64 (0x0123456789abcdefull)
		 == 0xf7b3d591e6a2c480ull, "bitreverse64");
