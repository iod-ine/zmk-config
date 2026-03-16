/*
  Labels:

  L16 L15 L14 L13 L12                                        R12 R13 R14 R15 R16
  L26 L25 L24 L23 L22 L21                                R21 R22 R23 R24 R25 R26
  L36 L35 L34 L33 L32 L31                                R31 R32 R33 R34 R35 R36
  L46 L45 L44 L43 L42 L41                                R41 R42 R43 R44 R45 R46
  L56 L55 L54 L53 L52 L51                                R51 R52 R53 R54 R55 R56
  L66 L65 L64 L63 L62                                        R62 R63 R64 R65 R66
                          LT13 LT12 LT11  RT11 RT12 RT13
                          LT23 LT22 LT21  RT21 RT22 RT23

  Indices:

    0   1   2   3   4                                          5   6   7   8   9
   10  11  12  13  14  15                                 16  17  18  19  20  21
   22  23  24  25  26  27                                 28  29  30  31  32  33
   34  35  36  37  38  39                                 40  41  42  43  44  45
   46  47  48  49  50  51                                 58  59  60  61  62  63
   64  65  66  67  68                                         75  76  77  78  79
                            52   53   54    55   56   57
                            69   70   71    72   73   74

   The indices correspond to order of the keys in the map array of the matrix_transform
   defined in app/boards/.../glove80.dtsi of the ZMK repo.
*/

#pragma once

#define L12 4
#define L13 3
#define L14 2
#define L15 1
#define L16 0
#define L21 15
#define L22 14
#define L23 13
#define L24 12
#define L25 11
#define L26 10
#define L31 27
#define L32 26
#define L33 25
#define L34 24
#define L35 23
#define L36 22
#define L41 39
#define L42 38
#define L43 37
#define L44 36
#define L45 35
#define L46 34
#define L51 51
#define L52 50
#define L53 49
#define L54 48
#define L55 47
#define L56 46
#define L62 68
#define L63 67
#define L64 66
#define L65 65
#define L66 64

#define LT11 54
#define LT12 53
#define LT13 52
#define LT21 71
#define LT22 70
#define LT23 69

#define RT11 55
#define RT12 56
#define RT13 57
#define RT21 72
#define RT22 73
#define RT23 74

#define R12 5
#define R13 6
#define R14 7
#define R15 8
#define R16 9
#define R21 16
#define R22 17
#define R23 18
#define R24 19
#define R25 20
#define R26 21
#define R31 28
#define R32 29
#define R33 30
#define R34 31
#define R35 32
#define R36 33
#define R41 40
#define R42 41
#define R43 42
#define R44 43
#define R45 44
#define R46 45
#define R51 58
#define R52 59
#define R53 60
#define R54 61
#define R55 62
#define R56 63
#define R62 75
#define R63 76
#define R64 77
#define R65 78
#define R66 79

#define KEYS_L L12 L13 L14 L15 L16 L21 L22 L23 L24 L25 L26 L31 L32 L33 L34 L35 L36 L41 L42 L43 L44 L45 L46 L51 L52 L53 L54 L55 L56 L62 L63 L64 L65 L66
#define KEYS_R R12 R13 R14 R15 R16 R21 R22 R23 R24 R25 R26 R31 R32 R33 R34 R35 R36 R41 R42 R43 R44 R45 R46 R51 R52 R53 R54 R55 R56 R62 R63 R64 R65 R66
#define THUMBS_L LT11 LT12 LT13 LT21 LT22 LT23
#define THUMBS_R RT11 RT12 RT13 RT21 RT22 RT23
#define THUMBS THUMBS_L THUMBS_R
