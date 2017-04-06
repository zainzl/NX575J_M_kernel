#ifndef _MT_PMIC_API_BUCK_H_
#define _MT_PMIC_API_BUCK_H_

/* -------- generated by version : buck coda v1.0 ------------ */
/* -------- date : 2015-12-01                   ------------ */

/* -------- Buck VPROC  API ------------ Type3 */
/* define EN by sw mode */
void pmic_buck_vproc_sw_en(int en_value);

enum buck_vproc_ensel {
	VPROC_ENSEL_SRCLKEN0,
	VPROC_ENSEL_SRCLKEN1,
	VPROC_ENSEL_SRCLKEN0_OR_SRCLKEN1,
	VPROC_ENSEL_SRCLKEN0_AND_SRCLKEN1,
	VPROC_ENSEL_SRCLKEN2,
	VPROC_ENSEL_SRCLKEN0_OR_SRCLKEN2,
	VPROC_ENSEL_SRCLKEN1_OR_SRCLKEN2,
	VPROC_ENSEL_SRCLKEN0_OR_SRCLKEN1_OR_SRCLKEN2
};

/* define EN by hw mode */
void pmic_buck_vproc_hw_en(int ensel_value);

enum buck_vproc_lpsel {
	VPROC_LPSEL_SRCLKEN0,
	VPROC_LPSEL_SRCLKEN1,
	VPROC_LPSEL_SRCLKEN0_OR_SRCLKEN1,
	VPROC_LPSEL_SRCLKEN0_AND_SRCLKEN1,
	VPROC_LPSEL_SRCLKEN2,
	VPROC_LPSEL_SRCLKEN0_OR_SRCLKEN2,
	VPROC_LPSEL_SRCLKEN1_OR_SRCLKEN2,
	VPROC_LPSEL_SRCLKEN0_OR_SRCLKEN1_OR_SRCLKEN2
};

/* define VOSEL by hw mode */
void pmic_buck_vproc_hw_vosel(int ensel_value);

/* define VOSEL by sw mode */
void pmic_buck_vproc_sw_vosel(void);
/* -------- Buck VPROC  API end ------------ /Type3 */

/* -------- Buck VS1    API ------------ Type3 */
/* define EN by sw mode */
void pmic_buck_vs1_sw_en(int en_value);

enum buck_vs1_ensel {
	VS1_ENSEL_SRCLKEN0,
	VS1_ENSEL_SRCLKEN1,
	VS1_ENSEL_SRCLKEN0_OR_SRCLKEN1,
	VS1_ENSEL_SRCLKEN0_AND_SRCLKEN1,
	VS1_ENSEL_SRCLKEN2,
	VS1_ENSEL_SRCLKEN0_OR_SRCLKEN2,
	VS1_ENSEL_SRCLKEN1_OR_SRCLKEN2,
	VS1_ENSEL_SRCLKEN0_OR_SRCLKEN1_OR_SRCLKEN2
};

/* define EN by hw mode */
void pmic_buck_vs1_hw_en(int ensel_value);

enum buck_vs1_lpsel {
	VS1_LPSEL_SRCLKEN0,
	VS1_LPSEL_SRCLKEN1,
	VS1_LPSEL_SRCLKEN0_OR_SRCLKEN1,
	VS1_LPSEL_SRCLKEN0_AND_SRCLKEN1,
	VS1_LPSEL_SRCLKEN2,
	VS1_LPSEL_SRCLKEN0_OR_SRCLKEN2,
	VS1_LPSEL_SRCLKEN1_OR_SRCLKEN2,
	VS1_LPSEL_SRCLKEN0_OR_SRCLKEN1_OR_SRCLKEN2
};

/* define VOSEL by hw mode */
void pmic_buck_vs1_hw_vosel(int ensel_value);

/* define VOSEL by sw mode */
void pmic_buck_vs1_sw_vosel(void);
/* -------- Buck VS1    API end ------------ /Type3 */

/* -------- Buck VCORE  API ------------ Type3 */
/* define EN by sw mode */
void pmic_buck_vcore_sw_en(int en_value);

enum buck_vcore_ensel {
	VCORE_ENSEL_SRCLKEN0,
	VCORE_ENSEL_SRCLKEN1,
	VCORE_ENSEL_SRCLKEN0_OR_SRCLKEN1,
	VCORE_ENSEL_SRCLKEN0_AND_SRCLKEN1,
	VCORE_ENSEL_SRCLKEN2,
	VCORE_ENSEL_SRCLKEN0_OR_SRCLKEN2,
	VCORE_ENSEL_SRCLKEN1_OR_SRCLKEN2,
	VCORE_ENSEL_SRCLKEN0_OR_SRCLKEN1_OR_SRCLKEN2
};

/* define EN by hw mode */
void pmic_buck_vcore_hw_en(int ensel_value);

enum buck_vcore_lpsel {
	VCORE_LPSEL_SRCLKEN0,
	VCORE_LPSEL_SRCLKEN1,
	VCORE_LPSEL_SRCLKEN0_OR_SRCLKEN1,
	VCORE_LPSEL_SRCLKEN0_AND_SRCLKEN1,
	VCORE_LPSEL_SRCLKEN2,
	VCORE_LPSEL_SRCLKEN0_OR_SRCLKEN2,
	VCORE_LPSEL_SRCLKEN1_OR_SRCLKEN2,
	VCORE_LPSEL_SRCLKEN0_OR_SRCLKEN1_OR_SRCLKEN2
};

/* define VOSEL by hw mode */
void pmic_buck_vcore_hw_vosel(int ensel_value);

/* define VOSEL by sw mode */
void pmic_buck_vcore_sw_vosel(void);
/* -------- Buck VCORE  API end ------------ /Type3 */

/* -------- Buck VCORE2 API ------------ Type3 */
/* define EN by sw mode */
void pmic_buck_vcore2_sw_en(int en_value);

enum buck_vcore2_ensel {
	VCORE2_ENSEL_SRCLKEN0,
	VCORE2_ENSEL_SRCLKEN1,
	VCORE2_ENSEL_SRCLKEN0_OR_SRCLKEN1,
	VCORE2_ENSEL_SRCLKEN0_AND_SRCLKEN1,
	VCORE2_ENSEL_SRCLKEN2,
	VCORE2_ENSEL_SRCLKEN0_OR_SRCLKEN2,
	VCORE2_ENSEL_SRCLKEN1_OR_SRCLKEN2,
	VCORE2_ENSEL_SRCLKEN0_OR_SRCLKEN1_OR_SRCLKEN2
};

/* define EN by hw mode */
void pmic_buck_vcore2_hw_en(int ensel_value);

enum buck_vcore2_lpsel {
	VCORE2_LPSEL_SRCLKEN0,
	VCORE2_LPSEL_SRCLKEN1,
	VCORE2_LPSEL_SRCLKEN0_OR_SRCLKEN1,
	VCORE2_LPSEL_SRCLKEN0_AND_SRCLKEN1,
	VCORE2_LPSEL_SRCLKEN2,
	VCORE2_LPSEL_SRCLKEN0_OR_SRCLKEN2,
	VCORE2_LPSEL_SRCLKEN1_OR_SRCLKEN2,
	VCORE2_LPSEL_SRCLKEN0_OR_SRCLKEN1_OR_SRCLKEN2
};

/* define VOSEL by hw mode */
void pmic_buck_vcore2_hw_vosel(int ensel_value);

/* define VOSEL by sw mode */
void pmic_buck_vcore2_sw_vosel(void);

/*--------  SPM Support Start -----------*/
/*--return 0: use_count = 0--*/
/*--return 1: use_count > 0--*/
int pmic_buck_vcore2_en_status(void);

/*--buck_name = VGPU/VMODEM, mode = 0 ,SW, en_value = 1/0 (on/off)--*/
/*--buck_name = VGPU/VMODEM, mode = 1 ,HW, en_value = srclk [0-7] --*/
int pmic_buck_vcore2_en(char *buck_name, int mode, int en_value);
/*--------  SPM Support End -----------*/

/* -------- Buck VCORE2 API end ------------ /Type3 */

/* -------- Buck VPA    API ------------ Type0 */
/* define EN by sw mode */
void pmic_buck_vpa_sw_en(int en_value);
/* -------- Buck VPA    API end ------------ /Type0 */

/* -------- Buck VSRAM_PROC API ------------ Type3 */
/* define EN by sw mode */
void pmic_ldo_vsram_proc_sw_en(int en_value);

/* define EN by hw mode */
void pmic_ldo_vsram_proc_hw_en(int ensel_value);

/* define VOSEL by hw mode */
void pmic_ldo_vsram_proc_hw_vosel(int ensel_value);

/* define VOSEL by sw mode */
void pmic_ldo_vsram_proc_sw_vosel(void);
/* -------- Buck VSRAM_PROC API end ------------ /Type3 */
void vmd1_pmic_setting_on(void);
void vmd1_pmic_setting_off(void);

#endif				/* _MT_PMIC_API_BUCK_H_ */
