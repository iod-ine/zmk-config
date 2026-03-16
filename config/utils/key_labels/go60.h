/*
  Labels:

  L16 L15 L14 L13 L12 L11                          R11 R12 R13 R14 R15 R16
  L26 L25 L24 L23 L22 L21                          R21 R22 R23 R24 R25 R26
  L36 L35 L34 L33 L32 L31                          R31 R32 R33 R34 R35 R36
  L46 L45 L44 L43 L42 L41                          R41 R42 R43 R44 R45 R46
          L54 L53 L52                                  R52 R53 R54
                          LT3 LT2 LT1  RT1 RT2 RT3

  Indices:

    0   1   2   3   4   5                            6   7   8   9  10  11
   12  13  14  15  16  17                           18  19  20  21  22  23
   24  25  26  27  28  29                           30  31  32  33  34  35
   36  37  38  39  40  41                           42  43  44  45  46  47
           48  49  50                                   51  52  53
                           54  55  56   57  58  59

   The indices correspond to order of the keys in the map array of the matrix_transform
   defined in app/boards/.../go60.dtsi of the ZMK repo.
*/

#pragma once

#define L11 5
#define L12 4
#define L13 3
#define L14 2
#define L15 1
#define L16 0
#define L21 17
#define L22 16
#define L23 15
#define L24 14
#define L25 13
#define L26 12
#define L31 29
#define L32 28
#define L33 27
#define L34 26
#define L35 25
#define L36 24
#define L41 41
#define L42 40
#define L43 39
#define L44 38
#define L45 37
#define L46 36
#define L52 50
#define L53 49
#define L54 48

#define LT1 56
#define LT2 55
#define LT3 54

#define RT1 57
#define RT2 58
#define RT3 59

#define R11 6
#define R12 7
#define R13 8
#define R14 9
#define R15 10
#define R16 11
#define R21 18
#define R22 19
#define R23 20
#define R24 21
#define R25 22
#define R26 23
#define R31 30
#define R32 31
#define R33 32
#define R34 33
#define R35 34
#define R36 35
#define R41 42
#define R42 43
#define R43 44
#define R44 45
#define R45 46
#define R46 47
#define R52 51
#define R53 52
#define R54 53

#define KEYS_L L11 L12 L13 L14 L15 L16 L21 L22 L23 L24 L25 L26 L31 L32 L33 L34 L35 L36 L41 L42 L43 L44 L45 L46 L52 L53 L54
#define KEYS_R R11 R12 R13 R14 R15 R16 R21 R22 R23 R24 R25 R26 R31 R32 R33 R34 R35 R36 R41 R42 R43 R44 R45 R46 R52 R53 R54
#define THUMBS_L LT1 LT2 LT3
#define THUMBS_R RT1 RT2 RT3
#define THUMBS THUMBS_L THUMBS_R
