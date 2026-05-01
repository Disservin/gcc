/* { dg-do run } */
/* { dg-options "-O2" } */

extern void abort (void);

static unsigned long long
br64 (unsigned long long x)
{
  return __builtin_bitreverse64 (x);
}

int
main (void)
{
  if (br64 (0x0000000000000000ull) != 0x0000000000000000ull)
    abort ();
  if (br64 (0x0000000000000001ull) != 0x8000000000000000ull)
    abort ();
  if (br64 (0x0123456789abcdefull) != 0xf7b3d591e6a2c480ull)
    abort ();
  if (br64 (0xffffffffffffffffull) != 0xffffffffffffffffull)
    abort ();
  return 0;
}
