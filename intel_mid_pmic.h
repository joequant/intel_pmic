#ifndef __INTEL_MID_PMIC_H__
#define __INTEL_MID_PMIC_H__

int intel_mid_pmic_readb(int reg);
int intel_mid_pmic_writeb(int reg, u8 val);
int intel_mid_pmic_setb(int reg, u8 mask);
int intel_mid_pmic_clearb(int reg, u8 mask);
int intel_mid_pmic_update(int reg, u8 val, u8 mask);
int intel_mid_pmic_set_pdata(const char *name, void *data, int len, int id);
struct device *intel_mid_pmic_dev(void);
#endif

