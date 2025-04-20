/* This defines will be replaced by PinNames soon */
#if defined (TARGET_KL25Z) || defined (TARGET_KL46Z)
#define ELEC0 9
#define ELEC1 10
#elif defined (TARGET_KL05Z)
#define ELEC0 9
#define ELEC1 8
#else
#error TARGET NOT DEFINED
#endif

TSIAnalogSlider tsi(ELEC0, ELEC1, 40);
float lire_slider()
{
    return (1-tsi.readPercentage());
}