Quality and speed of the tested rng functions
=============================================
dieharder v3.31.2beta https://rurban.github.io/dieharder/QUALITY.html
For PractRand and bigcrush TestU01 results see https://github.com/lemire/testingRNG

`rng_name _g<num> :<num_weak>`

BEST
----
_no FAILED, 0 WEAK_

| rng function                |    ints/sec| doubles/sec |
|:----------------------------|-----------:|------------:|
|wyrand_g210_a_Y1.out:0       |    319345  |     283551  |
|xoshiro128+_g213_a.out:0     |    289544  |     257579  |
|xoroshiro64ss_g214_a.out:0   |    261519  |     267279  |
|xoshiro128++_g211_a.out:0    |    260260  |     246457  |
|xoroshiro64s_g215_a_Y1.out:0 |    254123  |     272197  |
|lxm_g232_a_Y1.out:0          |    215959  |     205161  |
|efiix64_g231_a.out           |    173178  |     171191  |

GOOD
----
_no FAILED, 1 WEAK_

| rng function                  |    ints/sec| doubles/sec |
|:------------------------------|-----------:|------------:|
|xoroshiro128+_g221_a.out:1     |    250752  |     257546  |
|xoroshiro128ss_g220_a.out:1    |    258438  |     263123  |
|widynski_g250_a_Y1.out:1       |    259127  |     267222  |
|xoshiro128ss_g212_a.out:1      |    256337  |     234257  |
|romutrio_g234_a_Y1.out:1       |    275307  |     224290  |
|pcg64_cmdxsm_g227_a_Y1.out:1   |    240633  |     238640  |
|mt64_g241_a_Y1.out:1           |    209086  |     208872  |
|mt19937_g013_a.out:1           |    118291  |     111515  |
|ca_g203_a.out:1                |    117518  |      70488  |
|mt19937_1998_g015_a.out:1      |    106327  |     101035  |
|R_mersenne_twister_g403_a.out:1|     88174  |     121088  |
|ranlux389_g044_a.out:1         |     10980  |      11295  |

WEAK
----
_no FAILED, >1 WEAK_

| rng function                  |    ints/sec| doubles/sec |
|:------------------------------|-----------:|------------:|
|pcg64_g225_a.out:2             |    237129  |     227795  |
|taus_g052_a.out:2              |    215197  |     226952  |
|taus2_g053_a.out:2             |    214293  |     226557  |
|kiss_g208_a.out:2              |    193869  |     188893  |
|hc-128_g232_a_Y1.out:2         |    153583  |      99089  |
|Threefish_OFB_g206_a.out:2     |     92264  |      87436  |
|chacha_g243_a_Y1.out:2         |     80999  |      51838  |
|ranlxd2_g046_a.out:2           |      7344  |       7381  |
|tt800_g056_a.out:3             |    201869  |     192733  |
|uvag_g204_a.out:3              |    184928  |     168279  |
|mt19937_1999_g014_a.out:3      |    125415  |     106326  |
|aesni_g246_a.out:3             |     96292  |     100698  |
|R_wichmann_hill_g400_a.out:3   |     91092  |     107046  |
|speck-128_g244_a_Y1_r34.out:3  |     72961  |      71054  |
|AES_OFB_g205_a.out:3           |     41845  |      43167  |
|ranlxd1_g045_a.out:3           |     12999  |      13124  |
|jsf_g222_a.out:4               |    268269  |     267802  |
|romuquad_g235_a_Y1.out:4       |    277531  |     258264  |
|pcg32_g224_a.out:5             |    289259  |     290343  |
|speck-128_g244_a_Y1_r32.out:5  |     97501  |      84899  |
|mitchellmoore_g249_a_Y1.out:6  |    156484  |     159245  |
|pcg64_dxsm_g226_a_Y1.out:7     |    220254  |     221719  |
|speck-128_g244_a_Y1_r28.out:12 |     97501  |      84899  |
|splitmix64_g247_a_Y1.out:16    |    301914  |     311439  |

BAD
---
`rng_name _g<num> :<num_failed> :<num_weak>`

_some FAILED, sorted from better to worst.

| rng function                           |    ints/sec| doubles/sec |
|:---------------------------------------|-----------:|------------:|
|sfmt_g245_a_Y1.out:1:0                  |    257412  |     224290  |
|knuthran_g007_a.out:1:1                 |    146661  |     143808  |
|ran1_g018_a.out:1:1                     |    131138  |     131297  |
|R_knuth_taocp2_g405_a.out:1:1           |     63948  |      74029  |
|ran2_g019_a.out:1:2                     |    127187  |     116320  |
|cmrg_g001_a.out:1:2                     |     48569  |      48308  |
|mrg_g012_a.out:1:2                      |     67691  |      64419  |
|knuthran2002_g009_a.out:1:2             |     91739  |      91349  |
|random256-libc5_g028_a.out:1:3          |    256147  |     233508  |
|fishman2x_g005_a.out:1:3                |    145062  |     139989  |
|knuthran2_g008_a.out:1:3                |     32190  |      33162  |
|random256-glibc2_g027_a.out:1:5         |    249862  |     243048  |
|random256-bsd_g026_a.out:1:6            |    266354  |     257891  |
|R_knuth_taocp_g404_a.out:1:7            |     66739  |      76904  |
|lehmer64_g248_a_Y1.out:1:8              |    286631  |     279571  |
|superkiss_g209_a.out:2:1                |    171833  |     160053  |
|zuf_g061_a.out:2:1                      |     96728  |      91205  |
|ranlux_g043_a.out:2:1                   |     19451  |      18611  |
|ranlux389_g044_a.out:2:1                |     10980  |      11295  |
|uni32_g058_a.out:2:2                    |    252640  |     250388  |
|ranlxs0_g047_a.out:2:2                  |     35475  |      35375  |
|random128-libc5_g025_a.out:2:3          |    250431  |     255356  |
|ranlxs2_g049_a.out:2:3                  |     13514  |      13628  |
|random-libc5_g040_a.out:2:4             |    240836  |     257042  |
|ranmar_g050_a.out:2:4                   |    256910  |     114092  |
|ranlxs1_g048_a.out:2:4                  |     23459  |      23458  |
|random128-bsd_g023_a.out:2:5            |    273380  |     257380  |
|random128-glibc2_g024_a.out:2:5         |    246609  |     248799  |
|random-glibc2_g039_a.out:2:5            |    252143  |     244875  |
|random-bsd_g038_a.out:2:6               |    248731  |     226269  |
|dev_random-5.7.15-x86_64_g500_a.out:3:0 |       592  |        589  |
|rand48_g022_a.out:4:2                   |    220317  |      52375  |
|ranf_g042_a.out:4:2                     |    170389  |      43780  |
|fishman18_g003_a.out:4:4                |     59570  |      61943  |
|R_super_duper_g402_a.out:4:5            |    120652  |     149900  |
|fishman20_g004_a.out:4:6                |    131150  |     137650  |
|lecuyer21_g010_a.out:5:3                |    133477  |     136423  |
|R_marsaglia_multic._g401_a.out:5:4      |    134321  |     164498  |
|random64-glibc2_g033_a.out:5:8          |    266141  |     242653  |
|uni_g057_a.out:6:2                      |    253646  |     243439  |
|ran0_g017_a.out:6:3                     |    135058  |     139091  |
|minstd_g011_a.out:6:5                   |    141091  |     145448  |
|random64-bsd_g032_a.out:6:6             |    250708  |     257009  |
|random64-libc5_g034_a.out:8:4           |    255905  |     249712  |
|rdrand_g242_a-AMDBroken.out:15:19       |        77  |         76  |

VERY BAD
--------
_>20 FAILED_

| rng function                    |    ints/sec| doubles/sec |
|:--------------------------------|-----------:|------------:|
|random32-libc5_g031_a.out:42:3   |    264068  |     260057  |
|random32-glibc2_g030_a.out:42:7  |    190407  |     255996  |
|random32-bsd_g029_a.out:42:8     |    226983  |     239257  |
|jsf64_g223_a.out:43:1            |    266035  |     119906  |
|ran3_g020_a.out:46:4             |    207947  |     176844  |
|vax_g059_a.out:52:8              |    251016  |     281984  |
|rand_g021_a.out:55:6             |    248040  |     263060  |
|random8-bsd_g035_a.out:55:7      |    272264  |     267902  |
|random8-glibc2_g036_a.out:57:3   |    206134  |     223593  |
|random8-libc5_g037_a.out:57:2    |    243167  |     204507  |
|coveyou_g002_a.out:59:4          |    214472  |     180995  |
|transputer_g055_a.out:61:2       |    268773  |     304812  |
|waterman14_g060_a.out:62:1       |    297610  |     315666  |
|borosh13_g000_a.out:62:4         |    296709  |     315268  |
|randu_g041_a.out:68:5            |    224744  |     257824  |
|slatec_g051_a.out:75:4           |    158755  |     165730  |
