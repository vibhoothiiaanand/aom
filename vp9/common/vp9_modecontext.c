/*
 *  Copyright (c) 2010 The WebM project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */


#include "vp9/common/vp9_entropymode.h"

const vp9_prob vp9_kf_default_bmode_probs[VP9_KF_BINTRAMODES]
                                         [VP9_KF_BINTRAMODES]
                                         [VP9_KF_BINTRAMODES-1] = {
  {  // Above 0
    { 231,    9,  124,  138,   96,  200,   76,   42,   88, },  // left 0
    { 152,   11,  187,  112,  170,  139,  130,   91,  113, },  // left 1
    { 175,   10,   71,  182,  212,  191,   43,   39,   82, },  // left 2
    {  56,   23,   63,   38,   76,   60,  185,  206,  159, },  // left 3
    { 144,   52,   89,  192,   19,  236,  134,   93,   37, },  // left 4
    { 114,   22,   29,  133,   37,   18,   60,  156,  233, },  // left 5
    { 121,   16,   26,  124,  176,   50,   29,   20,  234, },  // left 6
    { 170,   19,   50,   91,  169,  216,   14,   16,    5, },  // left 7
    {  63,   14,   21,   68,   32,   29,   71,  224,  181, },  // left 8
    {  81,   93,   62,   65,   78,  171,  152,  103,  172, },  // left 9
  }, {  // Above 1
    { 134,    2,  185,  147,  159,  152,   83,   33,  136, },  // left 0
    {  72,    9,  194,  141,  208,  108,  124,   73,  119, },  // left 1
    {  66,    1,  102,  183,  236,  151,   35,    8,   78, },  // left 2
    {  41,   30,   60,   26,  101,  148,  212,  206,  177, },  // left 3
    { 104,   91,  122,  184,   33,  243,  156,   73,    1, },  // left 4
    {  74,   23,   47,  119,   63,   60,   79,  135,  211, },  // left 5
    {  65,   12,   40,  134,  211,   79,   42,   37,  187, },  // left 6
    {  87,   26,   76,   97,  218,  183,   27,    7,   31, },  // left 7
    {  47,   24,   45,   53,   78,   89,  105,  215,  128, },  // left 8
    {  66,   89,   68,   91,  120,  113,  190,  105,   98, },  // left 9
  }, {  // Above 2
    {  88,    1,   88,  166,  229,  115,   30,   23,  155, },  // left 0
    {  43,    5,   98,  198,  244,  158,   50,   14,  113, },  // left 1
    {  39,    1,   53,  208,  247,  208,   10,   11,   92, },  // left 2
    {  56,   42,   41,  102,  156,  110,   76,   61,  106, },  // left 3
    { 107,   79,   78,  158,   85,  255,   20,   64,  114, },  // left 4
    {  39,   15,   30,  174,  135,   66,   85,   28,  176, },  // left 5
    {  34,    5,   22,  137,  222,   64,   22,    5,  220, },  // left 6
    {  68,    7,   25,  135,  206,  192,    7,   14,    8, },  // left 7
    {  34,   45,   24,   78,   85,   55,   85,  120,   60, },  // left 8
    {  62,   54,   23,  142,  182,  177,   64,   57,  171, },  // left 9
  }, {  // Above 3
    { 193,   15,  108,   82,  121,  192,  188,  119,  145, },  // left 0
    {  60,   15,  157,   65,  142,   61,  202,  203,   85, },  // left 1
    { 112,   17,  121,  128,  175,  128,   94,   85,    1, },  // left 2
    {  40,   25,   47,   12,   20,   64,  221,  194,   57, },  // left 3
    { 100,   74,  112,   85,   43,  255,   64,  142,  128, },  // left 4
    {  88,   24,   47,   91,   93,   73,  141,  171,   85, },  // left 5
    {  61,    9,   65,   75,  107,  146,   53,  100,  255, },  // left 6
    { 142,    8,   80,  105,  199,  255,   20,   43,    1, },  // left 7
    {  41,   17,   43,   22,   64,   43,   98,  246,  255, },  // left 8
    {  51,   37,   59,   56,   94,   64,  200,  154,  128, },  // left 9
  }, {  // Above 4
    { 125,   10,  103,  129,   89,  209,   65,   22,   91, },  // left 0
    {  95,   25,   93,  146,  108,  208,   96,   34,  108, },  // left 1
    {  75,   17,   84,  185,  188,  199,   20,    1,   43, },  // left 2
    {  57,   91,   27,   83,   23,  205,   67,   75,  149, },  // left 3
    { 115,   70,   29,  237,    3,  247,   73,   51,    1, },  // left 4
    {  38,   67,   45,   73,   64,   85,   51,   96,  255, },  // left 5
    {  41,   25,   11,  142,  133,  128,   77,   73,  205, },  // left 6
    { 101,   26,   32,  124,   38,  247,    7,    7,    8, },  // left 7
    {  57,   91,   28,  128,   32,   73,  128,  128,  128, },  // left 8
    { 117,  127,   39,  164,   51,  230,  128,  183,  255, },  // left 9
  }, {  // Above 5
    { 138,    5,   32,  135,   70,   29,   33,  115,  208, },  // left 0
    {  67,    9,   91,  111,  142,   38,   78,   87,  199, },  // left 1
    {  63,    7,   60,  172,  138,   60,   85,   64,  199, },  // left 2
    {  40,   25,   44,   87,   71,   79,  102,  183,   85, },  // left 3
    {  57,  110,   80,  140,   85,  255,   51,  128,  128, },  // left 4
    {  47,   12,   16,  167,   26,   23,   69,  135,  171, },  // left 5
    {  46,   14,   18,  102,   89,   15,    7,   67,  238, },  // left 6
    {  65,    8,   33,  123,  158,   51,   18,   79,  114, },  // left 7
    {  40,   16,    3,   91,   28,   32,   37,  207,  224, },  // left 8
    {  87,   66,   49,   98,   32,  146,   59,   51,  224, },  // left 9
  }, {  // Above 6
    { 104,    1,   55,   88,  130,   39,    9,   17,  234, },  // left 0
    {  64,   15,   96,  103,  192,   37,   43,   15,  248, },  // left 1
    {  54,    2,   57,  135,  213,   70,    4,   22,  203, },  // left 2
    {  30,   38,   40,   64,  128,   43,  114,  141,  171, },  // left 3
    {  75,   43,   38,  181,   21,  233,  154,  128,    1, },  // left 4
    {  39,    1,   19,  126,  107,   12,   35,   40,  237, },  // left 5
    {  31,    6,    9,   77,  221,    1,    2,    4,  244, },  // left 6
    {  88,   20,   33,   90,  110,  192,   39,   23,   51, },  // left 7
    {  56,   21,   23,  119,   55,   70,   48,  177,  128, },  // left 8
    {  55,   44,   46,  120,  188,    1,   60,   98,  192, },  // left 9
  }, {  // Above 7
    { 102,    1,   61,   95,  192,  205,    6,    9,   31, },  // left 0
    {  69,   12,   63,  104,  187,  166,   14,    5,   20, },  // left 1
    {  68,    1,   45,  136,  242,  154,    1,    7,   30, },  // left 2
    {  62,   69,   24,   92,   73,  205,   82,   90,   93, },  // left 3
    {  75,   31,   17,  215,   12,  246,   16,   17,    1, },  // left 4
    {  37,   18,   46,  128,   80,   93,  112,    1,  114, },  // left 5
    {  63,    9,   10,  125,  195,   85,   20,   11,  134, },  // left 6
    {  86,    6,    6,   54,  136,  224,    1,    1,    1, },  // left 7
    {  56,   24,    9,  110,   43,   77,  128,   96,    1, },  // left 8
    {  58,   60,   20,   59,  116,  171,   69,   28,   75, },  // left 9
  }, {  // Above 8
    { 164,   10,   52,   70,  121,   74,  105,  168,  164, },  // left 0
    {  51,   20,  112,   95,  138,   85,  101,  166,  238, },  // left 1
    {  86,    9,   42,  122,  140,   77,  117,   39,   23, },  // left 2
    {  22,   18,   28,   30,  156,  146,  141,  247,  255, },  // left 3
    {  83,   98,   20,  128,   43,  205,  128,   85,    1, },  // left 4
    {  45,   32,   18,   92,   67,   18,   38,  238,  255, },  // left 5
    {  56,    7,   22,  104,   98,   32,   54,   85,  154, },  // left 6
    {  85,   13,   27,  120,  192,  128,   57,   73,   51, },  // left 7
    {  18,    7,   12,   29,   67,   37,   40,  240,  192, },  // left 8
    {  35,   40,   32,   55,   57,   37,  147,  165,  154, },  // left 9
  }, {  // Above 9
    { 190,   31,   91,  133,   82,  229,  152,   59,  141, },  // left 0
    {  85,   47,  155,  116,  163,  213,  141,   85,  171, },  // left 1
    { 101,    8,   78,  184,  186,  142,  118,   37,  128, },  // left 2
    {  56,   40,   49,   37,  128,  183,  219,  149,  205, },  // left 3
    { 146,   92,   56,  184,   45,  229,  114,  102,    1, },  // left 4
    {  71,   45,   37,  107,   51,   32,  110,  224,    1, },  // left 5
    { 101,   26,   43,  111,  158,  102,   45,   91,  228, },  // left 6
    { 138,   17,   48,  117,  144,  255,   81,   20,   21, },  // left 7
    {  32,   33,   47,   64,   93,   73,  101,  179,  171, },  // left 8
    { 112,  125,   38,  113,   56,  213,  168,  154,  192, },  // left 9
  },
};
