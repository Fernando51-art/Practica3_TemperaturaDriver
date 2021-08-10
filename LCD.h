
#ifndef LCD_H_
#define LCD_H_

extern void DPY_vfnDriverInit (void);
extern void delayMs(int n);
extern void InitPins(void);
extern void StepSet(void);
extern void Step1Clear(void);
extern void StepReturnH(void);
extern void StepOnOff(void);

extern void writeT(void);
extern void writeE(void);
extern void writeM(void);
extern void writeP(void);
extern void write2points(void);
#endif

