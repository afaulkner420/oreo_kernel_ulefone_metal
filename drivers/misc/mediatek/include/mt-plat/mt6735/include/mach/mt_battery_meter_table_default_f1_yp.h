
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900
#endif

#define RBAT_PULL_UP_VOLT          1800

typedef struct _BATTERY_PROFILE_STRUCT {
	signed int percentage;
	signed int voltage;
} BATTERY_PROFILE_STRUCT, *BATTERY_PROFILE_STRUCT_P;

typedef struct _R_PROFILE_STRUCT {
	signed int resistance;
	signed int voltage;
} R_PROFILE_STRUCT, *R_PROFILE_STRUCT_P;

typedef enum {
	T1_0C,
	T2_25C,
	T3_50C
} PROFILE_TEMPERATURE;

#if (BAT_NTC_10 == 1)
BATT_TEMPERATURE Batt_Temperature_Table[] = {
	{-20, 68237},
	{-15, 53650},
	{-10, 42506},
	{ -5, 33892},
	{  0, 27219},
	{  5, 22021},
	{ 10, 17926},
	{ 15, 14674},
	{ 20, 12081},
	{ 25, 10000},
	{ 30, 8315},
	{ 35, 6948},
	{ 40, 5834},
	{ 45, 4917},
	{ 50, 4161},
	{ 55, 3535},
	{ 60, 3014}
};
#endif

#if (BAT_NTC_47 == 1)
	BATT_TEMPERATURE Batt_Temperature_Table[] = {
	{-20, 483954},
	{-15, 360850},
	{-10, 271697},
	{ -5, 206463},
	{  0, 158214},
	{  5, 122259},
	{ 10, 95227},
	{ 15, 74730},
	{ 20, 59065},
	{ 25, 47000},
	{ 30, 37643},
	{ 35, 30334},
	{ 40, 24591},
	{ 45, 20048},
	{ 50, 16433},
	{ 55, 13539},
	{ 60, 11210}
	};
#endif

/* T0 -10C*/
BATTERY_PROFILE_STRUCT battery_profile_t0[] = {
{0   ,4335},
{2   ,4310},
{4   ,4289},
{7   ,4269},
{9   ,4250},
{11 ,4232},
{13 ,4213},
{15 ,4196},
{17 ,4184},
{20 ,4172},
{22 ,4150},
{24 ,4122},
{26 ,4097},
{28 ,4078},
{30 ,4063},
{33 ,4052},
{35 ,4039},
{37 ,4021},
{39 ,3984},
{41 ,3922},
{43 ,3896},
{46 ,3880},
{48 ,3868},
{50 ,3858},
{52 ,3848},
{54 ,3838},
{56 ,3829},
{59 ,3819},
{61 ,3810},
{63 ,3800},
{65 ,3790},
{67 ,3781},
{69 ,3772},
{72 ,3764},
{74 ,3756},
{76 ,3748},
{78 ,3740},
{80 ,3731},
{83 ,3721},
{85 ,3709},
{87 ,3695},
{89 ,3678},
{91 ,3657},
{93 ,3628},
{96 ,3587},
{98 ,3524},
{100,3415},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
};

/* T1 0C */
BATTERY_PROFILE_STRUCT battery_profile_t1[] = {
{0   ,4346},
{2   ,4324},
{4   ,4302},
{6   ,4283},
{8   ,4264},
{10 ,4245},
{12 ,4227},
{14 ,4209},
{15 ,4190},
{17 ,4170},
{19 ,4154},
{21 ,4122},
{23 ,4077},
{25 ,4043},
{27 ,4012},
{29 ,3987},
{31 ,3967},
{33 ,3953},
{35 ,3939},
{37 ,3926},
{39 ,3912},
{41 ,3898},
{42 ,3885},
{44 ,3874},
{46 ,3864},
{48 ,3854},
{50 ,3846},
{52 ,3837},
{54 ,3830},
{56 ,3822},
{58 ,3815},
{60 ,3808},
{62 ,3801},
{64 ,3795},
{66 ,3788},
{68 ,3781},
{70 ,3774},
{71 ,3767},
{73 ,3761},
{75 ,3754},
{77 ,3747},
{79 ,3739},
{81 ,3731},
{83 ,3723},
{85 ,3716},
{87 ,3708},
{89 ,3700},
{91 ,3690},
{93 ,3675},
{95 ,3649},
{97 ,3601},
{98 ,3521},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
};

/* T2 25C*/
BATTERY_PROFILE_STRUCT battery_profile_t2[] = {
{0   ,4342},
{2   ,4317},
{3   ,4296},
{5   ,4276},
{7   ,4258},
{8   ,4239},
{10 ,4220},
{12 ,4202},
{13 	,4185},
{15 	,4167},
{16 	,4150},
{18 	,4133},
{20 	,4116},
{21 	,4100},
{23 	,4085},
{25 	,4073},
{26 	,4055},
{28 	,4034},
{30 	,4017},
{31 	,4003},
{33 	,3991},
{35 	,3978},
{36 	,3965},
{38 	,3951},
{39 	,3936},
{41 	,3921},
{43 	,3906},
{44 	,3893},
{46 	,3881},
{48 	,3871},
{49 	,3862},
{51 	,3853},
{53 	,3845},
{54 	,3838},
{56 	,3832},
{58 	,3825},
{59 	,3819},
{61 	,3813},
{63 	,3808},
{64 	,3802},
{66 	,3797},
{67 	,3792},
{69 	,3788},
{71 	,3782},
{72 	,3777},
{74 	,3772},
{76 	,3767},
{77 	,3762},
{79 	,3756},
{81 	,3750},
{82 	,3743},
{84 	,3733},
{86 	,3724},
{87 	,3712},
{89 	,3703},
{90 	,3700},
{92 	,3698},
{94 	,3695},
{95 	,3682},
{97 	,3628},
{99 	,3533},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
};

/* T3 50C*/
BATTERY_PROFILE_STRUCT battery_profile_t3[] = {
{0    ,4344 },
{2    ,4320 },
{3    ,4299 },
{5    ,4279 },
{6    ,4260 },
{8    ,4241 },
{10  ,4222 },
{11	,4204 },
{13	,4187 },
{15	,4169 },
{16	,4151 },
{18	,4134 },
{19	,4117 },
{21	,4100 },
{23	,4085 },
{24	,4068 },
{26	,4053 },
{28	,4037 },
{29	,4023 },
{31	,4008 },
{32	,3994 },
{34	,3980 },
{36	,3967 },
{37	,3953 },
{39	,3940 },
{40	,3927 },
{42	,3912 },
{44	,3896 },
{45	,3881 },
{47	,3868 },
{49	,3857 },
{50	,3848 },
{52	,3839 },
{53	,3831 },
{55	,3824 },
{57	,3817 },
{58	,3810 },
{60	,3804 },
{62	,3798 },
{63	,3793 },
{65	,3788 },
{66	,3783 },
{68	,3778 },
{70	,3772 },
{71	,3766 },
{73	,3758 },
{74	,3750 },
{76	,3743 },
{78	,3736 },
{79	,3730 },
{81	,3724 },
{83	,3717 },
{84	,3708 },
{86	,3698 },
{87	,3688 },
{89	,3677 },
{91	,3674 },
{92	,3672 },
{94	,3670 },
{96	,3659 },
{97	,3607 },
{99	,3517 },
{100,3400 },
{100,3400 },
{100,3400 },
{100,3400 },
};
BATTERY_PROFILE_STRUCT battery_profile_temperature[] = {
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
  {0, 0},
};
/* ============================================================*/
/* <Rbat, Battery_Voltage> Table*/
/* ============================================================*/
/* T0 -10C*/
R_PROFILE_STRUCT r_profile_t0[] = {
{236 ,4335},
{236 ,4310},
{240 ,4289},
{243 ,4269},
{245 ,4250},
{248 ,4232},
{249 ,4213},
{249 ,4196},
{258 ,4184},
{274 ,4172},
{278 ,4150},
{274 ,4122},
{274 ,4097},
{281 ,4078},
{295 ,4063},
{320 ,4052},
{352 ,4039},
{406 ,4021},
{529 ,3984},
{769 ,3922},
{823 ,3896},
{826 ,3880},
{826 ,3868},
{828 ,3858},
{830 ,3848},
{832 ,3838},
{833 ,3829},
{835 ,3819},
{837 ,3810},
{838 ,3800},
{842 ,3790},
{845 ,3781},
{850 ,3772},
{856 ,3764},
{862 ,3756},
{870 ,3748},
{879 ,3740},
{888 ,3731},
{901 ,3721},
{915 ,3709},
{933 ,3695},
{953 ,3678},
{977 ,3657},
{1008,3628},
{1050,3587},
{1111,3524},
{996  ,3415},
{996,3400},
{996,3400},
{996,3400},
{996,3400},
{996,3400},
{996,3400},
{996,3400},
{996,3400},
{996,3400},
{996,3400},
{996,3400},
{996,3400},
{996,3400},
{996,3400},
{996,3400},
{996,3400},
{996,3400},
{996,3400},
{996,3400},
};

/* T1 0C*/
R_PROFILE_STRUCT r_profile_t1[] = {
{128 ,4346},
{128 ,4324},
{128 ,4302},
{127 ,4283},
{128 ,4264},
{127 ,4245},
{129 ,4227},
{132 ,4209},
{136 ,4190},
{140 ,4170},
{161 ,4154},
{192 ,4122},
{256 ,4077},
{355 ,4043},
{404 ,4012},
{414 ,3987},
{417 ,3967},
{418 ,3953},
{421 ,3939},
{419 ,3926},
{418 ,3912},
{416 ,3898},
{415 ,3885},
{416 ,3874},
{416 ,3864},
{417 ,3854},
{419 ,3846},
{420 ,3837},
{421 ,3830},
{423 ,3822},
{425 ,3815},
{425 ,3808},
{427 ,3801},
{428 ,3795},
{429 ,3788},
{427 ,3781},
{428 ,3774},
{428 ,3767},
{428 ,3761},
{428 ,3754},
{430 ,3747},
{431 ,3739},
{432 ,3731},
{433 ,3723},
{438 ,3716},
{447 ,3708},
{456 ,3700},
{468 ,3690},
{481 ,3675},
{497 ,3649},
{514 ,3601},
{546 ,3521},
{624 ,3400},
{624,3400},
{624,3400},
{624,3400},
{624,3400},
{624,3400},
{624,3400},
{624,3400},
{624,3400},
{624,3400},
{624,3400},
{624,3400},
{624,3400},
{624,3400},
};

/* T2 25C*/
R_PROFILE_STRUCT r_profile_t2[] = {
{78  ,4342},
{78  ,4317},
{80  ,4296},
{82  ,4276},
{82  ,4258},
{85  ,4239},
{85  ,4220},
{87  ,4202},
{89  ,4185},
{90  ,4167},
{91  ,4150},
{92  ,4133},
{95  ,4116},
{97  ,4100},
{100,4085},
{102,4073},
{102,4055},
{103,4034},
{108,4017},
{111,4003},
{112,3991},
{113,3978},
{111,3965},
{109,3951},
{106,3936},
{100,3921},
{94 ,3906},
{90 ,3893},
{88 ,3881},
{85 ,3871},
{86 ,3862},
{85 ,3853},
{85 ,3845},
{86 ,3838},
{89 ,3832},
{89 ,3825},
{90 ,3819},
{90 ,3813},
{92 ,3808},
{93 ,3802},
{93 ,3797},
{94 ,3792},
{95 ,3788},
{93 ,3782},
{93 ,3777},
{91 ,3772},
{90 ,3767},
{89 ,3762},
{87 ,3756},
{89 ,3750},
{88 ,3743},
{88 ,3733},
{88 ,3724},
{87 ,3712},
{84 ,3703},
{85 ,3700},
{91 ,3698},
{101,3695},
{109,3682},
{99  ,3628},
{106,3533},
{129,3400},
{129,3400},
{129,3400},
{129,3400},
{129,3400},
};

/* T3 50C*/
R_PROFILE_STRUCT r_profile_t3[] = {
{53 ,4344 },
{53 ,4320 },
{54 ,4299 },
{53 ,4279 },
{54 ,4260 },
{55 ,4241 },
{55 ,4222 },
{55,4204 },
{56,4187 },
{57,4169 },
{57,4151 },
{58,4134 },
{58,4117 },
{59,4100 },
{61,4085 },
{62,4068 },
{63,4053 },
{64,4037 },
{66,4023 },
{68,4008 },
{69,3994 },
{71,3980 },
{72,3967 },
{74,3953 },
{77,3940 },
{77,3927 },
{74,3912 },
{68,3896 },
{61,3881 },
{58,3868 },
{55,3857 },
{54,3848 },
{55,3839 },
{54,3831 },
{56,3824 },
{56,3817 },
{57,3810 },
{59,3804 },
{60,3798 },
{62,3793 },
{62,3788 },
{64,3783 },
{64,3778 },
{66,3772 },
{64,3766 },
{60,3758 },
{58,3750 },
{57,3743 },
{57,3736 },
{57,3730 },
{57,3724 },
{57,3717 },
{58,3708 },
{57,3698 },
{58,3688 },
{53,3677 },
{55,3674 },
{60,3672 },
{67,3670 },
{70,3659 },
{61,3607 },
{65,3517 },
{79,3400 },
{79,3400 },
{79,3400 },
{79,3400 },
};

/* r-table profile for actual temperature. The size should be the same as T1, T2 and T3*/
R_PROFILE_STRUCT r_profile_temperature[] = {
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
 {0, 0},
};

/* ============================================================
// function prototype
// ============================================================*/
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUCT_P fgauge_get_profile(unsigned int temperature);
         
int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUCT_P fgauge_get_profile_r_table(unsigned int temperature);

